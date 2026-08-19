//1 Media de Tres Notas:

#include <stdio.h>

float media(float n1, float n2, float n3) {
  float mediacalc = (n1 + n2 + n3) / 3;
  return mediacalc;
}

int main() {
  float nota1, nota2, nota3, final;

  printf("Digite as 3 notas: ");
  scanf("%f %f %f", &nota1, &nota2, &nota3);

  final = media(nota1, nota2, nota3);

  printf("Sua media foi: %.2f\n", final);

  return 0;
}

//2 Resto da Divisao Entre Dois Numeros:

#include <stdio.h>

int restinho(int x1, int y2) {
  int restinhocalc = x1 % y2;
  return restinhocalc;
}

int main() {
  int x, y, resultado;

  printf("Digite dois numeros e descubra o resto entre eles: ");
  scanf("%i %i", &x, &y);

  resultado = restinho(x, y);

  printf("Resto do primeiro pelo segundo deu: %i\n", resultado);

  return 0;
}

//3 Menor Valor Entre Tres Numeros:

#include <stdio.h>

int menor(int n1, int n2, int n3) {
  int menorvalor = n1;

  if (n2 < menorvalor) {
    menorvalor = n2;
  }

  if (n3 < menorvalor) {
    menorvalor = n3;
  }

  return menorvalor;
}

int main() {
  int num1, num2, num3, resultado;

  printf("Digite tres numeros: ");
  scanf("%i %i %i", &num1, &num2, &num3);

  resultado = menor(num1, num2, num3);

  printf("O menor numero e: %i\n", resultado);

  return 0;
}

//4 Calculo da Idade:

#include <stdio.h>

int idadecalc(int meunasc) {
  int minhaidd = 2026 - meunasc;
  return minhaidd;
}

int main() {
  int ano, resultado;

  printf("Diga seu ano que nasceu e descubra sua idade: ");
  scanf("%i", &ano);

  resultado = idadecalc(ano);

  printf("Voce tem: %i anos\n", resultado);

  return 0;
}

//5 Meses Restantes Para o Final do Ano:

#include <stdio.h>

int mesesrest(int meumes) {
  int mesfalta = 12 - meumes;
  return mesfalta;
}

int main() {
  int mes, resultado;

  printf("Diga me seu mes atual (1 a 12): ");
  scanf("%i", &mes);

  resultado = mesesrest(mes);

  printf("Os meses que faltam para o final do ano sao: %i\n", resultado);

  return 0;
}

//6 Verificar se Dois Numeros Sao Divisiveis:

#include <stdio.h>

int divisivel(int n1, int n2) {

  if (n1 % n2 == 0) {
    return 1;
  } else {
    return 0;
  }

}

int main() {
  int num1, num2, resultado;

  printf("Digite dois numeros e descubra se sao divisiveis: ");
  scanf("%i %i", &num1, &num2);

  if (num2 == 0) {
    printf("O segundo numero nao pode ser zero!\n");
  } else {

    resultado = divisivel(num1, num2);

    if (resultado == 1) {
      printf("%i e divisivel por %i\n", num1, num2);
    } else {
      printf("%i nao e divisivel por %i\n", num1, num2);
    }

  }

  return 0;
}

//7 Potencia sem Utilizar pow():

#include <stdio.h>

int potencia(int numero, int expoente) {
  int potenciafinal = 1;
  int contador;

  for (contador = 1; contador <= expoente; contador++) {
    potenciafinal = potenciafinal * numero;
  }

  return potenciafinal;
}

int main() {
  int num, exp, resultado;

  printf("Digite um numero e seu expoente: ");
  scanf("%i %i", &num, &exp);

  resultado = potencia(num, exp);

  printf("Resultado da potencia: %i\n", resultado);

  return 0;
}

//8 Menu com Soma, Subtracao e Multiplicacao:

#include <stdio.h>

int soma(int n1, int n2) {
  return n1 + n2;
}

int subtracao(int n1, int n2) {
  return n1 - n2;
}

int multiplicacao(int n1, int n2) {
  return n1 * n2;
}

int main() {
  int opcao;
  int num1, num2;
  int resultado;

  do {

    printf("\nMENU\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%i", &opcao);

    if (opcao >= 1 && opcao <= 3) {

      printf("Digite dois numeros: ");
      scanf("%i %i", &num1, &num2);

      if (opcao == 1) {
        resultado = soma(num1, num2);
      } else if (opcao == 2) {
        resultado = subtracao(num1, num2);
      } else if (opcao == 3) {
        resultado = multiplicacao(num1, num2);
      }

      printf("Resultado: %i\n", resultado);

    }

  } while (opcao != 4);

  printf("Programa encerrado.\n");

  return 0;
}

//9 Verificar se uma Letra e Vogal:

#include <stdio.h>

int vogal(char letra) {

  if (letra == 'a' || letra == 'e' || letra == 'i' ||
      letra == 'o' || letra == 'u' ||
      letra == 'A' || letra == 'E' || letra == 'I' ||
      letra == 'O' || letra == 'U') {

    return 1;

  } else {

    return 0;

  }

}

int main() {
  char letra;
  int resultado;

  printf("Digite uma letra e descubra se ela e vogal: ");
  scanf(" %c", &letra);

  resultado = vogal(letra);

  if (resultado == 1) {
    printf("%c e uma vogal\n", letra);
  } else {
    printf("%c nao e uma vogal\n", letra);
  }

  return 0;
}

//10 Calculo do Fatorial:

#include <stdio.h>

int fatorial(int numero) {
  int resultado = 1;
  int contador;

  for (contador = 1; contador <= numero; contador++) {
    resultado = resultado * contador;
  }

  return resultado;
}

int main() {
  int num, resposta;

  printf("Digite um numero e descubra seu fatorial: ");
  scanf("%i", &num);

  resposta = fatorial(num);

  printf("O fatorial de %i e: %i\n", num, resposta);

  return 0;
}
