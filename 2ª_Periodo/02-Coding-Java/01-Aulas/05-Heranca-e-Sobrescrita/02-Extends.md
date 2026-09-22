# extends

## Introdução

Em Java, a herança é implementada através da palavra-chave:

```java
extends
```

Ela permite que uma classe herde atributos e métodos de outra classe.

É através do `extends` que a Programação Orientada a Objetos consegue reutilizar código de forma organizada.

---

# O que é extends?

A palavra:

```java
extends
```

significa:

```text
herda de
```

ou

```text
estende
```

---

## Sintaxe

```java
public class ClasseFilha extends ClassePai {

}
```

---

## Exemplo

Classe pai:

```java
public class Pessoa {

    String nome;
    int idade;

}
```

Classe filha:

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

# Exemplo Visual

```text
Pessoa
├── nome
└── idade

      ▲
      │
      │ extends
      │

Aluno
```

---

# Criando Objetos

```java
Aluno aluno = new Aluno();
```

---

Agora podemos utilizar:

```java
aluno.nome = "João";
aluno.idade = 20;
```

Mesmo que esses atributos tenham sido declarados na classe:

```java
Pessoa
```

---

# Exemplo Utilizado em Aula

O professor apresentou uma estrutura semelhante a esta: 【1-30b116】

Classe pai:

```java
public class Titulo {

    private String nome;
    private int anoDeLancamento;

}
```

---

Classe filha:

```java
public class Filme extends Titulo {

    private String diretor;

}
```

---

Agora:

```java
Filme
```

possui:

```text
nome
anoDeLancamento
diretor
```

---

# Outro Exemplo da Aula

Também foi criada uma classe:

```java
Serie
```

herdando de:

```java
Titulo
```

utilizando:

```java
extends
```

【1-30b116】

---

# O Que a Classe Filha Recebe?

Geralmente ela herda:

- Métodos
- Atributos acessíveis
- Comportamentos

---

## Exemplo

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

# Estendendo Funcionalidades

A classe filha pode adicionar novos atributos.

---

## Exemplo

```java
public class Pessoa {

    String nome;

}
```

---

```java
public class Aluno extends Pessoa {

    String matricula;

}
```

---

Agora Aluno possui:

```text
nome
matricula
```

---

# Reaproveitamento de Código

Sem herança:

```java
Pessoa
```

e

```java
Aluno
```

teriam atributos repetidos.

---

Com herança:

```java
Pessoa
```

guarda as informações comuns.

---

```java
Aluno
```

guarda apenas o que é específico.

---

# Exemplo Completo

Classe Pai:

```java
public class Veiculo {

    String marca;
    String modelo;

}
```

---

Classe Filha:

```java
public class Carro extends Veiculo {

    int portas;

}
```

---

Uso:

```java
Carro carro = new Carro();

carro.marca = "Honda";
carro.modelo = "Civic";
carro.portas = 4;
```

---

# Relação "É UM"

Uma boa herança segue a relação:

```text
É UM
```

---

Correto:

```text
Aluno é uma Pessoa

Cachorro é um Animal

Filme é um Título
```

---

Errado:

```text
Pessoa é uma Conta

Aluno é um Livro
```

---

# Herança em Cadeia

Também é possível criar uma sequência de heranças.

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

e

```java
Pessoa
```

---

# Herança Múltipla

Java não permite herança múltipla de classes. 【1-30b116】

---

## Exemplo Inválido

```java
public class A extends B, C {

}
```

---

Resultado:

```text
Erro de compilação
```

---

Uma classe só pode utilizar:

```java
extends
```

uma única vez.

---

# Benefícios do extends

- Reutilização de código
- Menos repetição
- Melhor organização
- Facilidade de manutenção

---

# Erros Comuns

## Erro 1

Esquecer a palavra:

```java
extends
```

---

## Erro 2

Criar heranças sem relação lógica.

---

## Erro 3

Duplicar código que poderia estar na classe pai.

---

## Erro 4

Achar que Java aceita herança múltipla.

---

# Resumo

A palavra:

```java
extends
```

é utilizada para criar heranças.

---

A classe filha recebe características da classe pai.

---

O objetivo principal é:

```text
Reutilizar código.
```

---

Java permite:

```java
Uma superclasse
```

para cada classe.

---

# Revisão Rápida

## Qual palavra cria uma herança?

```java
extends
```

---

## O que significa extends?

Herdar de outra classe.

---

## Qual a principal vantagem do extends?

Reutilização de código.

---

## Java permite herança múltipla?

Não.

---

## Qual relação normalmente indica uma herança?

```text
É UM
```

---

## Cite um exemplo de herança.

```text
Aluno → Pessoa
```
