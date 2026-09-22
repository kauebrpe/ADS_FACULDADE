# Palavra-chave super

## Introdução

Quando uma classe herda de outra, ela recebe atributos e métodos da classe pai.

Em alguns momentos, a classe filha precisa acessar diretamente recursos da superclasse.

Para isso utilizamos a palavra-chave:

```java
super
```

---

# O que é super?

A palavra:

```java
super
```

é uma referência à classe pai.

Ela permite acessar:

- Métodos da superclasse
- Construtores da superclasse
- Atributos acessíveis da superclasse

---

# Quando Utilizar super?

Normalmente utilizamos super quando queremos:

- Reutilizar um método da classe pai
- Evitar duplicação de código
- Complementar comportamentos herdados

---

# Exemplo Simples

Classe pai:

```java
public class Animal {

    public void emitirSom() {

        System.out.println("Som genérico");

    }

}
```

---

Classe filha:

```java
public class Cachorro extends Animal {

    public void emitirSom() {

        super.emitirSom();

        System.out.println("Au Au");

    }

}
```

---

Resultado:

```text
Som genérico
Au Au
```

---

# O que aconteceu?

Primeiro:

```java
super.emitirSom();
```

executou o método da classe pai.

Depois:

```java
System.out.println("Au Au");
```

executou a lógica da classe filha.

---

# Exemplo da Aula

O professor utilizou um exemplo semelhante com:

```java
Conta
```

e

```java
ContaPoupanca
```

【1-cecc60】

---

Classe pai:

```java
public class Conta {

    public void sacar(double valor) {

        // lógica de saque

    }

}
```

---

Classe filha:

```java
public class ContaPoupanca extends Conta {

    @Override
    public void sacar(double valor) {

        double taxa = 0.01;

        super.sacar(valor + taxa);

    }

}
```

---

# Por Que Utilizar super?

Sem super precisaríamos reescrever toda a lógica do método.

Com super podemos reutilizar o código da classe pai.

---

## Sem super

```java
public void sacar(double valor) {

    // repetir toda a lógica

}
```

---

## Com super

```java
super.sacar(valor);
```

---

Resultado:

```text
Menos código
Mais reutilização
```

---

# Acessando Métodos da Classe Pai

Exemplo:

```java
super.metodoPai();
```

---

## Exemplo

```java
public class Pessoa {

    public void apresentar() {

        System.out.println("Olá");

    }

}
```

---

```java
public class Aluno extends Pessoa {

    public void apresentarAluno() {

        super.apresentar();

        System.out.println("Sou aluno");

    }

}
```

---

Saída:

```text
Olá
Sou aluno
```

---

# Acessando Atributos

O super também pode acessar atributos herdados.

---

## Exemplo

Classe pai:

```java
public class Pessoa {

    protected String nome;

}
```

---

Classe filha:

```java
public class Aluno extends Pessoa {

    public void mostrarNome() {

        System.out.println(super.nome);

    }

}
```

---

# super x this

Essa diferença costuma gerar dúvidas.

---

## this

Refere-se ao objeto atual.

```java
this.nome
```

---

## super

Refere-se à superclasse.

```java
super.nome
```

---

# Comparação

| Palavra | Referência |
|----------|------------|
| this | Objeto atual |
| super | Classe pai |

---

# Exemplo Visual

```text
Pessoa
│
└── nome

      ▲
      │
Aluno
```

---

Dentro de:

```java
Aluno
```

---

```java
this.nome
```

refere-se ao atributo do objeto atual.

---

```java
super.nome
```

refere-se ao atributo herdado da superclasse.

---

# Exemplo Completo

Classe pai:

```java
public class Veiculo {

    public void ligar() {

        System.out.println("Veículo ligado");

    }

}
```

---

Classe filha:

```java
public class Carro extends Veiculo {

    @Override
    public void ligar() {

        super.ligar();

        System.out.println("Carro pronto para dirigir");

    }

}
```

---

Resultado:

```text
Veículo ligado
Carro pronto para dirigir
```

---

# Benefícios do super

- Reutilização de código
- Menos repetição
- Melhora a manutenção
- Facilita extensões da classe pai

---

# Erros Comuns

## Erro 1

Confundir super com this.

---

## Erro 2

Reescrever toda a lógica da classe pai sem necessidade.

---

## Erro 3

Utilizar super quando não existe comportamento herdado.

---

## Erro 4

Achar que super cria um novo objeto.

Ele apenas referencia a superclasse.

---

# Resumo

super representa a classe pai.

---

Pode ser utilizado para acessar:

- Métodos
- Atributos
- Construtores

---

Exemplo:

```java
super.metodo();
```

---

Objetivo principal:

```text
Reutilizar comportamentos herdados.
```

---

# Revisão Rápida

## O que é super?

Referência à superclasse.

---

## Para que serve super?

Acessar recursos da classe pai.

---

## Qual a diferença entre super e this?

this referencia o objeto atual.

super referencia a classe pai.

---

## Qual a principal vantagem do super?

Reutilizar código da superclasse.

---

## O professor utilizou super em qual contexto?

Na reutilização do método de saque da classe Conta dentro de ContaPoupanca. 【1-cecc60】
