//1 Maior numero (while):

#include <stdio.h>

int main() {
    int num, maior;

    printf("Digite numeros (0 para parar): ");
    scanf("%d", &num);

    maior = num;

    while (num != 0) {
        if (num > maior) {
            maior = num;
        }
        printf("Digite: ");
        scanf("%d", &num);
    }

    printf("Maior numero: %d\n", maior);
    return 0;
}

//2 Media 50 alunos (while):

#include <stdio.h>

int main() {
    int i = 1, nota;
    float soma = 0, media;

    while (i <= 50) {
        printf("Nota do aluno %d: ", i);
        scanf("%d", &nota);
        soma += nota;
        i++;
    }

    media = soma / 50;
    printf("Media: %.2f\n", media);

    return 0;
}

//3 Media (do-while):
#include <stdio.h>

int main() {
    int i = 1, nota;
    float soma = 0, media;

    do {
        printf("Nota do aluno %d: ", i);
        scanf("%d", &nota);
        soma += nota;
        i++;
    } while (i <= 50);

    media = soma / 50;
    printf("Media: %.2f\n", media);

    return 0;
}

//4 Media (for):

#include <stdio.h>

int main() {
    int i, nota;
    float soma = 0, media;

    for (i = 1; i <= 50; i++) {
        printf("Nota do aluno %d: ", i);
        scanf("%d", &nota);
        soma += nota;
    }

    media = soma / 50;
    printf("Media: %.2f\n", media);

    return 0;
}

//5 Soma dos impares:



#include <stdio.h>

int main() {
    int i, num, soma = 0;

    for (i = 1; i <= 50; i++) {
        printf("Digite o %dº numero: ", i);
        scanf("%d", &num);
        if (num % 2 && num != 0) {
            soma += num;
        }
    }

    printf("Soma dos impares: %d\n", soma);
    return 0;
}

//6 impares entre 100 e 200:

#include <stdio.h>

int main() {
    int i, num, soma = 0;

    for (i = 1; i <= 5; i++) {
        printf("Digite o %dº numero: ", i);
        scanf("%d", &num);

        if (num >= 100 && num <= 200 && num % 2 != 0) {
            soma += num;
        }
    }

    printf("Soma dos numeros impares entre 100 e 200: %d\n", soma);
    return 0;
}

//7 Maior e menor:

#include <stdio.h>

int main() {
    int i, num, maior, menor;

    printf("Digite o 1º numero: ");
    scanf("%d", &num);
    maior = menor = num;

    for (i = 2; i <= 50; i++) {
        printf("Digite o %dº numero: ", i);
        scanf("%d", &num);

        if (num > maior) maior = num;
        if (num < menor) menor = num;
    }

    printf("Maior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);
    return 0;
}

//8 Multiplicacao sem *:

#include <stdio.h>

int main() {
    int a, b, resultado = 0, i;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    for (i = 0; i < b; i++) {
        resultado += a;
    }

    printf("Resultado da multiplicação: %d\n", resultado);
    return 0;
}

//9 Media dos pares:

#include <stdio.h>

int main() {
    int num, qtd = 0;
    float soma = 0, media;

    while (1) {
        printf("Digite um numero positivo (0 para parar): ");
        scanf("%d", &num);

        if (num == 0) break;

        if (num % 2 == 0) {
            soma += num;
            qtd++;
        }
    }

    if (qtd > 0) {
        media = soma / qtd;
        printf("Media dos numeros pares: %.2f\n", media);
    } else {
        printf("Nenhum numero par foi digitado.\n");
    }

    return 0;
}

//10 Pesquisa cinema:

#include <stdio.h>
#include <unistd.h>
#include <time.h>
void clear() { printf("\033[2J\033[H"); }

int main() {
  int i = 1,
  idade = 0, sexo = 0, opn = 0, qnt = 0;
  float per, med, total_homens = 0, idade_total = 0, qnt_F = 0;

  for(i = 1; i <= 15; i++){
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    while(sexo != 1 && sexo != 2){
    clear();
    printf("Digite seu sexo:\nUtilize 1 para Feminino e 2 para Masculino: ");
    scanf("%d", &sexo);
    if(sexo != 1 && sexo != 2){
      clear();
      printf("Sexo inválido. Digite novamente.\n");
      sleep(2);
    }}
    clear();
    printf("Digite sua opinião:\nUtilize:\n1 - Não gostei\n2 - Esperava mais\n3 - Vale o ingresso\n4 - Excelente\n\n");
    scanf("%d", &opn);
    clear();

    if (opn == 1 && sexo == 2){
      total_homens++;
    }

    if (opn == 4 && sexo == 1){
      idade_total += idade;
      qnt_F++;
    }

    if (opn == 2){
      qnt++;
    }
  }

  per = (total_homens / 15.0) * 100;

  if(qnt_F > 0){
    med = idade_total / qnt_F;
  };

  printf("Percentual de Homens que não gostaram do filme: %.2f%%\n", per);
  printf("Quantidade de pessoas que esperavam mais do filme: %d\n", qnt);
  if(qnt_F > 0){
    printf("Média de idade de Mulheres que responderam Excelente: %.2f\n", med);
  } else {
    printf("Não há mulheres que responderam Excelente.\n");
  }

  return 0;
}
//11 Pesquisa TV:


#include <stdio.h>

int main() {
    int canal, pessoas;
    int a1 = 0, a2 = 0, a3 = 0, a4 = 0, total = 0;

    while (1) {
        printf("Digite o canal (1-SBT, 2-Record, 3-Globo, 4-RedeTV, 0 para parar): ");
        scanf("%d", &canal);
        if (canal == 0) break;

        printf("Digite o numero de pessoas assistindo: ");
        scanf("%d", &pessoas);

        if (canal == 1) a1 += pessoas;
        else if (canal == 2) a2 += pessoas;
        else if (canal == 3) a3 += pessoas;
        else if (canal == 4) a4 += pessoas;

        total += pessoas;
    }

    if (total > 0) {
        printf("Percentual de audiencia:\n");
        printf("SBT: %.2f%%\n", (a1 * 100.0) / total);
        printf("Record: %.2f%%\n", (a2 * 100.0) / total);
        printf("Globo: %.2f%%\n", (a3 * 100.0) / total);
        printf("RedeTV: %.2f%%\n", (a4 * 100.0) / total);
    } else {
        printf("Nenhuma informacao registrada.\n");
    }

    return 0;
}

//DESAFIO_Fatorial:

#include <stdio.h>

int main() {
    int n, i;
    long long fatorial = 1;

    printf("Digite um numero para calcular o fatorial: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        fatorial *= i;
    }

    printf("Fatorial de %d: %lld\n", n, fatorial);
    return 0;
}
