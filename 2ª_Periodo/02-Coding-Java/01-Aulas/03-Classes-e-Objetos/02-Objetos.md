# Objetos

## Introdução

Na Programação Orientada a Objetos, os objetos são os elementos que representam informações reais dentro do sistema.

Uma classe funciona como um modelo.

Já o objeto é a instância criada a partir desse modelo.

---

# O que é um Objeto?

Um objeto é uma instância de uma classe.

Quando criamos um objeto, estamos criando algo concreto a partir de um modelo definido anteriormente.

---

## Exemplo

Classe:

```java
public class Pessoa {

    String nome;
    int idade;

}
```

Objeto:

```java
Pessoa pessoa1 = new Pessoa();
```

Nesse momento foi criado um objeto do tipo Pessoa.

---

# Classe x Objeto

## Classe

É o modelo.

Exemplo:

```text
Pessoa
```

---

## Objeto

É uma instância da classe.

Exemplo:

```text
Ana
Carlos
Maria
```

---

# Criando Objetos

Em Java utilizamos a palavra-chave:

```java
new
```

---

## Sintaxe

```java
Classe objeto = new Classe();
```

---

## Exemplo

```java
Pessoa pessoa1 = new Pessoa();
```

---

# O Papel do NEW

A palavra:

```java
new
```

cria um novo objeto na memória.

Sempre que utilizamos `new`, um novo objeto é criado.

---

# Exemplo Completo

Classe:

```java
public class Pessoa {

    String nome;
    int idade;

}
```

---

Criando objeto:

```java
Pessoa pessoa1 = new Pessoa();
```

---

Preenchendo atributos:

```java
pessoa1.nome = "Ana";
pessoa1.idade = 20;
```

---

Exibindo:

```java
System.out.println(pessoa1.nome);
System.out.println(pessoa1.idade);
```

Resultado:

```text
Ana
20
```

---

# Múltiplos Objetos

Uma mesma classe pode gerar vários objetos.

---

## Exemplo

```java
Pessoa pessoa1 = new Pessoa();

Pessoa pessoa2 = new Pessoa();
```

---

Preenchendo:

```java
pessoa1.nome = "Ana";
pessoa1.idade = 20;

pessoa2.nome = "Carlos";
pessoa2.idade = 30;
```

---

Resultado:

```text
Ana - 20

Carlos - 30
```

---

# Objetos Possuem Estado

O estado de um objeto é definido pelos valores dos seus atributos.

---

## Exemplo

Objeto:

```java
Pessoa pessoa1 = new Pessoa();
```

Estado inicial:

```text
nome = null

idade = 0
```

---

Após preencher:

```java
pessoa1.nome = "João";
pessoa1.idade = 18;
```

Novo estado:

```text
nome = João

idade = 18
```

---

# Objetos Possuem Comportamentos

Os comportamentos são definidos pelos métodos.

---

## Classe

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

## Uso do Método

```java
Pessoa pessoa1 = new Pessoa();

pessoa1.nome = "Ana";
pessoa1.idade = 20;

pessoa1.fazAniversario();
```

---

Resultado:

```text
idade = 21
```

---

# Exemplo Utilizado em Aula

O professor apresentou um exemplo semelhante utilizando a classe:

```java
Filme
```

com atributos e métodos para representar filmes. 【1-1f8402】

---

## Exemplo Simplificado

```java
Filme meuFilme = new Filme();

meuFilme.nome = "O Poderoso Chefão";

meuFilme.anoDeLancamento = 1970;
```

---

Nesse caso:

```text
Filme = Classe

meuFilme = Objeto
```

---

# Referência

Quando escrevemos:

```java
Pessoa pessoa1 = new Pessoa();
```

A variável:

```java
pessoa1
```

armazena uma referência para o objeto criado.

Podemos pensar nela como um acesso ao objeto.

---

# Exemplo Prático

```java
public class Principal {

    public static void main(String[] args) {

        Pessoa aluno = new Pessoa();

        aluno.nome = "Kauê";
        aluno.idade = 19;

        System.out.println(aluno.nome);
        System.out.println(aluno.idade);

    }

}
```

---

# Situações Reais

Sistema Escolar:

```text
Classe:
Aluno

Objetos:
João
Maria
Carlos
```

---

Sistema Bancário:

```text
Classe:
Conta

Objetos:
Conta 001
Conta 002
Conta 003
```

---

Loja Virtual:

```text
Classe:
Produto

Objetos:
Notebook
Mouse
Teclado
```

---

# Erros Comuns

## Erro 1

Confundir classe com objeto.

Classe é o modelo.

Objeto é a instância.

---

## Erro 2

Esquecer a palavra:

```java
new
```

---

Errado:

```java
Pessoa pessoa1;
```

Sem criação do objeto.

---

Correto:

```java
Pessoa pessoa1 = new Pessoa();
```

---

## Erro 3

Achar que dois objetos compartilham os mesmos dados.

Cada objeto possui seu próprio estado.

---

# Resumo

Classe:

```text
Modelo.
```

---

Objeto:

```text
Instância da classe.
```

---

NEW:

```text
Cria objetos.
```

---

Atributos:

```text
Estado do objeto.
```

---

Métodos:

```text
Comportamentos do objeto.
```

---

# Revisão Rápida

## O que é um objeto?

Uma instância de uma classe.

---

## Qual palavra cria objetos?

```java
new
```

---

## O que é uma classe?

Um modelo utilizado para criar objetos.

---

## O que representa o estado de um objeto?

Os atributos.

---

## O que representa o comportamento de um objeto?

Os métodos.

---

## Uma classe pode gerar vários objetos?

Sim.
