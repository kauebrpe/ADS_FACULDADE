# Introdução às Coleções

## Introdução

Até agora trabalhamos com:

- Variáveis
- Objetos
- Herança
- Interfaces

Mas ainda existe um problema.

Como armazenar vários objetos do mesmo tipo?

Exemplo:

```text
100 alunos
50 produtos
300 filmes
```

Criar uma variável para cada objeto seria inviável.

Para resolver esse problema utilizamos:

```text
Coleções
```

---

# O que são Coleções?

Coleções são estruturas utilizadas para armazenar vários objetos em uma única variável.

Elas fazem parte do:

```text
Java Collections Framework
```

---

# Por Que Utilizar Coleções?

Imagine uma turma com 40 alunos.

Sem coleções:

```java
Aluno aluno1;
Aluno aluno2;
Aluno aluno3;
...
Aluno aluno40;
```

---

Isso rapidamente se torna difícil de manter.

---

Com coleções:

```java
List<Aluno> alunos;
```

Todos os alunos podem ser armazenados em uma única estrutura.

---

# Antes das Coleções

Antes de aprender coleções normalmente utilizamos arrays.

---

## Exemplo

```java
String[] nomes = new String[3];

nomes[0] = "João";
nomes[1] = "Maria";
nomes[2] = "Carlos";
```

---

## Problema

O tamanho precisa ser definido antecipadamente.

```java
new String[3]
```

---

Se precisarmos armazenar mais pessoas:

```text
Não cabe.
```

---

# Vantagem das Coleções

As coleções podem crescer dinamicamente.

---

Exemplo:

```java
ArrayList<String> nomes =
    new ArrayList<>();
```

---

Podemos continuar adicionando elementos conforme necessário.

---

# O Que é o Java Collections Framework?

É um conjunto de classes e interfaces criado para facilitar o armazenamento e manipulação de dados.

---

Algumas estruturas famosas:

```text
List
ArrayList
LinkedList
Set
HashSet
Map
HashMap
```

---

Nesta disciplina começaremos pelas listas.

---

# O Que é uma Lista?

Uma lista é uma coleção ordenada de elementos.

---

Exemplo:

```text
João
Maria
Carlos
Pedro
```

---

Cada elemento possui uma posição.

---

# Exemplo de Lista

```java
List<String> nomes =
    new ArrayList<>();
```

---

Adicionando elementos:

```java
nomes.add("João");
nomes.add("Maria");
nomes.add("Carlos");
```

---

# Resultado

Lista:

```text
[João, Maria, Carlos]
```

---

# Armazenando Objetos

Além de textos, também podemos armazenar objetos.

---

## Exemplo

Classe:

```java
public class Aluno {

    String nome;

}
```

---

Lista:

```java
List<Aluno> alunos =
    new ArrayList<>();
```

---

Agora podemos armazenar vários objetos:

```java
Aluno aluno1 = new Aluno();
Aluno aluno2 = new Aluno();
Aluno aluno3 = new Aluno();
```

---

Tudo dentro da mesma coleção.

---

# Exemplo do Mundo Real

Sistema Escolar:

```text
Lista de alunos
```

---

Sistema Bancário:

```text
Lista de contas
```

---

Streaming:

```text
Lista de filmes
```

---

Loja Virtual:

```text
Lista de produtos
```

---

# Por Que as Coleções São Importantes?

Praticamente todos os sistemas Java utilizam coleções.

Elas são fundamentais para:

- Organização
- Flexibilidade
- Manipulação de grandes quantidades de dados

---

# Estruturas Mais Utilizadas

## List

Permite elementos repetidos.

Mantém a ordem de inserção.

---

## Set

Não permite elementos repetidos.

---

## Map

Armazena dados em pares:

```text
Chave → Valor
```

---

# Exemplo Visual

Lista:

```text
0 → João
1 → Maria
2 → Carlos
3 → Pedro
```

---

Cada elemento possui uma posição.

---

# Benefícios das Coleções

- Menos código
- Mais organização
- Tamanho flexível
- Facilidade para percorrer elementos
- Melhor manutenção

---

# Erros Comuns

## Erro 1

Criar dezenas de variáveis quando uma coleção resolveria o problema.

---

## Erro 2

Confundir Array com ArrayList.

---

## Erro 3

Escolher uma coleção inadequada.

---

# Resumo

Coleções são estruturas para armazenar múltiplos elementos.

---

As mais utilizadas são:

```text
List
Set
Map
```

---

As coleções fazem parte do:

```text
Java Collections Framework
```

---

São fundamentais para aplicações reais.

---

# Revisão Rápida

## O que é uma coleção?

Uma estrutura utilizada para armazenar vários elementos.

---

## Qual a principal vantagem das coleções?

Armazenar quantidades variáveis de dados.

---

## O que é o Java Collections Framework?

Conjunto de classes e interfaces para trabalhar com coleções.

---

## Qual estrutura estudaremos primeiro?

```text
List
```

---

## Podemos armazenar objetos dentro de coleções?

Sim.
