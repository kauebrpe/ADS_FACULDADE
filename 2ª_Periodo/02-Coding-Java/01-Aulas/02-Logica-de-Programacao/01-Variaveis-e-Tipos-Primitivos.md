# Variáveis e Tipos Primitivos

## Introdução

Durante a execução de um programa precisamos armazenar informações.

Para isso utilizamos variáveis.

Uma variável funciona como um espaço na memória reservado para guardar um valor.

---

## O que é uma Variável?

Uma variável é uma posição de memória identificada por um nome.

Exemplo:

```java
int idade = 20;
```

Nesse exemplo:

```text
idade
```

é o nome da variável.

O valor armazenado é:

```text
20
```

---

## Estrutura de uma Variável

```java
tipo nome = valor;
```

Exemplo:

```java
int idade = 20;
```

- Tipo → int
- Nome → idade
- Valor → 20

---

## Exemplo Simples

```java
public class Principal {

    public static void main(String[] args) {

        int idade = 20;

        System.out.println(idade);

    }

}
```

Saída:

```text
20
```

---

# Tipos Primitivos

Java possui oito tipos primitivos.

São os tipos básicos da linguagem.

---

## boolean

Armazena valores lógicos.

Possui apenas dois valores possíveis:

```java
true
false
```

---

### Exemplo

```java
boolean aprovado = true;
```

---

## char

Armazena um único caractere.

Sempre utiliza aspas simples.

---

### Exemplo

```java
char letra = 'A';
```

---

## byte

Números inteiros pequenos.

---

### Exemplo

```java
byte idade = 25;
```

---

## short

Números inteiros maiores que byte.

---

### Exemplo

```java
short quantidade = 1000;
```

---

## int

Tipo mais utilizado para números inteiros.

---

### Exemplo

```java
int alunos = 40;
```

---

## long

Utilizado para números inteiros muito grandes.

---

### Exemplo

```java
long populacao = 8000000000L;
```

---

## float

Utilizado para números com casas decimais.

Menor precisão.

---

### Exemplo

```java
float nota = 7.5f;
```

---

## double

Também armazena números decimais.

Possui maior precisão.

É o mais utilizado.

---

### Exemplo

```java
double salario = 3500.75;
```

---

# Resumo dos Tipos

| Tipo | Uso |
|--------|--------|
| boolean | verdadeiro ou falso |
| char | caractere |
| byte | inteiro pequeno |
| short | inteiro médio |
| int | inteiro |
| long | inteiro grande |
| float | decimal |
| double | decimal preciso |

---

# Declarando Várias Variáveis

```java
String nome = "Kauê";
int idade = 19;
double altura = 1.75;
boolean aluno = true;
```

---

# Exibindo Variáveis

```java
public class Principal {

    public static void main(String[] args) {

        String nome = "Kauê";
        int idade = 19;

        System.out.println(nome);
        System.out.println(idade);

    }

}
```

---

# Alterando Valores

O valor de uma variável pode mudar.

```java
int idade = 19;

idade = 20;
```

Agora a variável possui:

```text
20
```

---

# Constantes

Quando não queremos permitir alterações utilizamos:

```java
final
```

---

### Exemplo

```java
final double PI = 3.1415;
```

Após atribuído, o valor não pode mudar.

---

# Boas Práticas

Utilize nomes claros.

Bom:

```java
String nomeAluno;
double salarioFuncionario;
```

Evite:

```java
String x;
double y;
```

---

# Exemplos Práticos

## Nome

```java
String nome = "Maria";
```

---

## Idade

```java
int idade = 22;
```

---

## Salário

```java
double salario = 4500.50;
```

---

## Situação

```java
boolean ativo = true;
```

---

# Erros Comuns

## Erro 1

Guardar texto em variável numérica.

Errado:

```java
int nome = "João";
```

---

## Erro 2

Guardar número em variável de texto sem necessidade.

---

## Erro 3

Esquecer o tipo da variável.

Errado:

```java
idade = 20;
```

---

Correto:

```java
int idade = 20;
```

---

## Erro 4

Confundir char com String.

Char:

```java
char letra = 'A';
```

String:

```java
String nome = "Ana";
```

---

# Resumo

Variável:

```text
Espaço para armazenar dados.
```

---

Tipos primitivos:

```text
boolean
char
byte
short
int
long
float
double
```

---

Tipo mais utilizado para inteiros:

```java
int
```

---

Tipo mais utilizado para decimais:

```java
double
```

---

# Revisão Rápida

## O que é uma variável?

Um espaço utilizado para armazenar informações.

---

## Qual tipo armazena verdadeiro ou falso?

```java
boolean
```

---

## Qual tipo armazena caracteres?

```java
char
```

---

## Qual tipo é mais utilizado para números inteiros?

```java
int
```

---

## Qual tipo é mais utilizado para números decimais?

```java
double
```

---

## Qual palavra impede alteração de valor?

```java
final
```
