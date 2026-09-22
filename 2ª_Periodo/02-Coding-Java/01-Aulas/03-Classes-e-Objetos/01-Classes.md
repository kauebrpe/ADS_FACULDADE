# Classes

## Introdução

Uma classe é um dos conceitos mais importantes da Programação Orientada a Objetos.

Podemos pensar em uma classe como um molde que define:

- Características (atributos)
- Comportamentos (métodos)

A classe serve para organizar e representar elementos do mundo real dentro do sistema.

---

# O que é uma Classe?

Uma classe define como os objetos serão criados.

Ela não representa um elemento específico.

Ela funciona como um modelo.

---

## Exemplo

Imagine uma pessoa.

Toda pessoa possui:

- Nome
- Idade

Também pode possuir comportamentos:

- Fazer aniversário
- Falar
- Caminhar

Essas informações podem ser representadas por uma classe.

---

# Estrutura de uma Classe

Exemplo:

```java
public class Pessoa {

    String nome;
    int idade;

}
```

---

## Explicação

A classe chama-se:

```text
Pessoa
```

Possui dois atributos:

```text
nome
idade
```

---

# Classe com Método

Uma classe pode possuir métodos.

Exemplo:

```java
public class Pessoa {

    String nome;
    int idade;

    void fazAniversario() {

        idade++;

    }

}
```

---

Nesse exemplo:

```text
nome
idade
```

são atributos.

---

Já:

```java
fazAniversario()
```

é um método.

---

# Classe Como Molde

Uma classe ainda não representa uma pessoa real.

Ela apenas define:

```text
Como uma pessoa deve ser representada.
```

---

## Exemplo

Classe:

```java
public class Pessoa {

    String nome;
    int idade;

}
```

---

Ainda não existe:

```text
Ana
Carlos
Maria
```

---

Apenas o modelo:

```text
Pessoa
```

---

# Classes Utilizadas em Aula

Exemplo apresentado pelo professor:

```java
public class Filme {

    String nome;
    int anoDeLancamento;
    boolean incluidoNoPlano;
    double somaDasAvaliacoes;
    int totalDeAvaliacoes;
    int duracaoEmMinutos;

}
```

Essa classe serve para representar filmes. 【1-354c77】

---

# Classes do Mundo Real

Exemplos de classes:

```text
Pessoa
Aluno
Carro
Livro
Produto
ContaBancaria
Filme
```

---

# Como Escolher uma Classe?

Pergunte:

```text
O que preciso representar?
```

Exemplos:

Sistema Escolar:

```text
Aluno
Professor
Turma
```

---

Sistema Bancário:

```text
Conta
Cliente
Transferencia
```

---

Sistema de Streaming:

```text
Filme
Serie
Usuario
```

---

# Boas Práticas

## Utilizar Nomes Claros

Bom:

```java
Pessoa
Produto
Cliente
```

---

Ruim:

```java
Classe1
Dado
Teste
```

---

## Uma Classe Deve Ter um Objetivo

Evite criar classes com responsabilidades demais.

---

## Utilizar PascalCase

Convenção do Java:

```java
Pessoa
ContaBancaria
CadastroCliente
```

---

# Exemplo Completo

```java
public class Aluno {

    String nome;
    int idade;

    void exibirInformacoes() {

        System.out.println(nome);
        System.out.println(idade);

    }

}
```

---

# O que uma Classe Possui?

Normalmente:

## Atributos

Informações.

Exemplo:

```java
String nome;
```

---

## Métodos

Comportamentos.

Exemplo:

```java
void exibirInformacoes()
```

---

# Diferença Entre Classe e Objeto

## Classe

Modelo.

Exemplo:

```text
Pessoa
```

---

## Objeto

Instância criada a partir da classe.

Exemplo:

```text
Ana
Carlos
João
```

---

# Erros Comuns

## Erro 1

Confundir classe com objeto.

---

## Erro 2

Achar que uma classe já representa dados reais.

---

## Erro 3

Criar classes com nomes genéricos.

---

## Erro 4

Misturar muitas responsabilidades em uma única classe.

---

# Resumo

Classe:

```text
Molde
Modelo
Estrutura
```

---

Ela define:

```text
Atributos
Métodos
```

---

Uma classe não representa um objeto real.

Ela apenas define como os objetos serão criados.

---

# Revisão Rápida

## O que é uma classe?

Um modelo utilizado para criar objetos.

---

## O que uma classe pode possuir?

Atributos e métodos.

---

## Uma classe representa um objeto real?

Não.

Ela representa um modelo.

---

## Cite exemplos de classes.

- Pessoa
- Aluno
- Filme
- Produto

---

## Qual convenção de nomes normalmente utilizamos em Java?

PascalCase.

Exemplo:

```java
ContaBancaria
```
