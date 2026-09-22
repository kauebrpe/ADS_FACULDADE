# Try e Catch

## Objetivo

Aprender a tratar Exceptions em Java utilizando os blocos:

- try
- catch

Ao final deste tópico você será capaz de capturar erros e impedir que a aplicação seja encerrada inesperadamente.

---

# O Problema

Considere o código:

```java
public class Principal {

    public static void main(String[] args) {

        int resultado = 10 / 0;

        System.out.println(resultado);

    }

}
```

---

Resultado:

```text
ArithmeticException
```

O programa é interrompido.

---

# Solução

Java fornece mecanismos para capturar e tratar Exceptions.

Os principais são:

```java
try
catch
```

---

# O que é try?

O bloco:

```java
try
```

contém o código que pode gerar uma Exception.

---

## Sintaxe

```java
try {

    // código que pode falhar

}
```

---

# O que é catch?

O bloco:

```java
catch
```

é executado quando uma Exception acontece.

---

## Sintaxe

```java
catch (TipoDaException e) {

    // tratamento

}
```

---

# Estrutura Básica

```java
try {

    // código

}
catch (Exception e) {

    // tratamento

}
```

---

# Primeiro Exemplo

```java
public class Principal {

    public static void main(String[] args) {

        try {

            int resultado = 10 / 0;

            System.out.println(resultado);

        }
        catch (ArithmeticException e) {

            System.out.println(
                "Erro de divisão por zero."
            );

        }

    }

}
```

---

## Resultado

```text
Erro de divisão por zero.
```

---

Observe:

```text
Programa não travou.
```

---

# Como Funciona?

Fluxo normal:

```text
try
↓
Erro
↓
catch
↓
Tratamento
↓
Programa continua
```

---

# Capturando ArithmeticException

```java
try {

    int resultado = 10 / 0;

}
catch (ArithmeticException e) {

    System.out.println(
        "Operação inválida."
    );

}
```

---

# Capturando NullPointerException

```java
try {

    String nome = null;

    System.out.println(
        nome.length()
    );

}
catch (NullPointerException e) {

    System.out.println(
        "Objeto não inicializado."
    );

}
```

---

# Capturando InputMismatchException

Exemplo muito comum com Scanner.

```java
import java.util.Scanner;
import java.util.InputMismatchException;

public class Principal {

    public static void main(String[] args) {

        Scanner scanner =
            new Scanner(System.in);

        try {

            System.out.print(
                "Digite sua idade: "
            );

            int idade =
                scanner.nextInt();

            System.out.println(
                idade
            );

        }
        catch (InputMismatchException e) {

            System.out.println(
                "Digite apenas números."
            );

        }

    }

}
```

---

# Objeto Exception

Observe:

```java
catch (Exception e)
```

---

A variável:

```java
e
```

representa a Exception capturada.

---

Ela contém informações sobre o erro.

---

# Exibindo a Mensagem do Erro

```java
catch (Exception e) {

    System.out.println(
        e.getMessage()
    );

}
```

---

# Exemplo

```java
try {

    int resultado = 10 / 0;

}
catch (Exception e) {

    System.out.println(
        e.getMessage()
    );

}
```

---

Resultado:

```text
/ by zero
```

---

# Exibindo o Tipo da Exception

```java
catch (Exception e) {

    System.out.println(
        e.getClass()
    );

}
```

---

Resultado:

```text
ArithmeticException
```

---

# Capturando Exception Genérica

Também podemos capturar qualquer Exception.

---

## Exemplo

```java
try {

    int resultado = 10 / 0;

}
catch (Exception e) {

    System.out.println(
        "Erro capturado."
    );

}
```

---

## Vantagem

Captura praticamente qualquer Exception.

---

## Desvantagem

Perdemos precisão no tratamento.

---

# Múltiplos Catch

Podemos tratar diferentes erros separadamente.

---

## Exemplo

```java
try {

    // código

}
catch (ArithmeticException e) {

    System.out.println(
        "Erro matemático."
    );

}
catch (NullPointerException e) {

    System.out.println(
        "Objeto inexistente."
    );

}
```

---

# Exemplo Completo

```java
public class Principal {

    public static void main(String[] args) {

        try {

            int resultado = 10 / 0;

            System.out.println(resultado);

        }
        catch (ArithmeticException e) {

            System.out.println(
                "Divisão por zero não permitida."
            );

        }

        System.out.println(
            "Programa continua executando."
        );

    }

}
```

---

## Resultado

```text
Divisão por zero não permitida.

Programa continua executando.
```

---

# Benefícios do Try/Catch

- Evita travamentos
- Melhora a experiência do usuário
- Permite mensagens amigáveis
- Facilita manutenção

---

# Situações Reais

## Login

Senha inválida.

---

## Arquivos

Arquivo não encontrado.

---

## Sistema Bancário

Operações inválidas.

---

## Entrada de Dados

Usuário digitou texto em vez de número.

---

# Erros Comuns

## Erro 1

Utilizar try sem catch.

---

## Erro 2

Ignorar completamente a Exception.

---

## Erro 3

Capturar apenas Exception genérica em todos os casos.

---

## Erro 4

Escrever código excessivo dentro do catch.

---

# Resumo

- try contém o código que pode gerar erro.
- catch captura a Exception.
- A variável e representa a Exception.
- O programa pode continuar executando após o tratamento.

---

# Fluxo

```text
try
↓
Exception
↓
catch
↓
Tratamento
↓
Continuação
```

---

# Revisão Rápida

## Para que serve o try?

Executar código que pode gerar Exception.

---

## Para que serve o catch?

Capturar e tratar Exceptions.

---

## O que representa a variável e?

A Exception capturada.

---

## O programa precisa encerrar após uma Exception?

Não.

Se houver tratamento adequado, ele pode continuar.

---

## Qual Exception ocorre em uma divisão por zero?

```text
ArithmeticException
```

---

## Qual Exception costuma ocorrer com Scanner quando o usuário digita texto em vez de número?

```text
InputMismatchException
```
