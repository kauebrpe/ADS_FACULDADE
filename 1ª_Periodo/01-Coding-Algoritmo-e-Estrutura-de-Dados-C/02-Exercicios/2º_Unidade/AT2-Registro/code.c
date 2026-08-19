//1 Cadastro de candidatos com vetor e funcoes + menu:

#include <stdio.h>

typedef struct {
    int mat;
    char nome[50];
    float nota;
} Tcandidato;

void cadastrarCandidatos(Tcandidato candidato[]) {

    int p;

    for (p = 0; p < 15; p++) {

        printf("\nCandidato %d\n", p + 1);

        printf("Matricula: ");
        scanf("%d", &candidato[p].mat);

        printf("Nome: ");
        scanf("%s", candidato[p].nome);

        printf("Nota: ");
        scanf("%f", &candidato[p].nota);
    }

    printf("\nCandidatos cadastrados com sucesso!\n");
}


void calcularMedia(Tcandidato candidato[]) {

    float soma = 0;
    float media;
    int p;

    for (p = 0; p < 15; p++) {

        soma = soma + candidato[p].nota;
    }

    media = soma / 15;

    printf("\nMedia geral: %.2f\n", media);
}


void maiorMenorNota(Tcandidato candidato[]) {

    int maior = 0;
    int menor = 0;
    int p;

    for (p = 1; p < 15; p++) {

        if (candidato[p].nota > candidato[maior].nota) {

            maior = p;
        }

        if (candidato[p].nota < candidato[menor].nota) {

            menor = p;
        }
    }

    printf("\nMaior nota:\n");
    printf("%s - %.2f\n", candidato[maior].nome, candidato[maior].nota);

    printf("\nMenor nota:\n");
    printf("%s - %.2f\n", candidato[menor].nome, candidato[menor].nota);
}


void buscarMatricula(Tcandidato candidato[]) {

    int matricula;
    int p;
    int encontrado = 0;

    printf("Digite a matricula: ");
    scanf("%d", &matricula);

    for (p = 0; p < 15; p++) {

        if (candidato[p].mat == matricula) {

            printf("\nNome: %s\n", candidato[p].nome);
            printf("Nota: %.2f\n", candidato[p].nota);

            encontrado = 1;
        }
    }

    if (encontrado == 0) {

        printf("Candidato nao encontrado!\n");
    }
}

int main() {

    Tcandidato candidato[15];

    int opcao;

    do {

        printf("\nMENU\n");
        printf("1 - Cadastrar candidatos\n");
        printf("2 - Media geral\n");
        printf("3 - Maior e menor nota\n");
        printf("4 - Buscar matricula\n");
        printf("0 - Sair\n");

        printf("Escolha: ");
        scanf("%d", &opcao);

        if (opcao == 1) {

            cadastrarCandidatos(candidato);
        }

        if (opcao == 2) {

            calcularMedia(candidato);
        }

        if (opcao == 3) {

            maiorMenorNota(candidato);
        }

        if (opcao == 4) {

            buscarMatricula(candidato);
        }

    } while (opcao != 0);

    return 0;
}


//2 Cadastro de contas bancarias com vetor e funcoes + menu:

#include <stdio.h>

typedef struct {
    int numero;
    int cod_cliente;
    char nome[50];
    float saldo;
} TConta;


int contaExiste(TConta conta[], int total, int numero) {

    int p;

    for (p = 0; p < total; p++) {

        if (conta[p].numero == numero) {

            return 1;
        }
    }

    return 0;
}


int cadastrarConta(TConta conta[], int total) {

    int numeroDigitado;

    if (total == 20) {

        printf("Limite de contas atingido!\n");

    } else {

        printf("\nNumero da conta: ");
        scanf("%d", &numeroDigitado);

        if (contaExiste(conta, total, numeroDigitado)) {

            printf("Conta ja cadastrada!\n");

        } else {

            conta[total].numero = numeroDigitado;

            printf("Codigo do cliente: ");
            scanf("%d", &conta[total].cod_cliente);

            printf("Nome do cliente: ");
            scanf(" %[^\n]", conta[total].nome);

            printf("Saldo: ");
            scanf("%f", &conta[total].saldo);

            total++;

            printf("Conta cadastrada com sucesso!\n");
        }
    }

    return total;
}


void buscarConta(TConta conta[], int total) {

    int codigo;
    int p;
    int encontrou = 0;

    printf("Digite o codigo do cliente: ");
    scanf("%d", &codigo);

    for (p = 0; p < total; p++) {

        if (conta[p].cod_cliente == codigo) {

            printf("\nConta: %d\n", conta[p].numero);
            printf("Nome: %s\n", conta[p].nome);
            printf("Saldo: %.2f\n", conta[p].saldo);

            encontrou = 1;
        }
    }

    if (encontrou == 0) {

        printf("Cliente nao encontrado!\n");
    }
}


void menorSaldo(TConta conta[], int total) {

    int p;
    int menor = 0;

    if (total == 0) {

        printf("Nenhuma conta cadastrada!\n");

    } else {

        for (p = 1; p < total; p++) {

            if (conta[p].saldo < conta[menor].saldo) {

                menor = p;
            }
        }

        printf("\nConta com menor saldo:\n");
        printf("Numero: %d\n", conta[menor].numero);
        printf("Nome: %s\n", conta[menor].nome);
        printf("Saldo: %.2f\n", conta[menor].saldo);
    }
}

int main() {

    TConta conta[20];

    int opcao;
    int total = 0;

    do {

        printf("\nMENU\n");
        printf("1 - Cadastrar contas\n");
        printf("2 - Visualizar contas do cliente\n");
        printf("3 - Conta com menor saldo\n");
        printf("0 - Sair\n");

        printf("Escolha: ");
        scanf("%d", &opcao);

        if (opcao == 1) {

            total = cadastrarConta(conta, total);
        }

        if (opcao == 2) {

            buscarConta(conta, total);
        }

        if (opcao == 3) {

            menorSaldo(conta, total);
        }

    } while (opcao != 0);

    return 0;
}
