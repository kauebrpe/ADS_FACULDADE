# SQL Commands

## O que é SQL?

SQL significa:

```text
Structured Query Language
```

É a linguagem utilizada para criar, consultar, alterar e remover informações em bancos de dados relacionais.

Praticamente tudo que fazemos dentro do MySQL utiliza SQL.

---

## Como o SQL é Organizado?

O SQL é dividido em grupos de comandos.

Cada grupo possui uma função específica.

Principais grupos:

```text
DDL
DML
DQL
```

---

# DDL

## Significado

```text
Data Definition Language
```

Responsável pela estrutura do banco de dados.

Utilizamos DDL para criar, alterar e remover objetos.

---

## Principais Comandos

```sql
CREATE
ALTER
DROP
```

---

## Exemplo

Criando um banco:

```sql
CREATE DATABASE escola;
```

---

Criando uma tabela:

```sql
CREATE TABLE alunos (
    id INT,
    nome VARCHAR(100)
);
```

---

## Quando Utilizar?

- Criar bancos
- Criar tabelas
- Modificar tabelas
- Remover tabelas

---

# DML

## Significado

```text
Data Manipulation Language
```

Responsável pela manipulação dos dados.

Utilizamos DML para inserir, alterar e remover registros.

---

## Principais Comandos

```sql
INSERT
UPDATE
DELETE
```

---

## INSERT

Insere registros.

```sql
INSERT INTO alunos
VALUES (1, 'João');
```

---

## UPDATE

Atualiza registros.

```sql
UPDATE alunos
SET nome = 'Maria'
WHERE id = 1;
```

---

## DELETE

Remove registros.

```sql
DELETE FROM alunos
WHERE id = 1;
```

---

## Quando Utilizar?

- Inserir informações
- Corrigir informações
- Remover informações

---

# DQL

## Significado

```text
Data Query Language
```

Responsável pelas consultas.

---

## Principal Comando

```sql
SELECT
```

---

## Exemplo

Consultar todos os registros:

```sql
SELECT *
FROM alunos;
```

---

Consultar apenas uma coluna:

```sql
SELECT nome
FROM alunos;
```

---

# Resumo dos Grupos

## DDL

Estrutura.

```sql
CREATE
ALTER
DROP
```

---

## DML

Manipulação de dados.

```sql
INSERT
UPDATE
DELETE
```

---

## DQL

Consultas.

```sql
SELECT
```

---

# Exemplo Completo

Criar banco:

```sql
CREATE DATABASE escola;
```

Selecionar banco:

```sql
USE escola;
```

Criar tabela:

```sql
CREATE TABLE alunos (
    id INT,
    nome VARCHAR(100)
);
```

Inserir registro:

```sql
INSERT INTO alunos
VALUES (1, 'João');
```

Consultar:

```sql
SELECT *
FROM alunos;
```

Atualizar:

```sql
UPDATE alunos
SET nome = 'João Silva'
WHERE id = 1;
```

Excluir:

```sql
DELETE FROM alunos
WHERE id = 1;
```

---

# Fluxo Normal de Trabalho

Normalmente seguimos esta sequência:

```text
CREATE DATABASE
↓
CREATE TABLE
↓
INSERT
↓
SELECT
↓
UPDATE
↓
DELETE
```

---

# Erros Comuns

## Erro 1

Confundir SQL com MySQL.

Correto:

```text
SQL = Linguagem

MySQL = SGBD
```

---

## Erro 2

Utilizar UPDATE sem WHERE.

Exemplo:

```sql
UPDATE alunos
SET nome = 'Teste';
```

Resultado:

Todos os registros serão alterados.

---

## Erro 3

Utilizar DELETE sem WHERE.

Exemplo:

```sql
DELETE FROM alunos;
```

Resultado:

Todos os registros serão removidos.

---

# Resumo para Revisão

## DDL

```text
Estrutura
```

Comandos:

```sql
CREATE
ALTER
DROP
```

---

## DML

```text
Manipulação
```

Comandos:

```sql
INSERT
UPDATE
DELETE
```

---

## DQL

```text
Consulta
```

Comando:

```sql
SELECT
```

---

# Revisão Rápida

## O que significa DDL?

Data Definition Language.

---

## O que significa DML?

Data Manipulation Language.

---

## O que significa DQL?

Data Query Language.

---

## Qual comando consulta dados?

```sql
SELECT
```

---

## Qual comando insere dados?

```sql
INSERT
```

---

## Qual comando altera dados?

```sql
UPDATE
```

---

## Qual comando remove dados?

```sql
DELETE
```

---

## Qual comando cria tabelas?

```sql
CREATE TABLE
```
