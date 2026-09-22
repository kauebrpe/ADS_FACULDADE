# Banco de Dados I - Aulas

Este diretório reúne os conteúdos estudados durante a disciplina de Banco de Dados I.

O foco da disciplina foi desenvolver os fundamentos de Banco de Dados Relacionais utilizando MySQL, abordando modelagem básica, criação de estruturas e manipulação de dados através de SQL.

---

# Mapa da Disciplina

```text
Banco de Dados I
│
├── Fundamentos
│   ├── Banco de Dados
│   ├── SGBD
│   ├── MySQL
│   └── SQL
│
├── Modelo Relacional
│   ├── Tabelas
│   ├── Linhas
│   ├── Colunas
│   ├── Chave Primária
│   └── Chave Estrangeira
│
├── DDL
│   ├── CREATE
│   ├── ALTER
│   ├── DROP
│   └── Tipos de Dados
│
├── Constraints
│   ├── PRIMARY KEY
│   ├── FOREIGN KEY
│   ├── NOT NULL
│   ├── UNIQUE
│   ├── DEFAULT
│   └── AUTO_INCREMENT
│
└── DML
    ├── INSERT
    ├── UPDATE
    └── DELETE
```

---

# Conteúdo das Aulas

## 01 - Introdução a Banco de Dados e SGBD

Arquivo:

```text
01-Introducao-BD-e-SGBD.md
```

Assuntos:

- O que é Banco de Dados
- O que é SGBD
- Principais SGBDs
- Importância dos Bancos de Dados
- SQL e MySQL

---

## 02 - SQL Commands

Arquivo:

```text
02-SQL-Commands.md
```

Assuntos:

- DDL
- DML
- DQL

Principais comandos:

```sql
CREATE
ALTER
DROP

INSERT
UPDATE
DELETE

SELECT
```

---

## 03 - Modelo Relacional

Arquivo:

```text
03-Modelo-Relacional.md
```

Assuntos:

- Tabelas
- Linhas
- Colunas
- Relacionamentos
- Chave Primária
- Chave Estrangeira

---

## 04 - DDL

Arquivo:

```text
04-DDL.md
```

Assuntos:

```sql
CREATE DATABASE
CREATE TABLE
ALTER TABLE
DROP DATABASE
DROP TABLE
```

---

## 05 - Constraints

Arquivo:

```text
05-Constraints.md
```

Assuntos:

```sql
PRIMARY KEY
FOREIGN KEY
NOT NULL
UNIQUE
DEFAULT
AUTO_INCREMENT
```

---

## 06 - DML

Arquivo:

```text
06-DML.md
```

Assuntos:

```sql
INSERT
UPDATE
DELETE
```

---

# Principais Comandos Utilizados

## Criar Banco

```sql
CREATE DATABASE escola;
```

---

## Selecionar Banco

```sql
USE escola;
```

---

## Criar Tabela

```sql
CREATE TABLE alunos (
    id INT PRIMARY KEY,
    nome VARCHAR(100)
);
```

---

## Inserir Dados

```sql
INSERT INTO alunos
VALUES (1, 'João');
```

---

## Atualizar Dados

```sql
UPDATE alunos
SET nome = 'Maria'
WHERE id = 1;
```

---

## Excluir Dados

```sql
DELETE FROM alunos
WHERE id = 1;
```

---

## Consultar Dados

```sql
SELECT *
FROM alunos;
```

---

# Conceitos Importantes

## Banco de Dados

Conjunto organizado de informações.

---

## SGBD

Software utilizado para gerenciar os dados.

Exemplos:

- MySQL
- PostgreSQL
- Oracle
- SQL Server

---

## SQL

Linguagem utilizada para trabalhar com bancos de dados.

---

## Modelo Relacional

Modelo baseado em tabelas, utilizado pelo MySQL e pela maioria dos SGBDs atuais.

---

# Cuidados Importantes

Evitar:

```sql
UPDATE alunos
SET nome = 'Teste';
```

Sem WHERE.

---

Evitar:

```sql
DELETE FROM alunos;
```

Sem WHERE.

---

Sempre definir:

```sql
PRIMARY KEY
```

nas tabelas.

---

Sempre planejar os relacionamentos corretamente.

---

# Resumo para Revisão

## DDL

Responsável pela estrutura.

```sql
CREATE
ALTER
DROP
```

---

## DML

Responsável pela manipulação dos dados.

```sql
INSERT
UPDATE
DELETE
```

---

## DQL

Responsável pelas consultas.

```sql
SELECT
```

---

## Constraints

Garantem a integridade dos dados.

```sql
PRIMARY KEY
FOREIGN KEY
NOT NULL
UNIQUE
DEFAULT
AUTO_INCREMENT
```

---

# Evolução

Este conteúdo serviu como base para os tópicos mais avançados estudados posteriormente:

- Consultas avançadas (DQL)
- JOINs
- Modelagem
- Índices
- Views
- Triggers
- Procedures
- Administração de Banco de Dados
