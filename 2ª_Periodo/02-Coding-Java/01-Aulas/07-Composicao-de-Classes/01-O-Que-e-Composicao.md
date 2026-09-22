# O Que é Composição?

## Introdução

Composição é uma técnica utilizada na Programação Orientada a Objetos para criar relacionamentos entre classes.

Enquanto a herança representa uma relação:

```text
É UM
```

a composição representa uma relação:

```text
TEM UM
```

ou

```text
POSSUI UM
```

A composição é um dos recursos mais utilizados em sistemas reais.

---

# O Que é Composição?

Composição acontece quando uma classe possui um objeto de outra classe como atributo.

Em vez de herdar características, ela passa a utilizar outra classe internamente.

---

## Exemplo Simples

Classe:

```text
Pedido
```

Possui:

```text
Cliente
```

---

Podemos dizer:

```text
Pedido TEM UM Cliente
```

---

# Exemplo do Mundo Real

## Carro

Um carro possui:

```text
Motor
```

---

Não podemos dizer:

```text
Carro é um Motor
```

Isso seria errado.

---

A relação correta é:

```text
Carro TEM UM Motor
```

---

# Composição x Herança

## Herança

Representa:

```text
É UM
```

---

Exemplo:

```text
Aluno é uma Pessoa
```

---

Código:

```java
public class Aluno extends Pessoa {

}
```

---

## Composição

Representa:

```text
TEM UM
```

---

Exemplo:

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

# Primeiro Exemplo

Classe Cliente:

```java
public class Cliente {

    String nome;

}
```

---

Classe Pedido:

```java
public class Pedido {

    Cliente cliente;

}
```

---

Observe:

```text
Pedido possui um Cliente
```

---

# Utilizando na Prática

```java
Cliente cliente = new Cliente();

cliente.nome = "João";
```

---

Criando pedido:

```java
Pedido pedido = new Pedido();

pedido.cliente = cliente;
```

---

# Resultado

Agora:

```text
Pedido
↓
Cliente João
```

---

# Exemplo Completo

Classe Cliente:

```java
public class Cliente {

    String nome;

}
```

---

Classe Pedido:

```java
public class Pedido {

    Cliente cliente;

}
```

---

Programa:

```java
Cliente cliente = new Cliente();

cliente.nome = "Maria";

Pedido pedido = new Pedido();

pedido.cliente = cliente;

System.out.println(
    pedido.cliente.nome
);
```

---

Saída:

```text
Maria
```

---

# Outro Exemplo

Classe Motor:

```java
public class Motor {

    int potencia;

}
```

---

Classe Carro:

```java
public class Carro {

    Motor motor;

}
```

---

Relação:

```text
Carro tem um Motor
```

---

# Por Que Utilizar Composição?

A composição permite criar sistemas mais organizados.

Em vez de colocar tudo dentro da mesma classe, dividimos as responsabilidades.

---

Exemplo:

Errado:

```text
Classe gigante
```

com:

- Cliente
- Pedido
- Produto
- Pagamento

Tudo junto.

---

Correto:

```text
Cliente
Pedido
Produto
Pagamento
```

cada um em sua própria classe.

---

# Vantagens

## Organização

Cada classe possui sua responsabilidade.

---

## Reutilização

A mesma classe pode ser utilizada em vários lugares.

---

## Facilidade de Manutenção

Mudanças ficam isoladas.

---

## Maior Clareza

O código fica mais próximo do mundo real.

---

# Exemplo de Escola

Classe:

```text
Aluno
```

---

Possui:

```text
Endereco
```

---

Código:

```java
public class Endereco {

    String rua;

}
```

---

```java
public class Aluno {

    Endereco endereco;

}
```

---

Relação:

```text
Aluno tem um Endereço
```

---

# Como Identificar Composição?

Pergunte:

```text
"Tem um?"
```

---

Exemplos:

```text
Pedido tem um Cliente ✅

Carro tem um Motor ✅

Aluno tem um Endereço ✅

Funcionario tem um Departamento ✅
```

---

# Como Identificar Herança?

Pergunte:

```text
"É um?"
```

---

Exemplos:

```text
Aluno é uma Pessoa ✅

Professor é uma Pessoa ✅

Cachorro é um Animal ✅
```

---

# Erros Comuns

## Erro 1

Usar herança quando deveria usar composição.

---

## Erro 2

Colocar muitas responsabilidades na mesma classe.

---

## Erro 3

Confundir:

```text
É UM
```

com

```text
TEM UM
```

---

## Erro 4

Criar relacionamentos sem necessidade.

---

# Resumo

Composição representa uma relação:

```text
TEM UM
```

---

Exemplos:

```text
Pedido → Cliente

Carro → Motor

Aluno → Endereço
```

---

É uma das formas mais utilizadas para relacionar classes em aplicações reais.

---

# Revisão Rápida

## O que é composição?

Uma relação entre classes onde uma classe utiliza outra como atributo.

---

## Qual pergunta ajuda a identificar composição?

```text
TEM UM?
```

---

## Pedido e Cliente representam qual tipo de relação?

Composição.

---

## Carro e Motor representam qual tipo de relação?

Composição.

---

## Qual a principal vantagem da composição?

Organização e reutilização de código.
