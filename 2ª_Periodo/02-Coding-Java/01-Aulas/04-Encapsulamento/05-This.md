# Palavra-chave this

## Introdução

A palavra-chave:

```java
this
```

é utilizada para referenciar o próprio objeto atual.

Ela é muito comum em:

- Construtores
- Getters
- Setters
- Métodos

O uso de `this` ajuda a diferenciar atributos da classe e parâmetros dos métodos.

---

# O que é this?

O `this` significa:

```text
este objeto
```

ou

```text
objeto atual
```

Sempre que usamos:

```java
this
```

estamos nos referindo ao objeto que está executando aquele código.

---

# Problema Sem o this

Observe o exemplo:

```java
public void setNome(String nome) {

    nome = nome;

}
```

---

À primeira vista parece correto.

Porém existe um problema.

Temos duas variáveis chamadas:

```java
nome
```

Uma é:

```java
atributo da classe
```

---

A outra é:

```java
parâmetro do método
```

---

# O que acontece?

```java
nome = nome;
```

Na prática:

```text
parâmetro = parâmetro
```

O atributo da classe não é alterado.

---

# Solução com this

```java
public void setNome(String nome) {

    this.nome = nome;

}
```

---

Agora temos:

```java
this.nome
```

↓

```text
atributo da classe
```

---

e:

```java
nome
```

↓

```text
parâmetro recebido
```

---

Resultado:

```text
atributo recebe o valor do parâmetro
```

---

# Exemplo Completo

```java
public class Pessoa {

    private String nome;

    public void setNome(String nome) {

        this.nome = nome;

    }

}
```

---

Utilização:

```java
Pessoa pessoa = new Pessoa();

pessoa.setNome("João");
```

---

Resultado:

```text
nome = João
```

---

# Outro Exemplo

```java
public class Aluno {

    private int idade;

    public void setIdade(int idade) {

        this.idade = idade;

    }

}
```

---

Sem o `this`:

```java
idade = idade;
```

não funcionaria corretamente.

---

Com o `this`:

```java
this.idade = idade;
```

o atributo recebe o valor corretamente.

---

# Utilização em Getters

Em getters normalmente não é obrigatório.

Exemplo:

```java
public String getNome() {

    return nome;

}
```

---

Também pode ser escrito:

```java
public String getNome() {

    return this.nome;

}
```

---

Resultado:

```text
Os dois funcionam.
```

---

# this Representa o Objeto Atual

Imagine:

```java
Pessoa pessoa1 = new Pessoa();
Pessoa pessoa2 = new Pessoa();
```

---

Quando executamos:

```java
pessoa1.setNome("Ana");
```

o:

```java
this
```

aponta para:

```text
pessoa1
```

---

Quando executamos:

```java
pessoa2.setNome("Maria");
```

o:

```java
this
```

aponta para:

```text
pessoa2
```

---

# Exemplo Visual

```java
Pessoa pessoa1 = new Pessoa();

pessoa1.setNome("Ana");
```

---

Dentro do método:

```java
this.nome = "Ana";
```

---

O Java entende:

```java
pessoa1.nome = "Ana";
```

---

# Exemplo Utilizado em Aula

O professor utilizou o padrão:

```java
public void setTotalDeAvaliacoes(
    int totalDeAvaliacoes
) {

    this.totalDeAvaliacoes =
        totalDeAvaliacoes;

}
```

para atualizar atributos encapsulados. Aula 4 - Getter_setter_modificador de acesso_exercícios.pdf 【1-d4c623】

---

# Quando Utilizar this?

Normalmente:

- Setters
- Construtores
- Métodos que manipulam atributos

---

# Benefícios

## Clareza

Facilita a leitura do código.

---

## Evita Ambiguidade

Diferencia atributo e parâmetro.

---

## Boa Prática

Torna o código mais profissional e padronizado.

---

# Erros Comuns

## Erro 1

Esquecer o `this` em Setters.

---

Errado:

```java
public void setNome(String nome) {

    nome = nome;

}
```

---

Correto:

```java
public void setNome(String nome) {

    this.nome = nome;

}
```

---

## Erro 2

Achar que `this` é uma variável comum.

Não é.

Ele representa o objeto atual.

---

## Erro 3

Utilizar `this` sem necessidade em todos os lugares.

Use principalmente quando existir conflito de nomes.

---

# Resumo

`this` representa o objeto atual.

---

É muito utilizado em:

```java
Setters
Construtores
Métodos
```

---

Função principal:

```text
Diferenciar atributo e parâmetro.
```

---

# Revisão Rápida

## O que significa this?

Objeto atual.

---

## Qual o uso mais comum de this?

Setters.

---

## O que faz este código?

```java
this.nome = nome;
```

O atributo recebe o valor do parâmetro.

---

## O this é obrigatório em Getters?

Não.

---

## O this é uma variável comum?

Não.

Ele referencia o objeto atual.
