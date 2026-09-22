# Classes e Objetos

Este módulo apresenta os primeiros conceitos de Programação Orientada a Objetos (POO) utilizando Java.

Aqui começamos a criar nossas próprias classes e objetos, entendendo como representar elementos do mundo real dentro da aplicação.

Grande parte do desenvolvimento em Java gira em torno desses conceitos.

---

# Conteúdo do Módulo

## 01 - Classes

Assuntos estudados:

- O que é uma classe
- Estrutura de uma classe
- Classe como molde
- Organização do código

---

## 02 - Objetos

Assuntos estudados:

- O que é um objeto
- Instanciação
- Palavra-chave new
- Referências

---

## 03 - Atributos

Assuntos estudados:

- Características dos objetos
- Variáveis de instância
- Armazenamento de estado

---

## 04 - Métodos

Assuntos estudados:

- Comportamentos dos objetos
- Métodos sem retorno
- Parâmetros
- Execução de ações

---

## 05 - Métodos com Retorno

Assuntos estudados:

- return
- Métodos que devolvem valores
- Cálculos
- Reaproveitamento de código

---

# Exemplo Utilizado em Aula

Classe:

```java
public class Pessoa {

    String nome;
    int idade;

    void fazAniversario() {

        idade++;

    }

}
```

---

Objeto:

```java
Pessoa pessoa1 = new Pessoa();
```

---

Utilização:

```java
pessoa1.nome = "Ana";
pessoa1.idade = 20;

pessoa1.fazAniversario();
```

---

# Conceitos Fundamentais

## Classe

Classe é um molde.

Ela define:

- Atributos
- Métodos

---

## Objeto

Objeto é uma instância de uma classe.

É através dos objetos que representamos informações reais dentro do sistema.

---

## Atributo

Representa uma característica.

Exemplos:

```text
nome
idade
preco
titulo
```

---

## Método

Representa um comportamento.

Exemplos:

```text
avaliar()
depositar()
sacar()
fazAniversario()
```

---

# Fluxo da Programação Orientada a Objetos

```text
Classe
↓
Objeto
↓
Atributos
↓
Métodos
↓
Interação
```

---

# Exercícios Desenvolvidos

Durante este módulo foram criadas classes como:

- Pessoa
- Calculadora
- Música
- Carro
- Aluno

Além da criação de objetos e utilização de métodos. 【1-1d0a87】【2-41d960】

---

# Habilidades Desenvolvidas

Ao concluir este módulo o aluno deverá ser capaz de:

- Criar classes
- Criar objetos
- Declarar atributos
- Criar métodos
- Instanciar objetos com new
- Trabalhar com métodos de retorno

---

# Próximo Módulo

```text
04-Encapsulamento
```

Neste módulo serão estudados:

- Getters
- Setters
- private
- public
- Modificadores de acesso
