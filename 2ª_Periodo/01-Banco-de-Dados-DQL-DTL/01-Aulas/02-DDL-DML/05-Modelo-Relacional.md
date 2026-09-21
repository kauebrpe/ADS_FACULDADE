# Modelo Relacional

## Objetivo

Compreender o funcionamento do modelo relacional, seus componentes principais e como os dados são organizados em tabelas.

O modelo relacional é a base do MySQL e da maioria dos bancos de dados utilizados atualmente.

---

# O que é o Modelo Relacional?

O modelo relacional é uma forma de organizar os dados em tabelas.

Foi proposto por Edgar F. Codd em 1970 e é utilizado por:

- MySQL
- PostgreSQL
- Oracle
- SQL Server

---

# Estrutura Básica

No modelo relacional os dados são armazenados em tabelas.

Exemplo:

```text
ALUNOS
```

| id | nome | idade |
|----|------|------|
| 1 | João | 20 |
| 2 | Maria | 19 |
| 3 | Pedro | 21 |

---

# Componentes do Modelo Relacional

## Tabela

Uma tabela representa uma entidade do sistema.

Exemplos:

```text
Alunos
Clientes
Produtos
Funcionários
```

---

## Linha (Tupla)

Cada linha representa um registro.

Exemplo:

```text
1 | João | 20
```

Essa linha representa um aluno.

---

## Coluna (Atributo)

Cada coluna representa uma característica.

Exemplo:

```text
id
nome
idade
```

---

# Exemplo Completo

Tabela:

```text
CLIENTES
```

| id | nome | cidade |
|----|------|--------|
| 1 | João | Recife |
| 2 | Maria | Caruaru |

---

# Chave Primária (PRIMARY KEY)

É o atributo responsável por identificar cada registro de forma única.

Não pode repetir.

Não pode ser NULL.

---

## Exemplo

```sql
CREATE TABLE alunos (
    id INT PRIMARY KEY,
    nome VARCHAR(100)
);
```

---

Tabela:

| id | nome |
|----|------|
| 1 | João |
| 2 | Maria |

Correto ✅

---

Tabela:

| id | nome |
|----|------|
| 1 | João |
| 1 | Maria |

Errado ❌

O valor da chave primária não pode se repetir.

---

# Chave Estrangeira (FOREIGN KEY)

É utilizada para criar relacionamentos entre tabelas.

---

# Exemplo

Tabela:

```text
DEPARTAMENTOS
```

| id | nome |
|----|------|
| 1 | TI |
| 2 | RH |

---

Tabela:

```text
FUNCIONARIOS
```

| id | nome | departamento_id |
|----|------|--------------|
| 1 | Ana | 1 |
| 2 | Pedro | 2 |

---

Script SQL

```sql
CREATE TABLE departamentos (
    id INT PRIMARY KEY,
    nome VARCHAR(50)
);

CREATE TABLE funcionarios (
    id INT PRIMARY KEY,
    nome VARCHAR(100),
    departamento_id INT,
    FOREIGN KEY (departamento_id)
        REFERENCES departamentos(id)
);
```

---

# Relacionamentos

Os relacionamentos conectam tabelas.

---

## Relacionamento 1:1

Um registro está ligado a apenas outro registro.

Exemplo:

```text
Pessoa → Passaporte
```

---

## Relacionamento 1:N

Um registro pode estar ligado a vários outros.

Exemplo:

```text
Departamento → Funcionários
```

Um departamento possui vários funcionários.

---

## Relacionamento N:N

Muitos para muitos.

Exemplo:

```text
Aluno → Disciplina
```

Um aluno cursa várias disciplinas.

Uma disciplina possui vários alunos.

---

# Integridade Referencial

A integridade referencial garante que os relacionamentos sejam válidos.

Exemplo:

Se existir:

```text
departamento_id = 5
```

deve existir:

```text
departamentos.id = 5
```

---

# Vantagens do Modelo Relacional

✅ Organização dos dados

✅ Facilidade de consulta

✅ Integridade

✅ Segurança

✅ Padronização

✅ Utilização do SQL

---

# Desvantagens

❌ Pode exigir planejamento

❌ Modelagem ruim gera problemas de desempenho

❌ Relacionamentos complexos aumentam a dificuldade de manutenção

---

# Exemplo Prático de Banco Escolar

## Tabela Alunos

| id | nome |
|----|------|
| 1 | João |
| 2 | Maria |

---

## Tabela Disciplinas

| id | nome |
|----|------|
| 1 | Banco de Dados |
| 2 | Java |

---

## Tabela Matrículas

| aluno_id | disciplina_id |
|----------|--------------|
| 1 | 1 |
| 1 | 2 |
| 2 | 1 |

---

# Erros Comuns

## Erro 1

Confundir tabela com banco de dados.

Um banco pode possuir dezenas de tabelas.

---

## Erro 2

Não utilizar chave primária.

Toda tabela deve possuir uma identificação.

---

## Erro 3

Criar relacionamentos sem chave estrangeira.

Isso dificulta a integridade dos dados.

---

# Resumo

## Tabela

Conjunto de registros.

---

## Linha

Um registro.

---

## Coluna

Uma característica do registro.

---

## Chave Primária

Identifica de forma única cada registro.

---

## Chave Estrangeira

Cria relacionamentos entre tabelas.

---

# Cola para Prova

```text
Tabela = entidade

Linha = registro

Coluna = atributo

PRIMARY KEY = identifica

FOREIGN KEY = relaciona

PK não repete

FK referencia outra tabela
```

---

# Questões de Revisão

## 1

O que é uma tabela?

Resposta:

Uma estrutura que armazena registros relacionados.

---

## 2

O que é uma chave primária?

Resposta:

Um atributo que identifica unicamente cada registro.

---

## 3

Uma chave primária pode repetir?

Resposta:

Não.

---

## 4

Para que serve uma chave estrangeira?

Resposta:

Criar relacionamentos entre tabelas.

---

## 5

Qual modelo de dados é utilizado pelo MySQL?

Resposta:

Modelo Relacional.
