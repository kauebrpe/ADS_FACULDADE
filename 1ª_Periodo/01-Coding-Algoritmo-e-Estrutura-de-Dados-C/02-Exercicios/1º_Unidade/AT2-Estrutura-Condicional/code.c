//1 Crie um algoritmo que leia um numero inteiro e verifique se ele e positivo, negativo ou zero:

#include <stdio.h>
int main(){
  int numero;
   printf("Me diga um numero:");
   scanf("%i", &numero);
   if ( numero > 0){
      printf("Seu numero é Positivo\n");
   }
   else if ( numero < 0){
      printf("Seu numero é Negativo\n");
   }
   else{
      printf("Seu numero é Nulo\n");
   }
  return 0;
}

//2 O IMC com tabela:

#include <stdio.h>
int main(){
      float peso, altura1, imc;
      printf("Digite o peso em kg: ");
      scanf("%f", &peso);
      printf("Digite a altura em metros: ");
      scanf("%f", &altura1);
      imc = peso / (altura1 * altura1);
      printf("O IMC é: %.2f \nSua condição é:\n", imc);
      if (imc < 18.5){
         printf("Abaixo do peso\n");
      }
      else if (imc >= 18.5 && imc < 25){
         printf("Peso normal\n");
      }
      else if (imc >= 25 && imc < 30){
         printf("Acima do peso\n");
      }
      else{
         printf("Obeso \n");
      }
  return 0;
}

//3 Faça um algoritmo que leia dois numeros e mostre qual deles e o maior:

#include <stdio.h>
int main(){
   int num1, num2;
   printf("Digite um numero: ");
   scanf("%i", &num1);
   printf("Digite outro numero: ");
   scanf("%i", &num2);
   if (num1 > num2){
      printf("O maior numero é: %i\n", num1);
   }
   else if (num2 > num1){
      printf("O maior numero é: %i\n", num2);
   }
   else{
      printf("Os numeros são iguais: %i\n", num2);
   }
  return 0;
}
//4 - Crie um programa que leia um numero e informe se ele e par ou impar

#include <stdio.h>
int main(){
   int numero;
   printf("Digite um numero: ");
   scanf("%d", &numero);
   if (numero % 2 == 0) {
   printf("O numero é PAR\n");
   } 
   else {
   printf("O numero é IMPAR\n");
   }
  return 0;
}

//5 Desenvolva um algoritmo que leia duas notas de um aluno, calculo e media aritmetica e informe se ele esta aprovado:

#include <stdio.h>

int main(void) {
  float nota1, nota2, resultado;
  printf("Digite a primeira nota: ");
  scanf("%f", &nota1);
  printf("Digite a segunda nota: ");
  scanf("%f", &nota2);
  resultado = (nota1 + nota2) / 2;
  if (resultado >= 7){
    printf("Aprovado\n");
  }
  else{
    printf("Reprovado\n");
  }
  return 0;
}

//6 Faca um programa que leia tres numeros e informe qual e o maior entre eles:

#include <stdio.h>

int main() {
  int num1, num2, num3;
  printf("Digite um numero: ");
  scanf("%i", &num1);
  printf("Digite outro numero: ");
  scanf("%i", &num2);
  printf("Digite outro numero: ");
  scanf("%i", &num3);

  if (num1 >= num2 && num1 >= num3) {
    printf("O maior numero e: %i\n", num1);
  }
  else if (num2 >= num1 && num2 >= num3){
    printf("O maior numero e: %i\n", num2);
  }
  else{
    printf("O maior numero e: %i\n", num3);
  }

  return 0;
}

//7 Crie um algoritmo que leia o salario de um funcionario:

#include <stdio.h>

int main() {
  float salario, novo_salario, aumento;
  printf("Digite o salario: ");
  scanf("%f", &salario);
  if (salario < 1000) {
    aumento = (salario * 10) / 100;
    novo_salario = salario + aumento;
    printf("O novo salario e: %.2f\n", novo_salario);
  }
  else {
    aumento = (salario * 5) / 100;
    novo_salario = salario + aumento;
    printf("O novo salario e: %.2f\n", novo_salario);
  }
  return 0;
}

//8 Desenvolva um programa que leia um numero e verifique se ele está entre 10 e 50:

#include <stdio.h>

int main() {
  int numero;
  printf("Digite um número: ");
  scanf("%d", &numero);
  if ( numero >= 10 && numero <= 50){
    printf("O número está no intervalo.\n");
  }
  else{
    printf("O número está fora do intervalo.\n");
  }
  return 0;
}

