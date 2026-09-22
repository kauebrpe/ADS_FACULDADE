# Pilares da Programação Orientada a Objetos

## Introdução

A Programação Orientada a Objetos (POO) é um paradigma de programação baseado na utilização de objetos para representar elementos do mundo real.

Java foi projetada para trabalhar fortemente com esse paradigma.

Os quatro pilares principais da POO são:

- Encapsulamento
- Herança
- Polimorfismo
- Abstração

Esses conceitos aparecem constantemente durante o desenvolvimento de aplicações Java.

---

# O que é Programação Orientada a Objetos?

A Programação Orientada a Objetos procura representar objetos reais através de código.

Exemplos:

```text
Pessoa
Carro
Conta Bancária
Produto
Filme
Aluno
```

Esses elementos são transformados em classes e objetos dentro do sistema.

---

# Encapsulamento

## Conceito

Encapsulamento é o ato de proteger os dados de uma classe.

A ideia é evitar que informações sejam alteradas diretamente por outras partes do programa.

---

## Exemplo Sem Encapsulamento

```java
public class Conta {

    public double saldo;

}
```

Qualquer parte do programa poderia fazer:

```java
conta.saldo = -5000;
```

Isso pode gerar problemas.

---

## Exemplo Com Encapsulamento

```java
public class Conta {

    private double saldo;

}
```

Agora o atributo está protegido.

---

## Benefícios

- Mais segurança
- Maior controle
- Menos erros
- Código mais organizado

---

# Herança

## Conceito

Herança permite que uma classe reutilize características de outra classe.

A relação utilizada é:

```text
É UM
```

---

## Exemplo

Temos uma classe:

```java
public class Pessoa {

    String nome;

}
```

Agora criamos:

```java
public class Aluno extends Pessoa {

}
```

Aluno herda os atributos e métodos de Pessoa.

---

## Benefícios

- Reutilização de código
- Menos repetição
- Melhor organização

---

# Polimorfismo

## Conceito

Polimorfismo significa:

```text
Muitas formas
```

O mesmo método pode apresentar comportamentos diferentes dependendo da classe que o implementa.

---

## Exemplo

Classe pai:

```java
public class Animal {

    public void emitirSom() {
        System.out.println("Som genérico");
    }

}
```

Classe filha:

```java
public class Cachorro extends Animal {

    @Override
    public void emitirSom() {
        System.out.println("Au Au");
    }

}
```

---

Resultado:

```text
Mesmo método
Comportamento diferente
```

---

## Benefícios

- Flexibilidade
- Reutilização
- Código mais elegante

---

# Abstração

## Conceito

Abstração é o processo de representar apenas as características importantes de um objeto.

Nem tudo precisa ser modelado.

Selecionamos aquilo que é relevante para o sistema.

---

## Exemplo

Sistema Escolar

Pessoa:

```text
Nome
CPF
Data de Nascimento
```

Normalmente não precisamos armazenar:

```text
Peso
Altura
Cor favorita
```

se essas informações não forem importantes para o sistema.

---

## Benefícios

- Modelagem mais simples
- Menos complexidade
- Melhor organização

---

# Exemplo do Mundo Real

Classe Conta Bancária

```java
public class Conta {

    private double saldo;

    public void depositar(double valor) {

    }

    public void sacar(double valor) {

    }

}
```

---

Nesse exemplo:

### Encapsulamento

```text
saldo privado
```

---

### Abstração

```text
Representa apenas o necessário
```

---

### Herança

Poderíamos criar:

```java
ContaCorrente extends Conta
```

---

### Polimorfismo

Cada tipo de conta pode possuir comportamentos diferentes.

---

# Comparação dos Pilares

## Encapsulamento

Protege os dados.

---

## Herança

Reutiliza código.

---

## Polimorfismo

Permite comportamentos diferentes.

---

## Abstração

Seleciona apenas o que é importante.

---

# Resumo Geral

| Pilar | Função |
|---------|---------|
| Encapsulamento | Proteção dos dados |
| Herança | Reutilização de código |
| Polimorfismo | Comportamentos diferentes |
| Abstração | Simplificação da modelagem |

---

# Exemplo de Relação Entre os Pilares

```text
Pessoa
   ↓
Aluno

Herança
```

---

```text
saldo privado

Encapsulamento
```

---

```text
emitirSom()

Polimorfismo
```

---

```text
Modelo simplificado de Pessoa

Abstração
```

---

# Erros Comuns

## Erro 1

Confundir Herança com Encapsulamento.

---

## Erro 2

Achar que Polimorfismo significa criar vários métodos com nomes diferentes.

---

## Erro 3

Criar classes com informações desnecessárias.

---

## Erro 4

Deixar todos os atributos públicos.

---

# Revisão Rápida

## O que é Encapsulamento?

Proteção dos dados.

---

## O que é Herança?

Reutilização de código entre classes.

---

## O que é Polimorfismo?

Capacidade de apresentar comportamentos diferentes.

---

## O que é Abstração?

Focar apenas nas informações importantes.

---

## Quais são os 4 pilares da POO?

- Encapsulamento
- Herança
- Polimorfismo
- Abstração
