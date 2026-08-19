#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>   /* isdigit(), isalpha() */

#define MAX_DEPENDENTES 10

void clear() {
    printf("\033[2J\033[H");
}


/*PARTE 1*/ /* Armazena os dados de cada dependente do cliente titular: */
typedef struct {
    char cpf[15];
    char nome[50];
    int  diaNasc;
    int  mesNasc;
    int  anoNasc;
} TDependente;

/*PARTE 2*/ /* Armazena todos os dados do cliente titular e de seus dependentes: */
typedef struct {
    char cpf[15];
    char nome[50];
    int  sexo;
    char email[50];
    char telefone[20];
    int  diaNasc;
    int  mesNasc;
    int  anoNasc;
    int  plano;
    int  qtdDependentes;
    TDependente dependentes[MAX_DEPENDENTES];
    float valorPlano;
    int   diaVenc;
    int   mesVenc;
    int   anoVenc;
} TCliente;

/*PARTE 3*/ /* Variaveis globais do sistema: */
FILE     *pcliente;
TCliente  clienteAux;
TCliente  clienteNulo;

/* MODULO CPF */

/* 
   Extrai apenas os digitos de uma string.
   Retorna 1 se encontrou exatamente 11 digitos, 0 caso contrario.
   Letras tornam o CPF invalido; pontos, tracoes e espacos sao ignorados */
int extrairDigitosCPF(const char *entrada, char *digitos)
{
    int count = 0;
    int i;

    for (i = 0; entrada[i] != '\0'; i++)
    {
        if (isdigit((unsigned char)entrada[i]))
        {
            if (count >= 11) return 0; /* mais de 11 digitos = invalido */
            digitos[count++] = entrada[i];
        }
        else if (isalpha((unsigned char)entrada[i]))
        {
            return 0; /* letra encontrada = invalido */
        }
        /* pontos, tracoes e espacos sao silenciosamente ignorados */
    }

    digitos[count] = '\0';
    return count == 11;
}

/* Formata 11 digitos no padrao XXX.XXX.XXX-XX */
void formatarCPF(const char *digitos, char *cpfFormatado)
{
    snprintf(cpfFormatado, 15,
        "%c%c%c.%c%c%c.%c%c%c-%c%c",
        digitos[0], digitos[1], digitos[2],
        digitos[3], digitos[4], digitos[5],
        digitos[6], digitos[7], digitos[8],
        digitos[9], digitos[10]);
}

/* Le e valida CPF do usuario via fgets, salvando ja formatado.
   Retorna 1 em sucesso, 0 em falha.
   FIX 2 (aceita letras), FIX 3 (mascara/sem mascara) resolvidos aqui */
