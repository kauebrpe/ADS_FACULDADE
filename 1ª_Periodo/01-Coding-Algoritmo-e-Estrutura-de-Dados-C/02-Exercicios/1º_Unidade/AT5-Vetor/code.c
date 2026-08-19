//1 Construa um programa que preenche um vetor de inteiros de 100 numeros, colocando 0 nas posicoes par e 1 impar:

#include <stdio.h>
int main() {
    int v[100];
    int p;

    for (p = 0; p < 100; p++) {
        if (p % 2 == 0) {
            v[p] = 0;
        } else {
            v[p] = 1;
        }
    }

    for (p = 0; p < 100; p++) {
        printf("%d ", v[p]);
    }

    return 0;
}

//2 Construa um programa que le, soma e imprime o resultado da soma de um vetor de inteiros de 10 posicoes:

#include <stdio.h>
int main () {
  int p;
  int v[10];
  int soma = 0;
  for (p = 1; p <= 10; p++) {
    printf("Digite um numero: ");
    scanf("%i", &v[p]);
    soma += v[p];
  }
  printf("A soma dos numeros digitados é: %i\n", soma);
}

//3 Construa um programa que multiplique os valores de um vetor de reais de 20 posicoes pelo valores de um outro vetor de reais de 20 posicoes. Os resultados das multiplicacoes devem ser armazenados num terceiro vetor:

#include <stdio.h>
int main () {
  int p;
  float v1[20];
  float v2[20];
  float v3[20];

  for (p=0; p<20; p++){
    printf("Digite o valor %d: ", p);
    scanf("%f", &v1[p]);
  }

  for (p=0; p<20; p++){
    printf("Digite o valor %d: ", p);
    scanf("%f", &v2[p]);
  }

  for (p=0; p<20; p++) {
    v3[p] = v1[p] * v2[p];
    printf("%.2f\n", v3[p]);
  }
  return 0;
}

//4 Construa um programa que leia e guarde os elementos em um vetor de 20 posicoes. Selecione o elemento do vetor que guarda o menor e o maior valor:

#include <stdio.h>
int main () {
  int p;
  int v1[20];
  int maior;
  int menor;

  printf("Me diga um numero: ");
  scanf("%i", &v1[0]);
  maior = v1[0];
  menor = v1[0];
  
  for (p=1; p<20; p++){
    printf("Me diga um numero %d: ", p);
    scanf("%i", &v1[p]);
    
    if (v1[p] >= maior){
      maior = v1[p];
    }
    if (v1[p] <= menor){
      menor = v1[p];
    }
  }
  printf("O maior numero e %i e o menor e %i", maior, menor);
 
  return 0;
}

//5 Fazer um programa que preenche um vetor de 10 posicoes contendo as notas dos alunos de uma turma. Em seguida o programa deve imprimir a media aritmetica dos 10 alunos:

#include <stdio.h>
int main () {
  int p;
  float v1[10];
  float soma = 0;
  float media = 0;
 
  for (p=0; p<10; p++) {
    printf("Digite a nota: ");
    scanf("%f", &v1[p]);
    soma = soma + v1[p];
  }
  media = soma / 10;
  printf("A média é: %.2f", media);

  return 0;
}

//6 Faça um programa que leia 100 numeros inteiros em um vetor e depois exiba esses valores na ordem inversa das posicoes:

#include <stdio.h>
int main() {
    int v[100];
    int p;

    for (p = 0; p < 100; p++) {
        printf("Digite um numero: ");
        scanf("%d", &v[p]);
    }

    printf("Ordem inversa:\n");

    for (p = 99; p >= 0; p--) {
        printf("%d ", v[p]);
    }

    return 0;
}

//7 Construa um programa que le 100 numeros inteiros e imprime o resultado da media dos numeros impares de um vetor que estao na posicao par:

#include <stdio.h>
int main() {
    int v[100];
    int p, soma = 0, contador = 0;
    float media;

    for (p = 0; p < 100; p++) {
        printf("Digite um numero: ");
        scanf("%d", &v[p]);
    }

    for (p = 0; p < 100; p++) {
        if (p % 2 == 0 && v[p] % 2 != 0) {
            soma += v[p];
            contador++;
        }
    }

    if (contador > 0) {
        media = (float)soma / contador;
        printf("Media = %.2f", media);
    }

    return 0;
}
