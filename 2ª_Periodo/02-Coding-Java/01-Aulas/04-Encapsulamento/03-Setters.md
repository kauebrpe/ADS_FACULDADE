# Setters

## Introdução

No tópico anterior aprendemos que os Getters são utilizados para acessar atributos privados.

Agora vamos aprender como alterar esses atributos de forma controlada utilizando os Setters.

Os Setters fazem parte do processo de encapsulamento e permitem modificar valores sem expor diretamente os atributos da classe.

---

# O que é um Setter?

Setter é um método utilizado para alterar o valor de um atributo privado.

Seu objetivo é controlar como os dados serão modificados.

---

# Por Que Utilizar Setters?

Imagine a seguinte classe:

```java
public class Pessoa {

    private String nome;

}
```

---

Como o atributo é privado:

```java
nome
```

não pode ser alterado diretamente.

---

Tentativa:

```java
Pessoa p = new Pessoa();

p.nome = "João";
```

Resultado:

```text
Erro de compilação.
```

---

# Solução

Criar um Setter.

```java
public class Pessoa {

    private String nome;

    public void setNome(String nome) {

        this.nome = nome;

    }

}
```

---

Agora podemos alterar o atributo.

```java
Pessoa p = new Pessoa();

p.setNome("João");
```

---

# Estrutura de um Setter

```java
public void setAtributo(Tipo valor) {

    atributo = valor;

}
```

---

## Exemplo

```java
public void setNome(String nome) {

    this.nome = nome;

}
```

---

# Setter para Inteiros

```java
private int idade;

public void setIdade(int idade) {

    this.idade = idade;

}
```

---

# Setter para Double

```java
private double preco;

public void setPreco(double preco) {

    this.preco = preco;

}
```

---

# Exemplo Completo

Classe:

```java
public class Produto {

    private String nome;
    private double preco;

    public void setNome(String nome) {

        this.nome = nome;

    }

    public void setPreco(double preco) {

        this.preco = preco;

    }

}
```

---

Utilização:

```java
Produto produto = new Produto();

produto.setNome("Notebook");
produto.setPreco(3500.00);
```

---

# O Papel do this

Observe:

```java
this.nome = nome;
```

---

Existem dois nomes iguais:

```java
nome
```

Parâmetro recebido.

---

E:

```java
nome
```

Atributo da classe.

---

O:

```java
this
```

serve para indicar:

```text
Este atributo pertence ao objeto atual.
```

---

# Exemplo Visual

```java
public void setNome(String nome) {

    this.nome = nome;

}
```

Significa:

```text
atributo da classe = valor recebido
```

---

# Exemplo da Aula

O professor apresentou o padrão:

```java
public void setTotalDeAvaliacoes(
    int totalDeAvaliacoes
) {

    this.totalDeAvaliacoes =
        totalDeAvaliacoes;

}
```

utilizando encapsulamento e modificação controlada dos atributos. 【1-3f8283】

---

# Setter com Validação

Uma das maiores vantagens é validar os dados antes da alteração.

---

## Exemplo

```java
public void setIdade(int idade) {

    if (idade >= 0) {

        this.idade = idade;

    }

}
```

---

## Benefício

Evita:

```java
idade = -10;
```

---

# Outro Exemplo

```java
public void setPreco(double preco) {

    if (preco > 0) {

        this.preco = preco;

    }

}
```

---

# Setter e Encapsulamento

Sem Setter:

```java
atributo protegido
```

mas impossível modificar.

---

Com Setter:

```java
atributo protegido
+
modificação controlada
```

---

# Exemplo Completo

```java
public class Aluno {

    private String nome;

    public void setNome(String nome) {

        this.nome = nome;

    }

}
```

---

```java
Aluno aluno = new Aluno();

aluno.setNome("Kauê");
```

---

# Getters x Setters

## Getter

Função:

```text
Ler informações.
```

Exemplo:

```java
getNome()
```

---

## Setter

Função:

```text
Modificar informações.
```

Exemplo:

```java
setNome()
```

---

# Boas Práticas

## Criar validações

Sempre que possível.

---

## Utilizar o padrão

```java
setNome()
setIdade()
setPreco()
```

---

## Não permitir valores inválidos

Exemplo:

```java
idade negativa
preço negativo
```

---

# Erros Comuns

## Erro 1

Esquecer o uso do:

```java
this
```

---

## Erro 2

Criar Setters sem necessidade.

---

## Erro 3

Não validar informações importantes.

---

## Erro 4

Confundir Getter com Setter.

---

# Resumo

Setter é utilizado para alterar atributos privados.

---

Estrutura:

```java
setNome()
setIdade()
setPreco()
```

---

Benefícios:

- Controle
- Segurança
- Encapsulamento

---

O:

```java
this
```

identifica atributos do objeto atual.

---

# Revisão Rápida

## O que é um Setter?

Um método utilizado para alterar um atributo.

---

## Qual palavra normalmente aparece em Setters?

```java
set
```

---

## O que o Setter faz?

Modifica valores.

---

## O que o Getter faz?

Lê valores.

---

## Para que serve o this?

Referenciar atributos do objeto atual.

---

## Qual a principal vantagem dos Setters?

Permitir validações antes da alteração dos dados.
