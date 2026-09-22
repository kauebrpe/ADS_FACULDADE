# Atributos

## Introdução

Os atributos representam as características de um objeto.

Quando criamos uma classe, os atributos são utilizados para armazenar informações relacionadas aos objetos que serão criados a partir dela.

Podemos pensar nos atributos como os dados que descrevem um objeto.

---

# O que é um Atributo?

Um atributo é uma variável declarada dentro de uma classe.

Sua função é armazenar informações sobre os objetos.

---

## Exemplo

```java
public class Pessoa {

    String nome;
    int idade;

}
```

---

Nesse exemplo:

```java
nome
```

e

```java
idade
```

são atributos da classe.

---

# Exemplo do Mundo Real

Classe:

```text
Pessoa
```

Atributos:

```text
nome
idade
cpf
email
```

---

Classe:

```text
Carro
```

Atributos:

```text
modelo
ano
cor
```

---

Classe:

```text
Filme
```

Atributos:

```text
nome
anoLancamento
duracao
```

---

# Declarando Atributos

Sintaxe:

```java
tipo nomeDoAtributo;
```

---

## Exemplo

```java
String nome;
```

---

```java
int idade;
```

---

```java
double salario;
```

---

```java
boolean ativo;
```

---

# Atributos de Diferentes Tipos

```java
public class Funcionario {

    String nome;
    int idade;
    double salario;
    boolean ativo;

}
```

---

# Utilizando os Atributos

Depois de criar um objeto, podemos preencher seus atributos.

---

## Exemplo

```java
Pessoa pessoa1 = new Pessoa();

pessoa1.nome = "Ana";
pessoa1.idade = 20;
```

---

Agora:

```text
nome = Ana

idade = 20
```

---

# Exibindo Atributos

```java
Pessoa pessoa1 = new Pessoa();

pessoa1.nome = "Ana";
pessoa1.idade = 20;

System.out.println(pessoa1.nome);
System.out.println(pessoa1.idade);
```

---

Resultado:

```text
Ana
20
```

---

# Cada Objeto Possui Seus Próprios Atributos

Exemplo:

```java
Pessoa pessoa1 = new Pessoa();
Pessoa pessoa2 = new Pessoa();

pessoa1.nome = "Ana";
pessoa2.nome = "Carlos";
```

---

Resultado:

```text
pessoa1 = Ana

pessoa2 = Carlos
```

---

Os atributos não são compartilhados.

Cada objeto possui seus próprios valores.

---

# Exemplo Utilizado em Aula

O professor utilizou uma classe semelhante a:

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

Esses atributos armazenam as características de cada filme. 【1-d4f7ed】

---

# Valores Padrão dos Atributos

Quando um objeto é criado, Java inicializa automaticamente os atributos.

---

## String

```java
null
```

---

## int

```java
0
```

---

## double

```java
0.0
```

---

## boolean

```java
false
```

---

# Exemplo

```java
public class Aluno {

    String nome;
    int idade;

}
```

---

Criando:

```java
Aluno aluno = new Aluno();
```

---

Valores iniciais:

```text
nome = null

idade = 0
```

---

# Atributos x Variáveis Locais

## Atributo

Declarado dentro da classe.

```java
public class Pessoa {

    String nome;

}
```

---

## Variável Local

Declarada dentro de um método.

```java
public void exibir() {

    String mensagem = "Olá";

}
```

---

# Boas Práticas

## Utilizar nomes claros

Bom:

```java
nome
idade
salario
```

---

Evite:

```java
x
y
valor1
```

---

## Um atributo deve representar uma característica

Exemplos:

```java
nome
cpf
email
```

---

# Exemplo Completo

```java
public class Aluno {

    String nome;
    int idade;

}
```

---

```java
public class Principal {

    public static void main(String[] args) {

        Aluno aluno = new Aluno();

        aluno.nome = "Kauê";
        aluno.idade = 19;

        System.out.println(aluno.nome);
        System.out.println(aluno.idade);

    }

}
```

---

# Erros Comuns

## Erro 1

Confundir atributos com métodos.

---

## Erro 2

Pensar que todos os objetos compartilham os mesmos atributos.

---

## Erro 3

Escolher nomes sem significado.

---

## Erro 4

Acessar atributos sem criar um objeto.

---

Errado:

```java
Pessoa.nome = "Ana";
```

---

Correto:

```java
Pessoa pessoa = new Pessoa();

pessoa.nome = "Ana";
```

---

# Resumo

Atributos representam características dos objetos.

---

Exemplos:

```text
nome
idade
cpf
preco
```

---

São declarados dentro da classe.

---

Cada objeto possui seus próprios valores para os atributos.

---

# Revisão Rápida

## O que é um atributo?

Uma característica de um objeto.

---

## Onde os atributos são declarados?

Dentro da classe.

---

## Cite exemplos de atributos.

- nome
- idade
- email
- salario

---

## Dois objetos compartilham os mesmos valores dos atributos?

Não.

Cada objeto possui seus próprios valores.

---

## Quais são os valores padrão de um atributo String?

```java
null
```

---

## Quais são os valores padrão de um atributo int?

```java
0
```
