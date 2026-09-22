# Getters

## Introdução

Quando utilizamos encapsulamento, os atributos normalmente são declarados como:

```java
private
```

Isso significa que eles não podem ser acessados diretamente por outras classes.

Para permitir a leitura desses valores utilizamos os métodos chamados:

```text
Getters
```

---

# O que é um Getter?

Um Getter é um método utilizado para retornar o valor de um atributo privado.

Sua função é permitir acesso controlado aos dados da classe.

---

# Exemplo Sem Getter

Classe:

```java
public class Pessoa {

    private String nome;

}
```

---

Tentativa de acesso:

```java
Pessoa pessoa = new Pessoa();

System.out.println(pessoa.nome);
```

---

Resultado:

```text
Erro de compilação.
```

O atributo é privado.

---

# Exemplo Com Getter

Classe:

```java
public class Pessoa {

    private String nome;

    public String getNome() {

        return nome;

    }

}
```

---

Agora podemos acessar:

```java
Pessoa pessoa = new Pessoa();

System.out.println(
    pessoa.getNome()
);
```

---

# Estrutura de um Getter

```java
public Tipo getAtributo() {

    return atributo;

}
```

---

# Exemplo

```java
public class Pessoa {

    private String nome;

    public String getNome() {

        return nome;

    }

}
```

---

# Getter para Inteiros

```java
public class Pessoa {

    private int idade;

    public int getIdade() {

        return idade;

    }

}
```

---

# Getter para Double

```java
public class Produto {

    private double preco;

    public double getPreco() {

        return preco;

    }

}
```

---

# Getter para Boolean

Quando o atributo é boolean, normalmente usamos:

```java
is
```

em vez de:

```java
get
```

---

## Exemplo

```java
private boolean ativo;
```

Getter:

```java
public boolean isAtivo() {

    return ativo;

}
```

---

# Exemplo Completo

```java
public class Aluno {

    private String nome;
    private int idade;

    public String getNome() {

        return nome;

    }

    public int getIdade() {

        return idade;

    }

}
```

---

Utilização:

```java
Aluno aluno = new Aluno();

System.out.println(
    aluno.getNome()
);

System.out.println(
    aluno.getIdade()
);
```

---

# Exemplo da Aula

O professor utilizou getters para retornar informações do objeto.

Exemplo:

```java
public int getTotalDeAvaliacoes() {

    return totalDeAvaliacoes;

}
```

Esse método devolve a quantidade de avaliações armazenadas no objeto. 【1-74d0de】

---

# Por Que Utilizar Getters?

## Segurança

Os atributos continuam protegidos.

---

## Controle

A classe decide quais dados podem ser exibidos.

---

## Organização

Evita acesso direto aos atributos.

---

## Encapsulamento

Mantém a filosofia da Programação Orientada a Objetos.

---

# Exemplo Prático

Classe:

```java
public class Conta {

    private double saldo;

    public double getSaldo() {

        return saldo;

    }

}
```

---

Uso:

```java
Conta conta = new Conta();

System.out.println(
    conta.getSaldo()
);
```

---

Resultado:

```text
Leitura permitida.
```

---

Alteração direta:

```java
conta.saldo = 1000;
```

---

Resultado:

```text
Erro.
```

O atributo continua protegido.

---

# Convenção de Nomes

Para atributos normais:

```java
getNome()
getIdade()
getPreco()
```

---

Para boolean:

```java
isAtivo()
isAprovado()
isDisponivel()
```

---

# Boas Práticas

## Criar nomes claros

Bom:

```java
getNome()
```

---

Ruim:

```java
getN()
```

---

## Utilizar Getter apenas quando necessário

Nem todos os atributos precisam estar acessíveis.

---

# Erros Comuns

## Erro 1

Esquecer o return.

---

Errado:

```java
public String getNome() {

}
```

---

Correto:

```java
public String getNome() {

    return nome;

}
```

---

## Erro 2

Retornar a variável errada.

---

## Erro 3

Confundir Getter com Setter.

---

Getter:

```java
Lê
```

---

Setter:

```java
Altera
```

---

# Resumo

Getter é um método utilizado para acessar atributos privados.

---

Exemplos:

```java
getNome()
getIdade()
getPreco()
```

---

Para atributos boolean:

```java
isAtivo()
```

---

Getters ajudam a manter o encapsulamento da classe.

---

# Revisão Rápida

## O que é um Getter?

Um método utilizado para retornar o valor de um atributo.

---

## Qual palavra normalmente aparece no nome?

```java
get
```

---

## O que o Getter faz?

Lê dados.

---

## Ele modifica o atributo?

Não.

---

## Qual o padrão utilizado para boolean?

```java
is
```

---

## Por que utilizamos Getters?

Para acessar atributos privados mantendo o encapsulamento.
