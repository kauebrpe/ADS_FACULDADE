# Composição na Prática

## Introdução

No tópico anterior aprendemos o conceito de composição.

Agora vamos aplicar esse conceito em exemplos mais próximos de sistemas reais.

O objetivo é entender como classes podem trabalhar juntas para resolver problemas.

---

# Revisão

Composição representa a relação:

```text
TEM UM
```

ou

```text
POSSUI UM
```

Exemplos:

```text
Pedido tem um Cliente

Aluno tem um Endereço

Funcionário tem um Departamento
```

---

# Exemplo 1 - Cliente e Pedido

## Classe Cliente

```java
public class Cliente {

    String nome;
    String email;

}
```

---

## Classe Pedido

```java
public class Pedido {

    Cliente cliente;

}
```

---

## Utilização

```java
Cliente cliente = new Cliente();

cliente.nome = "João";
cliente.email = "joao@email.com";

Pedido pedido = new Pedido();

pedido.cliente = cliente;
```

---

Agora:

```text
Pedido
↓
Cliente João
```

---

# Exibindo Informações

```java
System.out.println(
    pedido.cliente.nome
);
```

Resultado:

```text
João
```

---

# Exemplo 2 - Aluno e Endereço

## Classe Endereco

```java
public class Endereco {

    String rua;
    String cidade;

}
```

---

## Classe Aluno

```java
public class Aluno {

    String nome;
    Endereco endereco;

}
```

---

## Utilização

```java
Endereco endereco = new Endereco();

endereco.rua = "Rua A";
endereco.cidade = "Recife";

Aluno aluno = new Aluno();

aluno.nome = "Maria";
aluno.endereco = endereco;
```

---

## Exibindo

```java
System.out.println(
    aluno.endereco.cidade
);
```

Resultado:

```text
Recife
```

---

# Exemplo 3 - Funcionário e Departamento

## Classe Departamento

```java
public class Departamento {

    String nome;

}
```

---

## Classe Funcionario

```java
public class Funcionario {

    String nome;

    Departamento departamento;

}
```

---

## Utilização

```java
Departamento departamento =
    new Departamento();

departamento.nome = "TI";

Funcionario funcionario =
    new Funcionario();

funcionario.nome = "Carlos";

funcionario.departamento =
    departamento;
```

---

## Resultado

```java
System.out.println(
    funcionario.departamento.nome
);
```

Saída:

```text
TI
```

---

# Exemplo 4 - Motor e Carro

## Classe Motor

```java
public class Motor {

    int potencia;

}
```

---

## Classe Carro

```java
public class Carro {

    String modelo;

    Motor motor;

}
```

---

## Utilização

```java
Motor motor = new Motor();

motor.potencia = 150;

Carro carro = new Carro();

carro.modelo = "Civic";

carro.motor = motor;
```

---

## Resultado

```java
System.out.println(
    carro.motor.potencia
);
```

Saída:

```text
150
```

---

# Composição em Sistemas Reais

Em aplicações reais é muito comum encontrar relações deste tipo:

```text
Cliente → Endereço

Pedido → Cliente

Pedido → Produto

Funcionário → Departamento

Aluno → Curso
```

---

# Encadeamento de Objetos

Objeto dentro de objeto.

Exemplo:

```java
pedido.cliente.nome
```

---

Aqui temos:

```text
pedido
↓
cliente
↓
nome
```

---

# Vantagens da Composição

## Organização

Cada classe possui uma responsabilidade.

---

## Reutilização

Uma mesma classe pode ser utilizada em vários lugares.

---

## Manutenção

Alterações ficam mais fáceis.

---

## Clareza

Representa melhor o mundo real.

---

# Composição x Herança

## Herança

```text
É UM
```

Exemplo:

```text
Aluno é uma Pessoa
```

---

## Composição

```text
TEM UM
```

Exemplo:

```text
Aluno tem um Endereço
```

---

# Qual Utilizar?

Pergunte:

```text
É um?
```

Se sim:

```text
Herança
```

---

Pergunte:

```text
Possui um?
```

Se sim:

```text
Composição
```

---

# Exemplo

```text
Professor é uma Pessoa
```

Resposta:

```text
Herança
```

---

```text
Professor possui um Departamento
```

Resposta:

```text
Composição
```

---

# Boas Práticas

- Criar classes com responsabilidades específicas.
- Evitar classes gigantes.
- Utilizar composição para relacionamentos naturais.
- Utilizar herança somente quando existir a relação "é um".

---

# Erros Comuns

## Erro 1

Usar herança quando a relação é de composição.

---

## Erro 2

Colocar todos os atributos em uma única classe.

---

## Erro 3

Criar relacionamentos sem necessidade.

---

## Erro 4

Confundir:

```text
É UM
```

com

```text
TEM UM
```

---

# Resumo

Composição representa relações entre objetos.

---

Exemplos:

```text
Pedido → Cliente

Aluno → Endereço

Funcionário → Departamento

Carro → Motor
```

---

A composição é uma das técnicas mais utilizadas para modelar sistemas reais.

---

# Revisão Rápida

## O que representa a composição?

Uma relação "TEM UM".

---

## Pedido e Cliente representam qual conceito?

Composição.

---

## Carro e Motor representam qual conceito?

Composição.

---

## Quando utilizar composição?

Quando uma classe possui outra como parte da sua estrutura.

---

## Qual a principal vantagem da composição?

Organização e reutilização de código.
