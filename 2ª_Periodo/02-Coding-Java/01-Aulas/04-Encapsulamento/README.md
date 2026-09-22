# Encapsulamento

Este módulo apresenta um dos pilares fundamentais da Programação Orientada a Objetos: o Encapsulamento.

O objetivo do encapsulamento é proteger os dados de uma classe e controlar a forma como eles podem ser acessados e modificados.

Ao longo deste módulo serão utilizados recursos muito comuns em aplicações Java profissionais.

---

# Conteúdo do Módulo

## 01 - Encapsulamento

Assuntos estudados:

- Conceito de Encapsulamento
- Proteção de dados
- Controle de acesso
- Segurança dos atributos

---

## 02 - Getters

Assuntos estudados:

- Métodos de leitura
- Acesso controlado aos atributos
- Convenções de nomenclatura
- Leitura de atributos privados

---

## 03 - Setters

Assuntos estudados:

- Métodos de escrita
- Alteração controlada de atributos
- Validação de dados
- Atualização segura de informações

---

## 04 - Modificadores de Acesso

Assuntos estudados:

- public
- private
- default
- Visibilidade
- Controle de acesso

---

## 05 - Palavra-chave this

Assuntos estudados:

- Referência ao objeto atual
- Resolução de conflitos de nomes
- Uso em setters
- Boas práticas

---

# O Que é Encapsulamento?

Encapsulamento é o processo de proteger os dados internos de uma classe, evitando acesso direto a informações importantes.

Exemplo:

```java
private String nome;
private int idade;
```

---

# Por Que Encapsular?

Sem encapsulamento:

```java
conta.saldo = -1000;
```

Qualquer parte do sistema poderia alterar informações livremente.

---

Com encapsulamento:

```java
private double saldo;
```

O acesso passa a ser controlado.

---

# Estrutura Clássica

```java
public class Pessoa {

    private String nome;

    public String getNome() {

        return nome;

    }

    public void setNome(String nome) {

        this.nome = nome;

    }

}
```

---

# Fluxo do Encapsulamento

```text
Atributo Privado
        ↓
Getter
        ↓
Leitura

Atributo Privado
        ↓
Setter
        ↓
Alteração Controlada
```

---

# Conceitos Importantes

## private

Protege atributos e métodos.

---

## public

Permite acesso externo.

---

## Getter

Lê informações.

Exemplo:

```java
getNome()
```

---

## Setter

Modifica informações.

Exemplo:

```java
setNome()
```

---

## this

Referencia o próprio objeto.

Exemplo:

```java
this.nome = nome;
```

---

# Exemplo Utilizado em Aula

A disciplina trabalhou com classes como:

- Filme
- Produto
- Livro
- ContaBancaria
- Pessoa
- Aluno

utilizando atributos privados e métodos getters e setters para acesso controlado. 【1-2d05b5】【2-114ef0】

---

# Benefícios do Encapsulamento

- Segurança
- Organização
- Controle dos dados
- Facilidade de manutenção
- Redução de erros

---

# Habilidades Desenvolvidas

Ao concluir este módulo o aluno deverá ser capaz de:

- Criar atributos privados
- Criar getters
- Criar setters
- Utilizar modificadores de acesso
- Utilizar a palavra-chave this
- Aplicar encapsulamento corretamente

---

# Fluxo de Aprendizagem

```text
Classe
↓
Objeto
↓
Atributos
↓
Encapsulamento
↓
Getters
↓
Setters
↓
Modificadores
↓
this
```

---

# Próximo Módulo

```text
05-Heranca-e-Sobrescrita
```

Nesse módulo serão estudados:

- Herança
- extends
- @Override
- super
- Reutilização de código