int lerCPF(char *cpfFormatado)
{
    char entrada[50];
    char digitos[12];

    printf("CPF: ");
    fflush(stdout);

    /* Limpa o buffer antes de fgets (pode haver '\n' de scanf anterior) */
    {
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    if (fgets(entrada, sizeof(entrada), stdin) == NULL) return 0;

    /* Remove o '\n' que fgets deixa no final */
    entrada[strcspn(entrada, "\n")] = '\0';

    if (!extrairDigitosCPF(entrada, digitos))
    {
        printf("CPF invalido! Use apenas numeros (com ou sem formatacao).\n");
        return 0;
    }

    formatarCPF(digitos, cpfFormatado);
    return 1;
}

/* cpfExisteSistema
   Verifica se um CPF (ja formatado) existe entre titulares
   OU entre dependentes de qualquer cliente */
int cpfExisteSistema(char cpf[])
{
    TCliente temp;
    int i;

    rewind(pcliente);

    while (fread(&temp, sizeof(TCliente), 1, pcliente) == 1)
    {
        if (strcmp(temp.cpf, cpf) == 0)
            return 1;

        for (i = 0; i < temp.qtdDependentes; i++)
        {
            if (strcmp(temp.dependentes[i].cpf, cpf) == 0)
                return 1;
        }
    }

    return 0;
}

/*PARTE 4*/ /* Funcao que abre (ou cria) o arquivo de clientes: */
void abrirArquivo() {

    pcliente = fopen("clientes.dat", "r+b");

    if (pcliente == NULL) {
        pcliente = fopen("clientes.dat", "w+b");
    }

    if (pcliente == NULL) {
        printf("ERRO: Nao foi possivel abrir/criar o arquivo!\n");
        exit(1);
    }
}

/*PARTE 5*/ /* Funcao que inicializa o cliente nulo: */
void inicializarClienteNulo() {
    memset(&clienteNulo, 0, sizeof(TCliente));
}

/*PARTE 6*/ /* Funcao que calcula a idade do cliente: */
int calcularIdade(int anoNascimento) {
    return 2026 - anoNascimento;
}

/*PARTE 7*/ /* Funcao que converte o codigo numerico do plano para texto: */
void nomePlano(int plano, char *destino) {
    if      (plano == 1) strcpy(destino, "Ouro");
    else if (plano == 2) strcpy(destino, "Diamante");
    else if (plano == 3) strcpy(destino, "Prata");
    else if (plano == 4) strcpy(destino, "Esmeralda");
    else                 strcpy(destino, "---");
}

/*PARTE 8*/ /* Funcao que calcula o valor mensal do plano de saude: */
float calcularPlano(int plano, int sexo, int idade, int dependentes) {
    float valor = 0;

    /* 1. Define valor base pelo tipo de plano */
    if (plano == 1) valor = 300.0f;
    if (plano == 2) valor = 400.0f;
    if (plano == 3) valor = 200.0f;
    if (plano == 4) valor = 500.0f;

    /* 2. Acrescimos e descontos individuais sobre o valor base */
    if (sexo == 1 && idade >= 13 && idade < 35) {
        valor = valor + (valor * 0.30f);   /* +30% mulher 13-34 anos */
    }

    if (idade < 13) {
        valor = valor - (valor * 0.30f);   /* -30% menor de 13 anos */
    }

    if (idade >= 60) {
        valor = valor + (valor * 0.40f);   /* +40% maior/igual 60 anos */
    }

    /* 3. Desconto de dependentes aplicado POR ULTIMO sobre o valor TOTAL */
    if (dependentes > 1) {
        valor = valor - (valor * 0.20f);   /* -20% com mais de 1 dependente */
    }

    return valor;
}

/* Valida se a data e logicamente correta (mes com 30/31 dias, fev ate 29).
   Nao usa bissexto completo pois o enunciado permite fev ate 29 */
int dataValida(int dia, int mes, int ano)
{
    if (ano < 1900 || ano > 2026)
        return 0;

    if (mes < 1 || mes > 12)
        return 0;

    if (dia < 1)
        return 0;

    switch (mes)
    {
        case 4: case 6: case 9: case 11:
            return dia <= 30;
        case 2:
            return dia <= 29;
        default:
            return dia <= 31;
    }
}

/*PARTE 9*/ /* FIX 10 substituido por cpfExisteSistema acima.
   Mantemos cpfExiste apenas para procurarCPF (busca so titulares): */
int cpfExiste(char cpfBusca[]) {

    TCliente temp;

    rewind(pcliente);

    while (fread(&temp, sizeof(TCliente), 1, pcliente) == 1) {

        if (strlen(temp.cpf) > 0 &&
            strcmp(temp.cpf, cpfBusca) == 0) {
            return 1;
        }
    }

    return 0;
}

/*PARTE 10*/ /* Funcao que procura a posicao de um CPF no arquivo: */
int procurarCPF(char cpfBusca[]) {

    TCliente temp;
    int pos = 0;

    rewind(pcliente);

    while (fread(&temp, sizeof(TCliente), 1, pcliente) == 1) {

        if (strlen(temp.cpf) > 0 &&
            strcmp(temp.cpf, cpfBusca) == 0) {
            return pos;
        }

        pos++;
    }

    return -1;
}

/*PARTE 11*/ /* Funcao que pausa e aguarda o ENTER do usuario: */
void aguardarEnter() {
    int c;
    /* Limpa qualquer '\n' ou lixo que sobrou no buffer do scanf anterior */
    while ((c = getchar()) != '\n' && c != EOF);
    printf("\nTecle ENTER para voltar ao Menu...");
    getchar();
}

/*PARTE 12*/ /* Funcao que exibe os dados completos de um cliente: */
void mostrarCliente(int posicao) {

    int  i, idade;
    char planoNome[20];

    fseek(pcliente, (long)posicao * sizeof(TCliente), SEEK_SET);
    fread(&clienteAux, sizeof(TCliente), 1, pcliente);

    idade = calcularIdade(clienteAux.anoNasc);
    nomePlano(clienteAux.plano, planoNome);

    printf("\n--------------------------------------------------");
    printf("\nCPF           : %s", clienteAux.cpf);
    printf("\nNome          : %s", clienteAux.nome);
    printf("\nSexo          : %s", (clienteAux.sexo == 1) ? "Feminino" : "Masculino");
    printf("\nTelefone      : %s", clienteAux.telefone);
    printf("\nEmail         : %s", clienteAux.email);
    printf("\nNascimento    : %02d/%02d/%04d", clienteAux.diaNasc, clienteAux.mesNasc, clienteAux.anoNasc);
    printf("\nIdade         : %d anos", idade);
    printf("\nPlano         : %s", planoNome);
    printf("\nValor do Plano: R$ %.2f", clienteAux.valorPlano);
    printf("\nVencimento    : %02d/%02d/%04d", clienteAux.diaVenc, clienteAux.mesVenc, clienteAux.anoVenc);
    printf("\nDependentes   : %d", clienteAux.qtdDependentes);

    for (i = 0; i < clienteAux.qtdDependentes; i++) {
        printf("\n  [Dep %d] CPF: %s | Nome: %s | Nasc: %02d/%02d/%04d",
            i + 1,
            clienteAux.dependentes[i].cpf,
            clienteAux.dependentes[i].nome,
            clienteAux.dependentes[i].diaNasc,
            clienteAux.dependentes[i].mesNasc,
            clienteAux.dependentes[i].anoNasc);
    }

    printf("\n--------------------------------------------------\n");
}

/*PARTE 13*/ /* Funcao que cadastra um novo cliente no arquivo: */
void cadastrarCliente() {
    clear();

    int i, idade;

    /* Zera clienteAux para evitar lixo de cadastros anteriores */
    memset(&clienteAux, 0, sizeof(TCliente));

    printf("\n=== CADASTRAR CLIENTE ===\n");

    /* LerCPF valida letras e normaliza a mascara */
    do {
        if (!lerCPF(clienteAux.cpf))
            continue;

        /* verifica duplicidade em titulares E dependentes */
        if (cpfExisteSistema(clienteAux.cpf)) {
            printf("CPF ja cadastrado no sistema! Operacao cancelada.\n");
            return;
        }

        break;
    } while (1);

    printf("Nome: "); scanf(" %49[^\n]", clienteAux.nome);

    /* scanf com tratamento de entrada invalida */
    do {
        printf("Sexo (1-Feminino / 2-Masculino): ");
        if (scanf("%d", &clienteAux.sexo) != 1) {
            printf("Entrada invalida!\n");
            while (getchar() != '\n');
            clienteAux.sexo = -1;
        }
    } while (clienteAux.sexo != 1 && clienteAux.sexo != 2);

    printf("Email: "); scanf("%49s", clienteAux.email);

    printf("Telefone: "); scanf("%19s", clienteAux.telefone);

    /* Validacao da data de nascimento do titular (dia/mes/ano juntos) */
    do {
        printf("Data de nascimento (dd mm aaaa): ");
        if (scanf("%d %d %d",
                  &clienteAux.diaNasc,
                  &clienteAux.mesNasc,
                  &clienteAux.anoNasc) != 3) {
            printf("Entrada invalida!\n");
            while (getchar() != '\n');
            clienteAux.diaNasc = 0;
            clienteAux.mesNasc = 0;
            clienteAux.anoNasc = 0;
        }
        /* ano de nascimento nao pode ser futuro (2026 e o ano atual) */
        if (clienteAux.anoNasc == 2026) {
            printf("Aviso: nascimento no ano atual pode ser invalido.\n");
        }
    } while (!dataValida(clienteAux.diaNasc, clienteAux.mesNasc, clienteAux.anoNasc));

    /* plano */
    do {
        printf("Plano (1-Ouro / 2-Diamante / 3-Prata / 4-Esmeralda): ");
        if (scanf("%d", &clienteAux.plano) != 1) {
            printf("Entrada invalida!\n");
            while (getchar() != '\n');
            clienteAux.plano = -1;
        }
    } while (clienteAux.plano < 1 || clienteAux.plano > 4);

    /* quantidade de dependentes */
    do {
        printf("Quantidade de dependentes (0 para nenhum): ");
        if (scanf("%d", &clienteAux.qtdDependentes) != 1) {
            printf("Entrada invalida!\n");
            while (getchar() != '\n');
            clienteAux.qtdDependentes = -1;
        }
    } while (clienteAux.qtdDependentes < 0 || clienteAux.qtdDependentes > MAX_DEPENDENTES);

    for (i = 0; i < clienteAux.qtdDependentes; i++) {

        printf("\n--- Dados do Dependente %d ---\n", i + 1);

        /* CPF do dependente */
        do {
            int j, repetido = 0;

            if (!lerCPF(clienteAux.dependentes[i].cpf))
                continue;

            /* FIX 5 â€” dependente nao pode ter o mesmo CPF do titular */
            if (strcmp(clienteAux.cpf, clienteAux.dependentes[i].cpf) == 0) {
                printf("CPF do dependente nao pode ser igual ao do titular!\n");
                continue;
            }

            /* FIX 4 â€” dependentes nao podem ter CPFs repetidos entre si */
            for (j = 0; j < i; j++) {
                if (strcmp(clienteAux.dependentes[i].cpf,
                           clienteAux.dependentes[j].cpf) == 0) {
                    repetido = 1;
                    printf("CPF ja cadastrado em outro dependente!\n");
                    break;
                }
            }
            if (repetido) continue;

            /* FIX 10 â€” CPF nao pode existir em nenhum outro cliente/dependente */
            if (cpfExisteSistema(clienteAux.dependentes[i].cpf)) {
                printf("CPF ja cadastrado no sistema!\n");
                continue;
            }

            break;
        } while (1);

        printf("Nome do dependente : "); scanf(" %49[^\n]", clienteAux.dependentes[i].nome);

        /* FIX 1 â€” data de nascimento do dependente */
        do {
            printf("Data de nascimento (dd mm aaaa): ");
            if (scanf("%d %d %d",
                      &clienteAux.dependentes[i].diaNasc,
                      &clienteAux.dependentes[i].mesNasc,
                      &clienteAux.dependentes[i].anoNasc) != 3) {
                printf("Entrada invalida!\n");
                while (getchar() != '\n');
                clienteAux.dependentes[i].diaNasc = 0;
                clienteAux.dependentes[i].mesNasc = 0;
                clienteAux.dependentes[i].anoNasc = 0;
            }
        } while (!dataValida(clienteAux.dependentes[i].diaNasc,
                             clienteAux.dependentes[i].mesNasc,
                             clienteAux.dependentes[i].anoNasc));
    }

    /* FIX 9 â€” Validacao da data de vencimento (nao pode ser anterior a hoje) */
    do {
        printf("\nData de vencimento (dd mm aaaa): ");
        if (scanf("%d %d %d",
                  &clienteAux.diaVenc,
                  &clienteAux.mesVenc,
                  &clienteAux.anoVenc) != 3) {
            printf("Entrada invalida!\n");
            while (getchar() != '\n');
            clienteAux.diaVenc = 0;
            clienteAux.mesVenc = 0;
            clienteAux.anoVenc = 0;
            continue;
        }
        if (!dataValida(clienteAux.diaVenc, clienteAux.mesVenc, clienteAux.anoVenc)) {
            printf("Data invalida!\n");
            continue;
        }
        /* Vencimento deve ser >= data atual (15/06/2026) */
        if (clienteAux.anoVenc < 2026 ||
           (clienteAux.anoVenc == 2026 && clienteAux.mesVenc < 6) ||
           (clienteAux.anoVenc == 2026 && clienteAux.mesVenc == 6 && clienteAux.diaVenc < 15)) {
            printf("Data de vencimento invalida! Deve ser a partir de 15/06/2026.\n");
            continue;
        }
        break;
    } while (1);

    idade = calcularIdade(clienteAux.anoNasc);
    clienteAux.valorPlano = calcularPlano(clienteAux.plano, clienteAux.sexo, idade, clienteAux.qtdDependentes);

    fseek(pcliente, 0, SEEK_END);
    fwrite(&clienteAux, sizeof(TCliente), 1, pcliente);

    printf("\nCliente cadastrado com sucesso!\n");
    printf("Valor do plano calculado: R$ %.2f\n", clienteAux.valorPlano);
}

/*PARTE 14*/ /* Funcao que edita os dados de um cliente existente: */
void editarCliente() {
    clear();

    char cpf[15];
    int  posicao, opcao, idade, i;

    printf("\n=== EDITAR CLIENTE ===\n");

    /* Usa lerCPF na busca tambem */
    do {
        if (lerCPF(cpf)) break;
    } while (1);

    posicao = procurarCPF(cpf);

    if (posicao == -1) {
        printf("Cliente nao encontrado!\n");
        aguardarEnter();
        return;
    }

    mostrarCliente(posicao);

    printf("\nO que deseja editar?\n");
    printf("1 - Nome\n");
    printf("2 - Sexo\n");
    printf("3 - Email\n");
    printf("4 - Telefone\n");
    printf("5 - Data de nascimento\n");
    printf("6 - Plano de saude\n");
    printf("7 - Dependentes\n");
    printf("8 - Data de vencimento\n");
    printf("0 - Cancelar\n");

    /* Scanf com tratamento de entrada invalida */
    printf("\nOpcao: ");
    if (scanf("%d", &opcao) != 1) {
        printf("Entrada invalida!\n");
        while (getchar() != '\n');
        opcao = -1;
    }

    switch (opcao) {

        case 1:
            printf("Novo nome: "); scanf(" %49[^\n]", clienteAux.nome);
            break;

        case 2:
            do {
                printf("Novo sexo (1-Feminino / 2-Masculino): ");
                if (scanf("%d", &clienteAux.sexo) != 1) {
                    printf("Entrada invalida!\n");
                    while (getchar() != '\n');
                    clienteAux.sexo = -1;
                }
            } while (clienteAux.sexo != 1 && clienteAux.sexo != 2);
            /* Recalcula o valor pois o sexo afeta o preco */
            idade = calcularIdade(clienteAux.anoNasc);
            clienteAux.valorPlano = calcularPlano(clienteAux.plano, clienteAux.sexo, idade, clienteAux.qtdDependentes);
            printf("Novo valor do plano: R$ %.2f\n", clienteAux.valorPlano);
            break;

        case 3:
            printf("Novo email: "); scanf("%49s", clienteAux.email);
            break;

        case 4:
            printf("Novo telefone: "); scanf("%19s", clienteAux.telefone);
            break;

        case 5:
            /* Data como unidade */
            do {
                printf("Nova data de nascimento (dd mm aaaa): ");
                if (scanf("%d %d %d",
                          &clienteAux.diaNasc,
                          &clienteAux.mesNasc,
                          &clienteAux.anoNasc) != 3) {
                    printf("Entrada invalida!\n");
                    while (getchar() != '\n');
                    clienteAux.diaNasc = 0;
                }
            } while (!dataValida(clienteAux.diaNasc, clienteAux.mesNasc, clienteAux.anoNasc));
            /* Recalcula valor pois a idade afeta o preco */
            idade = calcularIdade(clienteAux.anoNasc);
            clienteAux.valorPlano = calcularPlano(clienteAux.plano, clienteAux.sexo, idade, clienteAux.qtdDependentes);
            printf("Novo valor do plano: R$ %.2f\n", clienteAux.valorPlano);
            break;

        case 6:
            do {
                printf("Novo plano (1-Ouro / 2-Diamante / 3-Prata / 4-Esmeralda): ");
                if (scanf("%d", &clienteAux.plano) != 1) {
                    printf("Entrada invalida!\n");
                    while (getchar() != '\n');
                    clienteAux.plano = -1;
                }
            } while (clienteAux.plano < 1 || clienteAux.plano > 4);
            idade = calcularIdade(clienteAux.anoNasc);
            clienteAux.valorPlano = calcularPlano(clienteAux.plano, clienteAux.sexo, idade, clienteAux.qtdDependentes);
            printf("Novo valor do plano: R$ %.2f\n", clienteAux.valorPlano);
            break;

        case 7:
            do {
                printf("Nova quantidade de dependentes (0 a %d): ", MAX_DEPENDENTES);
                if (scanf("%d", &clienteAux.qtdDependentes) != 1) {
                    printf("Entrada invalida!\n");
                    while (getchar() != '\n');
                    clienteAux.qtdDependentes = -1;
                }
            } while (clienteAux.qtdDependentes < 0 || clienteAux.qtdDependentes > MAX_DEPENDENTES);

            for (i = 0; i < clienteAux.qtdDependentes; i++) {
                printf("\n--- Dados do Dependente %d ---\n", i + 1);

                /* Mesma logica do cadastro */
                do {
                    int j, repetido = 0;

                    if (!lerCPF(clienteAux.dependentes[i].cpf))
                        continue;

                    if (strcmp(clienteAux.cpf, clienteAux.dependentes[i].cpf) == 0) {
                        printf("CPF do dependente nao pode ser igual ao do titular!\n");
                        continue;
                    }

                    for (j = 0; j < i; j++) {
                        if (strcmp(clienteAux.dependentes[i].cpf,
                                   clienteAux.dependentes[j].cpf) == 0) {
                            repetido = 1;
                            printf("CPF ja cadastrado em outro dependente!\n");
                            break;
                        }
                    }
                    if (repetido) continue;

                    if (cpfExisteSistema(clienteAux.dependentes[i].cpf)) {
                        printf("CPF ja cadastrado no sistema!\n");
                        continue;
                    }

                    break;
                } while (1);

                printf("Nome do dependente : "); scanf(" %49[^\n]", clienteAux.dependentes[i].nome);

                do {
                    printf("Data de nascimento (dd mm aaaa): ");
                    if (scanf("%d %d %d",
                              &clienteAux.dependentes[i].diaNasc,
                              &clienteAux.dependentes[i].mesNasc,
                              &clienteAux.dependentes[i].anoNasc) != 3) {
                        printf("Entrada invalida!\n");
                        while (getchar() != '\n');
                        clienteAux.dependentes[i].diaNasc = 0;
                    }
                } while (!dataValida(clienteAux.dependentes[i].diaNasc,
                                     clienteAux.dependentes[i].mesNasc,
                                     clienteAux.dependentes[i].anoNasc));
            }

            /* Limpa dependentes antigos apos reducao de quantidade */
            for (i = clienteAux.qtdDependentes; i < MAX_DEPENDENTES; i++) {
                memset(&clienteAux.dependentes[i], 0, sizeof(TDependente));
            }

            /* Recalcula valor pois qtd de dependentes afeta o preco */
            idade = calcularIdade(clienteAux.anoNasc);
            clienteAux.valorPlano = calcularPlano(clienteAux.plano, clienteAux.sexo, idade, clienteAux.qtdDependentes);
            printf("Novo valor do plano: R$ %.2f\n", clienteAux.valorPlano);
            break;

        case 8:
            /* Data de vencimento valida e nao retroativa */
            do {
                printf("Nova data de vencimento (dd mm aaaa): ");
                if (scanf("%d %d %d",
                          &clienteAux.diaVenc,
                          &clienteAux.mesVenc,
                          &clienteAux.anoVenc) != 3) {
                    printf("Entrada invalida!\n");
                    while (getchar() != '\n');
                    clienteAux.diaVenc = 0;
                    continue;
                }
                if (!dataValida(clienteAux.diaVenc, clienteAux.mesVenc, clienteAux.anoVenc)) {
                    printf("Data invalida!\n");
                    continue;
                }
                if (clienteAux.anoVenc < 2026 ||
                   (clienteAux.anoVenc == 2026 && clienteAux.mesVenc < 6) ||
                   (clienteAux.anoVenc == 2026 && clienteAux.mesVenc == 6 && clienteAux.diaVenc < 15)) {
                    printf("Data de vencimento invalida! Deve ser a partir de 15/06/2026.\n");
                    continue;
                }
                break;
            } while (1);
            break;

        case 0:
            printf("Edicao cancelada.\n");
            return;

        default:
            printf("Opcao invalida!\n");
            return;
    }

    fseek(pcliente, (long)posicao * sizeof(TCliente), SEEK_SET);
    fwrite(&clienteAux, sizeof(TCliente), 1, pcliente);

    printf("\nDados alterados com sucesso!\n");
    aguardarEnter();
}

/*PARTE 15*/ /* Funcao que remove um cliente do arquivo (remocao logica): */
void removerCliente() {
    clear();

    char cpf[15];
    int  posicao, confirmacao;

    printf("\n=== REMOVER CLIENTE ===\n");

    do {
        if (lerCPF(cpf)) break;
    } while (1);

    posicao = procurarCPF(cpf);

    if (posicao == -1) {
        printf("Cliente nao encontrado!\n");
        return;
    }

    mostrarCliente(posicao);

    printf("Confirmar remocao? (1-Sim / 0-Nao): ");
    if (scanf("%d", &confirmacao) != 1) {
        printf("Entrada invalida!\n");
        while (getchar() != '\n');
        return;
    }

    if (confirmacao != 1) {
        printf("Remocao cancelada.\n");
        return;
    }

    fseek(pcliente, (long)posicao * sizeof(TCliente), SEEK_SET);
    fwrite(&clienteNulo, sizeof(TCliente), 1, pcliente);

    printf("\nCliente removido com sucesso!\n");
}

/*PARTE 16*/ /* Funcao que lista todos os clientes cadastrados: */
void listarGeral() {
    clear();

    int  total = 0, idade;
    char planoNome[20];

    printf("\n=== LISTAGEM GERAL ===\n\n");

    printf("%-14s %-25s %-10s %-15s %-25s %5s %-10s %5s %12s %-12s\n",
        "CPF", "Nome", "Sexo", "Telefone", "Email",
        "Idade", "Plano", "Dep.", "Valor Plano", "Vencimento");

    printf("%-14s %-25s %-10s %-15s %-25s %5s %-10s %5s %12s %-12s\n",
        "--------------", "-------------------------", "----------",
        "---------------", "-------------------------", "-----",
        "----------", "-----", "------------", "------------");

    rewind(pcliente);

    while (fread(&clienteAux, sizeof(TCliente), 1, pcliente) == 1) {

        if (strlen(clienteAux.cpf) == 0) continue;

        idade = calcularIdade(clienteAux.anoNasc);
        nomePlano(clienteAux.plano, planoNome);

        printf("%-14s %-25s %-10s %-15s %-25s %5d %-10s %5d %12.2f %02d/%02d/%04d\n",
            clienteAux.cpf, clienteAux.nome,
            (clienteAux.sexo == 1) ? "Feminino" : "Masculino",
            clienteAux.telefone, clienteAux.email,
            idade, planoNome, clienteAux.qtdDependentes,
            clienteAux.valorPlano,
            clienteAux.diaVenc, clienteAux.mesVenc, clienteAux.anoVenc);

        total++;
    }

    if (total == 0) {
        printf("\nNenhum cliente cadastrado.\n");
    } else {
        printf("\nTotal de clientes: %d\n", total);
    }

    aguardarEnter();
}

/*PARTE 17*/ /* Funcao que lista clientes filtrados por tipo de plano: */
void listarPlano() {
    clear();

    int  planoBusca, total = 0;
    char planoNome[20];

    printf("\n=== LISTAGEM POR PLANO ===\n");
    printf("\n1 - Ouro");
    printf("\n2 - Diamante");
    printf("\n3 - Prata");
    printf("\n4 - Esmeralda");
    printf("\n\nEscolha: ");

    /* FIX 7 */
    if (scanf("%d", &planoBusca) != 1) {
        printf("Entrada invalida!\n");
        while (getchar() != '\n');
        return;
    }

    if (planoBusca < 1 || planoBusca > 4) {
        printf("Opcao invalida!\n");
        return;
    }

    nomePlano(planoBusca, planoNome);
    printf("\nClientes com plano %s:\n\n", planoNome);

    rewind(pcliente);

    while (fread(&clienteAux, sizeof(TCliente), 1, pcliente) == 1) {

        if (strlen(clienteAux.cpf) == 0) continue;
        if (clienteAux.plano != planoBusca) continue;

        printf("---------------------\n");
        printf("CPF      : %s\n",     clienteAux.cpf);
        printf("Nome     : %s\n",     clienteAux.nome);
        printf("Telefone : %s\n",     clienteAux.telefone);
        printf("Plano    : %s\n",     planoNome);
        printf("Valor    : R$ %.2f\n", clienteAux.valorPlano);
        printf("---------------------\n");

        total++;
    }

    if (total == 0) {
        printf("Nenhum cliente com o plano %s.\n", planoNome);
    } else {
        printf("\nTotal: %d cliente(s).\n", total);
    }

    aguardarEnter();
}

/*PARTE 18*/ /* Funcao que lista os vencimentos de planos de um mes: */
void listarVencimentos() {
    clear();

    int  mes, total = 0;
    char planoNome[20];

    printf("\n=== VENCIMENTOS DO MES ===\n");

    do {
        printf("Digite o mes (1-12): ");
        if (scanf("%d", &mes) != 1) {
            printf("Entrada invalida!\n");
            while (getchar() != '\n');
            mes = -1;
        }
    } while (mes < 1 || mes > 12);

    printf("\nClientes com vencimento no mes %02d:\n\n", mes);

    rewind(pcliente);

    while (fread(&clienteAux, sizeof(TCliente), 1, pcliente) == 1) {

        if (strlen(clienteAux.cpf) == 0) continue;
        if (clienteAux.mesVenc != mes) continue;

        nomePlano(clienteAux.plano, planoNome);

        printf("---------------------\n");
        printf("CPF        : %s\n",       clienteAux.cpf);
        printf("Nome       : %s\n",       clienteAux.nome);
        printf("Plano      : %s\n",       planoNome);
        printf("Valor      : R$ %.2f\n",  clienteAux.valorPlano);
        printf("Vencimento : %02d/%02d/%04d\n",
            clienteAux.diaVenc, clienteAux.mesVenc, clienteAux.anoVenc);
        printf("---------------------\n");

        total++;
    }

    if (total == 0) {
        printf("Nenhum vencimento no mes %02d.\n", mes);
    } else {
        printf("\nTotal: %d vencimento(s).\n", total);
    }

    aguardarEnter();
}

/*PARTE 19*/ /* Funcao que exibe o menu principal do sistema: */
void menu() {
    clear();

    printf("\n========================");
    printf("\n      NUCLEO SAUDE      ");
    printf("\n========================");
    printf("\n1 - Cadastrar Cliente");
    printf("\n2 - Editar Cliente");
    printf("\n3 - Remover Cliente");
    printf("\n4 - Listagem Geral");
    printf("\n5 - Listagem por Plano");
    printf("\n6 - Vencimentos do Mes");
    printf("\n0 - Sair");
    printf("\n\nOpcao: ");
}

/*PARTE 20*/ /* Funcao principal - Nosso coracao do sistema: */
int main() {

    int opcao;

    abrirArquivo();
    inicializarClienteNulo();

    do {
        menu();

        /* Entrada invalida no menu principal */
        if (scanf("%d", &opcao) != 1) {
            printf("Entrada invalida!\n");
            while (getchar() != '\n');
            opcao = -1;
        }

        switch (opcao) {
            case 1: cadastrarCliente();  break;
            case 2: editarCliente();     break;
            case 3: removerCliente();    break;
            case 4: listarGeral();       break;
            case 5: listarPlano();       break;
            case 6: listarVencimentos(); break;
            case 0: printf("\nSaindo... Ate logo!\n"); break;
            default: printf("\nOpcao invalida! Tente novamente.\n"); break;
        }

    } while (opcao != 0);

    fclose(pcliente);

    return 0;
}
