# Estrutura de Repetição WHILE

## Introdução

O `while` é uma estrutura de repetição utilizada quando não sabemos exatamente quantas vezes um bloco de código deverá ser executado.

Diferente do `for`, que normalmente é utilizado quando a quantidade de repetições é conhecida, o `while` continua executando enquanto uma condição permanecer verdadeira.

---

# O que é o WHILE?

O comando `while` significa:

```text
Enquanto
```

Ou seja:

```text
Enquanto a condição for verdadeira
↓
Execute o bloco de código
```

---

# Sintaxe

```java
while (condicao) {

    // código

}
```

---

# Exemplo Simples

```java
int contador = 1;

while (contador <= 5) {

    System.out.println(contador);

    contador++;

}
```

---

## Saída

```text
1
2
3
4
5
```

---

# Como o WHILE Funciona?

Passo 1:

```java
contador = 1
```

---

Passo 2:

Verifica:

```java
contador <= 5
```

Resultado:

```java
true
```

---

Passo 3:

Executa:

```java
System.out.println(contador);
```

---

Passo 4:

Incrementa:

```java
contador++;
```

---

Repete todo o processo até a condição se tornar falsa.

---

# Exemplo de Contagem

```java
int numero = 1;

while (numero <= 10) {

    System.out.println(numero);

    numero++;

}
```

---

# Exemplo Decrescente

```java
int numero = 10;

while (numero >= 1) {

    System.out.println(numero);

    numero--;

}
```

---

## Saída

```text
10
9
8
7
6
5
4
3
2
1
```

---

# Exemplo com Scanner

Muito comum em programas reais.

```java
import java.util.Scanner;

public class Principal {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        int numero = 0;

        while (numero != 10) {

            System.out.print("Digite 10 para encerrar: ");

            numero = scanner.nextInt();

        }

        System.out.println("Programa encerrado.");

        scanner.close();

    }

}
```

---

# Exemplo da Aula

Avaliações de filmes. 【1-0bd050】

```java
double mediaAvaliacao = 0;
double nota = 0;
int totalDeNotas = 0;

while (nota != -1) {

    System.out.println(
        "Digite uma nota ou -1 para sair:"
    );

    nota = scanner.nextDouble();

    mediaAvaliacao += nota;

    totalDeNotas++;

}
```

---

## Ideia

Enquanto o usuário não digitar:

```text
-1
```

o programa continua executando.

---

# Exemplo de Fatorial

Esse tipo de exercício apareceu nas atividades da disciplina. 【2-99062d】【3-4e4ff0】

```java
int numero = 5;
int contador = numero;
long fatorial = 1;

while (contador > 1) {

    fatorial *= contador;

    contador--;

}

System.out.println(fatorial);
```

---

## Resultado

```text
120
```

---

# WHILE Infinito

Se a condição nunca ficar falsa:

```java
while (true) {

}
```

o programa nunca irá parar.

---

# Exemplo Perigoso

```java
int numero = 1;

while (numero <= 10) {

    System.out.println(numero);

}
```

---

## Problema

Faltou:

```java
numero++;
```

Resultado:

```text
Loop infinito
```

---

# WHILE x FOR

## FOR

Utilizado quando sabemos o número de repetições.

Exemplo:

```java
for (int i = 1; i <= 10; i++)
```

---

## WHILE

Utilizado quando a quantidade de repetições é desconhecida.

Exemplo:

```java
while (usuarioNaoDigitouSair)
```

---

# Quando Usar FOR?

Situações:

- Tabuada
- Contagem
- Repetições fixas
- Laços conhecidos

---

# Quando Usar WHILE?

Situações:

- Menus
- Jogos
- Entradas do usuário
- Condições desconhecidas

---

# Exemplo Prático

Senha até acertar:

```java
String senha = "";

while (!senha.equals("123")) {

    System.out.print("Digite a senha: ");

    senha = scanner.nextLine();

}
```

---

## Resultado

O programa continua pedindo a senha até que a correta seja informada.

---

# Boas Práticas

- Garantir que a condição possa se tornar falsa.
- Atualizar as variáveis de controle.
- Evitar loops infinitos.
- Utilizar nomes claros para variáveis.

---

# Erros Comuns

## Erro 1

Esquecer de atualizar a variável de controle.

---

## Erro 2

Criar loops infinitos sem perceber.

---

## Erro 3

Utilizar WHILE quando FOR seria mais simples.

---

## Erro 4

Usar condições que nunca serão alteradas.

---

# Resumo

WHILE executa um bloco de código enquanto uma condição for verdadeira.

---

## Estrutura

```java
while (condicao) {

}
```

---

## Utilizado quando

```text
Não sabemos quantas repetições serão necessárias.
```

---

## Cuidados

```text
Evitar loops infinitos.
```

---

# Revisão Rápida

## O que significa WHILE?

Enquanto.

---

## Quando o bloco é executado?

Enquanto a condição for verdadeira.

---

## Qual a principal diferença entre FOR e WHILE?

FOR é usado quando sabemos a quantidade de repetições.

WHILE é usado quando não sabemos.

---

## O que acontece se a condição nunca ficar falsa?

O programa entra em loop infinito.

---

## Cite uma situação onde o WHILE é útil.

- Menus
- Jogos
- Login
- Entrada de dados até uma condição específica
