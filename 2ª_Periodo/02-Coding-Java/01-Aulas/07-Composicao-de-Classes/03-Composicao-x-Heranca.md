# Composição x Herança

## Introdução

Uma das dúvidas mais comuns em Programação Orientada a Objetos é saber quando utilizar:

- Herança
- Composição

Ambos os conceitos permitem reutilização de código, mas possuem objetivos diferentes.

Saber escolher corretamente é uma habilidade importante para construir sistemas bem organizados.

---

# Revisão de Herança

Herança representa uma relação:

```text
É UM
```

---

## Exemplo

```text
Aluno é uma Pessoa
```

---

Código:

```java
public class Pessoa {

    String nome;

}
```

---

```java
public class Aluno extends Pessoa {

}
```

---

Nesse caso:

```text
Aluno herda características de Pessoa.
```

---

# Revisão de Composição

Composição representa uma relação:

```text
TEM UM
```

ou

```text
POSSUI UM
```

---

## Exemplo

```text
Pedido tem um Cliente
```

---

Código:

```java
public class Pedido {

    Cliente cliente;

}
```

---

Nesse caso:

```text
Pedido utiliza Cliente.
```

---

# Como Decidir?

Faça uma pergunta simples:

```text
"É um?"
```

Se a resposta for:

```text
Sim
```

normalmente utilizamos:

```text
Herança
```

---

Se não for:

```text
Herança não é a melhor escolha.
```

---

# Exemplos de Herança

## Exemplo 1

```text
Aluno é uma Pessoa.
```

---

## Exemplo 2

```text
Professor é uma Pessoa.
```

---

## Exemplo 3

```text
Cachorro é um Animal.
```

---

## Exemplo 4

```text
ContaPoupanca é uma Conta.
```

---

# Exemplos de Composição

## Exemplo 1

```text
Aluno tem um Endereço.
```

---

## Exemplo 2

```text
Pedido tem um Cliente.
```

---

## Exemplo 3

```text
Carro tem um Motor.
```

---

## Exemplo 4

```text
Funcionário tem um Departamento.
```

---

# Exemplo Correto com Herança

Classe Pai:

```java
public class Pessoa {

    String nome;

}
```

---

Classe Filha:

```java
public class Aluno extends Pessoa {

}
```

---

Motivo:

```text
Aluno é uma Pessoa.
```

---

# Exemplo Incorreto com Herança

```java
public class Pedido extends Cliente {

}
```

---

Motivo:

```text
Pedido não é um Cliente.
```

---

A relação correta seria:

```text
Pedido tem um Cliente.
```

---

# Correção com Composição

```java
public class Pedido {

    Cliente cliente;

}
```

---

Agora a modelagem está correta.

---

# Exemplo Visual

## Herança

```text
Pessoa
   ▲
   │
Aluno
```

---

## Composição

```text
Pedido
   │
   ▼
Cliente
```

---

# Comparação

## Herança

Objetivo:

```text
Especialização
```

---

Exemplo:

```text
Pessoa → Aluno
```

---

## Composição

Objetivo:

```text
Relacionamento
```

---

Exemplo:

```text
Pedido → Cliente
```

---

# Reutilização de Código

Tanto a herança quanto a composição permitem reutilizar código.

---

## Herança

Reutiliza através de:

```java
extends
```

---

## Composição

Reutiliza através da utilização de objetos.

---

## Exemplo

```java
Motor motor;
```

---

# Vantagens da Herança

- Reutilização direta
- Menos código repetido
- Facilita especializações

---

# Desvantagens da Herança

- Maior acoplamento
- Hierarquias complexas
- Difícil 
