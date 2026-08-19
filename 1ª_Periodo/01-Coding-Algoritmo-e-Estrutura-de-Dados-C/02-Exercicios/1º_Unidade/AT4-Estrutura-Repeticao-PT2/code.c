//1 Escreva um programa que imprima os numeros de 1 a 10 usando while:


#include <stdio.h>
int main() {
    int numero = 1;
    while (numero <= 10) {
        printf("%d ", numero);
        numero = numero + 1;
    }
    return 0;
}

//2 Faca um programa que leia um numero e exiba a tabuada dele (de 1 a 10) usando while:


#include <stdio.h>
int main() {
    int m = 1, numero = 0;
    printf("Digite um numero");
    scanf("%d", &numero);
    while (m <= 10) {
        printf("%d x %d = %d\n", numero, m, numero * m);
        m = m + 1;
    }
    return 0;
}

//3 Crie um programa que conte quantos numeros pares existem entre 1 e 50 usando while:


#include <stdio.h>
int main() {

    int contador, pares;
    contador = 1;
    pares = 0;

    while (contador <= 50) {
        if (contador % 2 == 0) { 
            pares++;
        }
        contador++;
        }

        printf("Quantidade de numeros pares: %d\n", pares);
    return 0;
}

//4 Desenvolva um programa que leia numeros ate que o usuario digite 0 e mostre a soma dos valores:


#include <stdio.h>
int main() {

    int numero, soma;
    soma = 0;
    numero = 1;

    while (numero != 0) {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (numero != 0) {
            soma = soma + numero;
        }
    }

    printf("Soma = %d\n", soma);
    return 0;
}

//5 Faca um programa que leia a senha correta (1234) e continue pedindo até o usuario acertar:


#include <stdio.h>
int main() {
    int senha;
    senha = 0;
    while (senha != 1234) {
        printf("Digite a senha: ");
        scanf("%d", &senha);
        if (senha != 1234) {
            printf("Senha errada!\n");
        }
    }
    printf("Acertou!\n");
    return 0;
}

//6 Escreva um programa que peca um numero positivo. Continue pedindo enquanto o valor for negativo:


#include <stdio.h>
int main() {
    int numero;
    printf("Digite um numero positivo: ");
    scanf("%d", &numero);
    
    while (numero < 0){
        printf("Valor invalido! Digite novamente: ");
        scanf("%d", &numero);
    }
    printf("Numero valido digitado: %d\n", numero);

    return 0;
}

//7 Crie um programa que exiba os numeros de 1 a 10 usando do...while:


#include <stdio.h>
int main() {
    int contador;
    contador = 1;
    do {
        printf("%d\n", contador);
        contador++;
    } while (contador <= 10);
    
    return 0;
}

//10 Escreva um programa que imprima os numeros de 1 a 20 usando for:


#include <stdio.h>
int main() {

    for (int i = 1; i <= 20; i++) {
        printf("%d\n", i);
    }

    return 0;
}

//11 Faça um programa que mostre apenas os numeros impares de 1 a 50:


#include <stdio.h>
int main() {

    for (int i = 1; i <= 50; i++) {
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
