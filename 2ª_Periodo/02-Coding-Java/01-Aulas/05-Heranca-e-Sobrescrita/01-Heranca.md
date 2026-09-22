# Herança

## Introdução

Herança é um dos pilares da Programação Orientada a Objetos.

Ela permite que uma classe reutilize atributos e métodos de outra classe.

O principal objetivo da herança é evitar repetição de código e facilitar a manutenção do sistema.

---

# O que é Herança?

Herança é o mecanismo que permite que uma classe herde características de outra classe.

Essa relação é conhecida como:

```text
É UM
```

---

## Exemplo

Podemos dizer:

```text
Um Aluno é uma Pessoa

Um Professor é uma Pessoa

Um Cachorro é um Animal
```

---

# Classe Pai e Classe Filha

Na herança existem dois conceitos importantes.

---

## Superclasse

Também chamada de:

```text
Classe Pai
```

É a classe que fornece atributos e métodos.

---

## Subclasse

Também chamada de:

```text
Classe Filha
```

É a classe que herda características da superclasse.

---

# Exemplo Simples

## Classe Pai

```java
public class Pessoa {

    String nome;
    int idade;

}
```

---

## Classe Filha

```java
public class Aluno extends Pessoa {

}
```

---

Agora a classe:

```java
Aluno
```

herda:

```java
nome
idade
```

---

# Palavra-chave extends

A herança em Java é realizada através da palavra:

```java
extends
```

---

## Sintaxe

```java
public class Filha extends Pai {

}
```

---

## Exemplo

```java
public class Aluno extends Pessoa {

}
```

---

# O que é Herdado?

A subclasse herda:

- Atributos acessíveis
- Métodos acessíveis

---

## Exemplo

Classe Pai:

```java
public class Pessoa {

    String nome;
    int idade;

    void apresentar() {

        System.out.println(nome);

    }

}
```

---

Classe Filha:

```java
public class Aluno extends Pessoa {

}
```

---

Uso:

```java
Aluno aluno = new Aluno();

aluno.nome = "João";

aluno.apresentar();
```

---

Resultado:

```text
João
```

---

# Exemplo Utilizado em Aula

O professor apresentou a estrutura:

```java
public class Titulo {

}
```

e depois:

```java
public class Filme extends Titulo {

}
```

e

```java
public class Serie extends Titulo {

}
```

Assim Filme e Série passaram a reutilizar os atributos da classe Titulo. 【1-08367a】

---

# Vantagem da Herança

Sem herança:

```java
Filme
```

possuiria:

```text
nome
anoDeLancamento
duracao
```

---

e:

```java
Serie
```

teria novamente:

```text
nome
anoDeLancamento
duracao
```

---

Teríamos repetição.

---

Com herança:

```java
Titulo
```

fica responsável pelos atributos comuns.

---

Exemplo:

```text
Titulo
├─ nome
├─ anoDeLancamento
└─ duracao

      ▲
      │
 ┌────┴────┐
 │         │
Filme    Serie
```

---

# Exemplo Completo

Classe Pai:

```java
public class Animal {

    void emitirSom() {

        System.out.println("Som");

    }

}
```

---

Classe Filha:

```java
public class Cachorro extends Animal {

}
```

---

Uso:

```java
Cachorro cachorro = new Cachorro();

cachorro.emitirSom();
```

---

Resultado:

```text
Som
```

---

# Relação "É UM"

Uma boa forma de identificar herança é verificar se existe uma relação:

```text
É UM
```

---

Exemplos corretos:

```text
Aluno é uma Pessoa

Professor é uma Pessoa

Cachorro é um Animal
```

---

Exemplos ruins:

```text
Pessoa é uma Conta

Aluno é um Livro
```

---

# Herança em Cadeia

Uma classe pode herdar de outra que já herdou de uma terceira.

---

Exemplo:

```text
Pessoa
   ↓
Aluno
   ↓
AlunoPosGraduacao
```

---

Nesse caso:

```java
AlunoPosGraduacao
```

herda características de:

```java
Aluno
```

e também de:

```java
Pessoa
```

---

# Herança Múltipla

Java não permite herança múltipla de classes.

---

## Exemplo Inválido

```java
public class Conta extends Pessoa, Cliente {

}
```

---

Resultado:

```text
Erro de compilação.
```

---

Uma classe só pode utilizar:

```java
extends
```

uma única vez.

---

# Relação com Encapsulamento

A herança respeita os modificadores de acesso.

---

Por exemplo:

```java
private String nome;
```

não pode ser acessado diretamente pela classe filha.

---

Para acessar utilizamos:

```java
getters
```

ou

```java
setters
```

---

# Boas Práticas

## Utilizar herança apenas quando existir relação real

Exemplo:

```text
Aluno é uma Pessoa
```

---

## Evitar heranças desnecessárias

Nem tudo precisa herdar de outra classe.

---

## Reaproveitar atributos comuns

Essa é uma das maiores vantagens da herança.

---

# Erros Comuns

## Erro 1

Confundir herança com composição.

---

## Erro 2

Criar heranças sem relação lógica.

---

## Erro 3

Esquecer a palavra:

```java
extends
```

---

## Erro 4

Achar que atributos privados são acessíveis diretamente.

---

# Resumo

Herança permite reutilização de código.

---

É realizada através de:

```java
extends
```

---

Conceitos principais:

- Classe Pai
- Classe Filha
- Superclasse
- Subclasse

---

Java não permite herança múltipla de classes.

---

# Revisão Rápida

## O que é herança?

Reutilização de atributos e métodos entre classes.

---

## Qual palavra utilizamos para herdar?

```java
extends
```

---

## O que é uma superclasse?

A classe pai.

---

## O que é uma subclasse?

A classe filha.

---

## Java permite herança múltipla?

Não.

---

## Qual relação normalmente identifica uma herança?

```text
É UM
```