//9 Faça um algoritmo que leia o sexo de uma pessoa (M ou F) e exiba uma mensagem correspondente:

#include <stdio.h>

int main() {
  char sexo;
  printf("Me diga seu sexo: ");
  scanf(" %c", &sexo);
  if (sexo == 'M' || sexo == 'm') {
    printf("Masculino\n");
  }
  else if (sexo == 'F' || sexo == 'f') {
    printf("Feminino\n");
  }
  else {
    printf("Valor invalido\n");
  }
  return 0;
}

//10 Crie um programa que leia dois numeros e uma operacao (+, -, *, /) e mostre o resultado (use estruturas condicionais para escolher a operacao):


#include <stdio.h>

int main() {
  float num1, num2, result;
  char op;
  printf ("Me diga um numero: ");
  scanf ("%f", &num1);
  printf ("Me diga outro numero: ");
  scanf ("%f", &num2);
  printf ("Me diga um operador (+, -, *, /): ");
  scanf (" %c", &op);
  switch (op) {
    case '+':
      result = num1 + num2;
      printf ("%.2f + %.2f = %.2f", num1, num2, result);
      break;
    case '-':
      result = num1 - num2;
      printf ("%.2f - %.2f = %.2f", num1, num2, result);
      break;
    case '*':
      result = num1 * num2;
      printf ("%.2f * %.2f = %.2f", num1, num2, result);
      break;
    case '/':
      if (num2 != 0) {
      result = num1 / num2;
      printf ("%.2f / %.2f = %.2f", num1, num2, result);
    } 
    else {
      printf ("Erro: nao e possivel dividir por zero");
    }
    break;
    default:
      printf ("Operador invalido");
  }
return 0;
}

//11 Escreva um programa que le tres numeros e em seguida imprime quantos deles sao iguais:

#include <stdio.h>

int main() {
  int num1, num2, num3;
  printf("me diga 3 numeros: ");
  scanf("%d %d %d", &num1, &num2, &num3);
  if ( num1 == num2 && num2 == num3){
    printf("todos os numeros são iguais\n");
  }
  else if (num1 == num2 || num1 == num3 || num2 == num3){
    printf("Dois numeros sao iguais\n");
  }
  else {
    printf("todos os numeros são diferentes\n");
  }

return 0;
}

//12 Escreva um programa que le tres numeros inteiros e em seguida imprime os numeros em ordem crescente:

#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("Digite 3 numeros: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 <= num2 && num1 <= num3) {
      if (num2 <= num3) {
            printf("%d %d %d\n", num1, num2, num3);
        } 
       else {
            printf("%d %d %d\n", num1, num3, num2);
        }
      
    } 
    else if (num2 <= num1 && num2 <= num3) {
        if (num1 <= num3) {
            printf("%d %d %d\n", num2, num1, num3);
        } 
        else {
            printf("%d %d %d\n", num2, num3, num1);
        }

    } 
    else {
        if (num1 <= num2) {
            printf("%d %d %d\n", num3, num1, num2);
        } 
        else {
            printf("%d %d %d\n", num3, num2, num1);
        }
    }
    return 0;
}

//13 Escreva um programa que solicita o usuario a digitar um numero de 1 a 7. Em seguida o programa imprime uma mensagem de acordo com o numero digitado:

#include <stdio.h>

int main() {
  int numero;
  printf("Digite um número entre 0 e 8: ");
  scanf("%d", &numero);
  switch (numero){
    case 0:
    printf("Você pertence ao EIXO TECNOLÓGICO");
    break;
    
    case 1:
    printf("Você pertence ao curso de ADS");
    break;
    
    case 2:
    printf("Você pertence ao curso de JOGOS DIGITAIS");
    break;
    
    case 3:
    printf("Você pertence ao curso de Moda");
    break;
    
    case 4:
    printf("Você pertence ao curso de Gastronomia");
    break;
    
    case 5:
    printf("Você pertence ao curso de Gestão");
    break;
    
    case 6:
    printf("Você pertence ao curso de Enfermagem");
    break;
    
    case 7:
    printf("Você pertence ao curso de Estética");
    break;
    
    case 8:
    printf("Você pertence a Pós Graduação");
    break;
    
    default:
      printf("Você NÃO pertence a curso algum da FACULDADE SENAC\n");
  }
    return 0;
}
