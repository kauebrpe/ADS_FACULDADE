# Herança e Sobrescrita

Este módulo apresenta um dos conceitos mais importantes da Programação Orientada a Objetos: a reutilização de código através da herança.

Também serão estudados os mecanismos que permitem modificar comportamentos herdados, como sobrescrita de métodos e uso das palavras-chave `super` e `@Override`.

---

# Conteúdo do Módulo

## 01 - Herança

Assuntos estudados:

- O que é herança
- Classe pai
- Classe filha
- Reutilização de código
- Relação "é um"

---

## 02 - extends

Assuntos estudados:

- Palavra-chave extends
- Criação de subclasses
- Herança de atributos
- Herança de métodos

---

## 03 - Sobrescrita (Override)

Assuntos estudados:

- Sobrescrita de métodos
- Alteração de comportamento
- Polimorfismo inicial

---

## 04 - super

Assuntos estudados:

- Acesso à superclasse
- Reutilização de métodos herdados
- Chamada de comportamentos da classe pai

---

## 05 - Annotations

Assuntos estudados:

- @Override
- @Deprecated
- Conceito de Anotações
- Uso das Annotations em Java

---

# Objetivo da Herança

Evitar repetição de código.

Sem herança:

```text
Filme
├─ nome
├─ ano
└─ duração

Serie
├─ nome
├─ ano
└─ duração
```

Muita repetição.

---

Com herança:

```text
Titulo
├─ nome
├─ ano
└─ duração

      ▲
      │
 ┌────┴────┐
 │         │
Filme    Serie
```

Código mais organizado.

---

# Conceitos Importantes

## Superclasse

Classe que fornece atributos e métodos para outras classes.

Exemplo:

```java
Titulo
```

---

## Subclasse

Classe que herda de outra classe.

Exemplo:

```java
Filme
```

---

## Sobrescrita

Permite alterar o comportamento herdado.

---

## @Override

Annotation utilizada para indicar que um método está sendo sobrescrito.

---

# Exemplo Utilizado em Aula

```java
public class Filme extends Titulo {

}
```

O Filme herda características da classe Titulo. 【1-306fff】

---

# Fluxo do Módulo

```text
Herança
↓
extends
↓
Sobrescrita
↓
super
↓
@Override
↓
Polimorfismo
```

---

# Exercícios Desenvolvidos

Durante este módulo foram trabalhados exemplos envolvendo:

- Pessoa → Aluno
- Animal → Cachorro
- Animal → Gato
- Veículo → Carro
- Conta → ContaPoupanca
- Funcionário → Professor 【2-a12878】【1-306fff】

---

# Habilidades Desenvolvidas

Ao concluir este módulo o aluno deverá ser capaz de:

- Criar classes pai e filha
- Utilizar extends
- Reutilizar código
- Sobrescrever métodos
- Utilizar super
- Compreender annotations básicas

---

# Próximo Módulo

```text
06-Polimorfismo-e-Interfaces
```

Nesse módulo veremos como objetos diferentes podem responder ao mesmo método de formas diferentes.
