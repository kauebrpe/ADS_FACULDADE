
# Modelagem Conceitual, Lógica e Física

## Objetivo

Compreender as três etapas da modelagem de dados:

- Modelagem Conceitual
- Modelagem Lógica
- Modelagem Física

Essas etapas são utilizadas para transformar uma ideia de negócio em um banco de dados real.

---

# O que é Modelagem de Dados?

Modelagem de dados é o processo de planejar como as informações serão organizadas dentro de um banco de dados.

O objetivo é representar corretamente as regras de negócio antes da implementação.

---

# Exemplo de Negócio

Imagine uma escola.

Precisamos armazenar informações sobre:

- Alunos
- Professores
- Turmas
- Disciplinas

Antes de criar tabelas no MySQL, devemos modelar essas informações.

---

# As Três Etapas da Modelagem

O processo normalmente segue esta sequência:

```text
Modelo Conceitual
        ↓
Modelo Lógico
        ↓
Modelo Físico
        ↓
Banco de Dados
```

---

# Modelo Conceitual

É a primeira etapa da modelagem.

Representa o negócio de forma simples.

Não se preocupa com SQL nem com tecnologia.

---

## Pergunta Principal

```text
O que existe no sistema?
```

---

## Exemplo

Sistema escolar:

```text
Aluno
Professor
Disciplina
Turma
```

Nessa fase não pensamos em:

- Tipos de dados
- CREATE TABLE
- Banco de dados específico

---

## Características

- Focado no negócio
- Fácil de entender
- Utilizado em reuniões com clientes
- Independente de tecnologia

---

# Exemplo Conceitual

```text
Aluno
    ↓
Matrícula
    ↓
Disciplina
```

Apenas descrevemos a realidade.

---

# Modelo Lógico

É a segunda etapa.

Transforma o modelo conceitual em uma estrutura mais próxima do banco de dados.

---

## Pergunta Principal

```text
Como os dados serão organizados?
```

---

## Características

- Possui tabelas
- Possui atributos
- Possui chaves
- Possui relacionamentos
- Ainda não depende do SGBD

---

## Exemplo

Tabela:

```text
ALUNOS
```

Campos:

```text
id
nome
email
```

Tabela:

```text
DISCIPLINAS
```

Campos:

```text
id
nome
carga_horaria
```

---

# Relacionamentos no Modelo Lógico

Exemplo:

```text
ALUNOS
     │
     └── MATRICULAS
              │
              └── DISCIPLINAS
```

Agora já pensamos em:

- Chaves Primárias
- Chaves Estrangeiras
- Cardinalidades

---

# Modelo Físico

É a terceira etapa.

Transforma o modelo lógico em comandos SQL.

---

## Pergunta Principal

```text
Como o banco será implementado?
```

---

## Características

- Utiliza SQL
- Possui tipos de dados
- Depende do SGBD
- Pode incluir índices
- Pode incluir constraints

---

# Exemplo Físico

```sql
CREATE TABLE alunos (
    id INT PRIMARY KEY,
    nome VARCHAR(100),
    email VARCHAR(100)
);
```

Agora estamos trabalhando com:

- MySQL
- SQL
- Tipos de dados

---

# Comparação Entre os Modelos

## Conceitual

Foca no negócio.

Exemplo:

```text
Aluno
Disciplina
Professor
```

---

## Lógico

Foca na estrutura.

Exemplo:

```text
ALUNOS
(id, nome, email)

DISCIPLINAS
(id, nome)
```

---

## Físico

Foca na implementação.

Exemplo:

```sql
CREATE TABLE alunos (...)
```

---

# Exemplo Completo

## Conceitual

```text
Cliente faz Pedido
```

---

## Lógico

```text
CLIENTES
- id
- nome

PEDIDOS
- id
- data
- cliente_id
```

---

## Físico

```sql
CREATE TABLE clientes (
    id INT PRIMARY KEY,
    nome VARCHAR(100)
);

CREATE TABLE pedidos (
    id INT PRIMARY KEY,
    data_pedido DATE,
    cliente_id INT
);
```

---

# Por Que Seguir as Três Etapas?

Sem planejamento:

- Retrabalho
- Erros de modelagem
- Dados duplicados
- Problemas de manutenção

---

Com planejamento:

- Organização
- Clareza
- Melhor desempenho
- Menos erros

---

# Aplicação no Projeto Final

O fluxo do projeto deve ser:

1. Criar o modelo conceitual
2. Criar o modelo lógico
3. Gerar o modelo físico
4. Criar o banco no MySQL

---

# Erros Comuns

## Erro 1

Começar diretamente pelo SQL.

---

## Erro 2

Pular o modelo conceitual.

---

## Erro 3

Misturar modelo lógico e físico.

---

## Erro 4

Definir tipos de dados durante o modelo conceitual.

---

# Resumo

## Modelo Conceitual

Representa o negócio.

---

## Modelo Lógico

Representa a estrutura.

---

## Modelo Físico

Representa a implementação.

---

# Tabela Resumo

| Modelo | Foco |
|----------|----------|
| Conceitual | Negócio |
| Lógico | Estrutura |
| Físico | Implementação |

---

# Cola para Prova

- Conceitual → O que existe?
- Lógico → Como organizar?
- Físico → Como implementar?
- Conceitual não usa SQL
- Lógico define tabelas e relacionamentos
- Físico utiliza SQL e tipos de dados

---

# Questões de Revisão

## 1. Qual é a primeira etapa da modelagem?

Resposta:

Modelo Conceitual.

---

## 2. Qual modelo define tabelas e relacionamentos?

Resposta:

Modelo Lógico.

---

## 3. Qual modelo utiliza SQL?

Resposta:

Modelo Físico.

---

## 4. O modelo conceitual depende do MySQL?

Resposta:

Não.

---

## 5. Qual é o fluxo correto da modelagem?

Resposta:

Conceitual → Lógico → Físico.
