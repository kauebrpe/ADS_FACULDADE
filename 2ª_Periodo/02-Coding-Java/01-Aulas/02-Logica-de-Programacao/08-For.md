# Estrutura de Repetição FOR

## Introdução

Em programação existem situações em que precisamos executar um mesmo bloco de código várias vezes.

Exemplos:

- Exibir uma tabuada
- Contar números
- Percorrer listas
- Repetir cálculos

Para isso utilizamos estruturas de repetição.

Uma das mais utilizadas é o:

```java
for
```

---

# O que é o FOR?

O FOR é uma estrutura de repetição utilizada quando sabemos quantas vezes um bloco de código deve ser executado.

---

## Sintaxe

```java
for (inicialização; condição; incremento) {

    // código

}
```

---

# Estrutura Explicada

## Inicialização

Executada apenas uma vez.

```java
int i = 0;
```

---

## Condição

Enquanto for verdadeira, o laço continua.

```java
i < 5
```

---

## Incremento

Executado ao final de cada repetição.

```java
i++
```

---

# Exemplo Simples

```java
for (int i = 1; i <= 5; i++) {

    System.out.println(i);

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

# Como o FOR Funciona?

Passo 1:

```java
i = 1
```

---

Passo 2:

Verifica:

```java
i <= 5
```

---

Passo 3:

Executa:

```java
System.out.println(i);
```

---

Passo 4:

Incrementa:

```java
i++
```

---

Repete o processo até a condição ser falsa.

---

# Contagem Crescente

```java
for (int i = 1; i <= 10; i++) {

    System.out.println(i);

}
```

---

## Resultado

```text
1
2
3
4
5
6
7
8
9
10
```

---

# Contagem Decrescente

```java
for (int i = 10; i >= 1; i--) {

    System.out.println(i);

}
```

---

## Resultado

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

# Exemplo de Tabuada

Esse foi um dos exercícios da disciplina. 【3-2258d0】【2-41d58a】

```java
int numero = 5;

for (int i = 1; i <= 10; i++) {

    System.out.println(
        numero + " x " + i +
        " = " + (numero * i)
    );

}
```

---

## Saída

```text
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
...
5 x 10 = 50
```

---

# Somando Valores

```java
int soma = 0;

for (int i = 1; i <= 5; i++) {

    soma += i;

}

System.out.println(soma);
```

---

## Resultado

```text
15
```

---

# FOR com Scanner

Exemplo semelhante ao utilizado em aula. 【1-3a6619】

```java
import java.util.Scanner;

public class Principal {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        double soma = 0;

        for (int i = 1; i <= 3; i++) {

            System.out.print("Digite uma nota: ");

            soma += scanner.nextDouble();

        }

        System.out.println(
            "Média: " + (soma / 3)
        );

        scanner.close();

    }

}
```

---

# FOR com Incrementos Diferentes

Não precisamos incrementar apenas de 1 em 1.

---

## Exemplo

```java
for (int i = 0; i <= 20; i += 2) {

    System.out.println(i);

}
```

---

## Resultado

```text
0
2
4
6
8
10
12
14
16
18
20
```

---

# FOR Infinito

Se a condição nunca ficar falsa:

```java
for (;;) {

}
```

ou

```java
for (int i = 0; i >= 0; i++) {

}
```

o laço poderá executar indefinidamente.

---

# Quando Utilizar FOR?

Use FOR quando a quantidade de repetições for conhecida.

Exemplos:

- Tabuada
- Contagem
- Exercícios matemáticos
- Repetições fixas

---

# Exemplo Completo

```java
public class Principal {

    public static void main(String[] args) {

        for (int i = 1; i <= 5; i++) {

            System.out.println(
                "Repetição número " + i
            );

        }

    }

}
```

---

# Erros Comuns

## Erro 1

Esquecer o incremento.

Errado:

```java
for (int i = 1; i <= 10;) {

}
```

---

## Erro 2

Usar condição incorreta.

---

## Erro 3

Criar laços infinitos sem perceber.

---

## Erro 4

Confundir:

```java
i++
```

com

```java
++i
```

sem entender o efeito da expressão.

---

# Resumo

FOR é utilizado para repetições com quantidade conhecida.

---

## Estrutura

```java
for (
    inicialização;
    condição;
    incremento
)
```

---

## Incremento

```java
i++
```

---

## Decremento

```java
i--
```

---

# Revisão Rápida

## Quando utilizar FOR?

Quando sabemos quantas vezes o código deve ser executado.

---

## Qual parte define a condição?

```java
i <= 10
```

---

## Qual parte controla a repetição?

```java
i++
```

---

## Qual estrutura foi utilizada para construir a tabuada?

```java
for
```

---

## O FOR pode contar de trás para frente?

Sim.

Utilizando:

```java
i--
```
