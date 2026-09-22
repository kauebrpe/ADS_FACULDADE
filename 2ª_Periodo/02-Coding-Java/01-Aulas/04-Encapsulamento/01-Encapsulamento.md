# Encapsulamento

## Introdução

Encapsulamento é um dos pilares da Programação Orientada a Objetos.

O objetivo é proteger os dados de uma classe e controlar a forma como eles podem ser acessados ou modificados.

Em vez de permitir acesso direto aos atributos, criamos métodos específicos para controlar esse acesso.

---

# O que é Encapsulamento?

Encapsulamento é a prática de esconder detalhes internos de uma classe.

A ideia é simples:

```text
Proteja os dados.
Controle o acesso.
```

---

# Por Que Encapsular?

Imagine uma conta bancária.

Ela possui:

```text
titular
saldo
numeroConta
```

Se qualquer parte do programa puder alterar o saldo livremente:

```java
conta.saldo = -10000;
```

teremos problemas.

---

# Exemplo Sem Encapsulamento

```java
public class Conta {

    public double saldo;

}
```

---

Agora qualquer classe pode fazer:

```java
Conta conta = new Conta();

conta.saldo = -5000;
```

---

Isso quebra as regras de negócio.

---

# Exemplo Com Encapsulamento

```java
public class Conta {

    private double saldo;

}
```

---

Agora:

```java
conta.saldo = -5000;
```

gera erro.

---

O atributo está protegido.

---

# Como Funciona?

O encapsulamento normalmente utiliza:

```java
private
```

para os atributos.

---

Exemplo:

```java
public class Pessoa {

    private String nome;
    private int idade;

}
```

---

Agora os atributos só podem ser acessados pela própria classe.

---

# Benefícios do Encapsulamento

## Segurança

Impede alterações indevidas.

---

## Controle

Permite validar informações.

---

## Organização

Mantém a lógica concentrada na própria classe.

---

## Manutenção

Facilita futuras alterações.

---

# Exemplo Real

Classe:

```java
public class Produto {

    private double preco;

}
```

---

Em vez de permitir:

```java
produto.preco = -100;
```

podemos criar métodos para validar o valor.

---

# Encapsulamento e Objetos

Cada objeto continua possuindo seus atributos.

A diferença é que agora eles ficam protegidos.

---

## Antes

```java
pessoa.nome
```

Acesso direto.

---

## Depois

```java
private String nome;
```

Atributo protegido.

---

# Relação com Getters e Setters

Para acessar atributos privados utilizamos:

```java
getters
```

e

```java
setters
```

Esses métodos serão estudados nos próximos tópicos.

---

# Exemplo Simplificado

```java
public class Filme {

    private String nome;
    private int anoDeLancamento;

}
```

---

Mesmo sendo privados, os dados continuam existindo.

Apenas não podem ser acessados diretamente por outras classes.

---

# Encapsulamento na Aula

O professor apresentou esse conceito ao transformar atributos públicos em privados e utilizar métodos de acesso para controlar as informações da classe. 【1-ca0b41】

---

# Analogia Simples

Pense em um carro.

Você pode:

```text
Acelerar
Frear
Virar o volante
```

---

Mas não altera diretamente:

```text
Motor
Injeção eletrônica
Sistema interno
```

---

O encapsulamento segue a mesma ideia.

O usuário interage apenas com os recursos necessários.

---

# Erros Comuns

## Erro 1

Deixar todos os atributos públicos.

---

## Erro 2

Permitir alterações sem validação.

---

## Erro 3

Confundir encapsulamento com herança.

---

## Erro 4

Pensar que encapsulamento serve apenas para esconder atributos.

Na verdade ele também serve para controlar comportamentos.

---

# Resumo

Encapsulamento:

```text
Protege dados.
Controla acessos.
Melhora a organização.
```

---

Normalmente utiliza:

```java
private
```

nos atributos.

---

É um dos quatro pilares da Programação Orientada a Objetos.

---

# Revisão Rápida

## O que é encapsulamento?

Proteção e controle de acesso aos dados.

---

## Qual modificador é mais utilizado para encapsular atributos?

```java
private
```

---

## Qual é o principal objetivo do encapsulamento?

Evitar acesso direto e descontrolado aos dados.

---

## O encapsulamento melhora a segurança do código?

Sim.

---

## Quais recursos normalmente acompanham o encapsulamento?

```java
Getters
Setters
```
