# SQL Commands

Antes de aprender comandos SQL individuais, é importante entender que o SQL é dividido em grupos de comandos.

Esses grupos organizam as operações realizadas dentro do banco de dados.

---

# Visão Geral

SQL é dividido em 5 grupos:

```text
SQL
├── DDL
├── DML
├── DQL
├── DCL
└── TCL
```

---

# DDL (Data Definition Language)

Responsável pela definição da estrutura do banco de dados.

Em outras palavras: cria, altera e remove objetos.

## Principais comandos

```sql
CREATE
ALTER
DROP
TRUNCATE
```

## Exemplos

### CREATE DATABASE

```sql
CREATE DATABASE escola;
```

### CREATE TABLE

```sql
CREATE TABLE alunos(
    id INT PRIMARY KEY,
    nome VARCHAR(100)
);
```

### ALTER TABLE

```sql
ALTER TABLE alunos
ADD email VARCHAR(100);
```

### DROP TABLE

```sql
DROP TABLE alunos;
```

## Cola para prova

```text
CREATE = criar
ALTER = alterar
DROP = remover
TRUNCATE = apagar todos os registros
```

---

# DML (Data Manipulation Language)

Responsável pela manipulação dos dados armazenados.

## Principais comandos

```sql
INSERT
UPDATE
DELETE
```

## INSERT

Insere registros.

```sql
INSERT INTO alunos(nome)
VALUES ('João');
```

## UPDATE

Atualiza registros.

```sql
UPDATE alunos
SET nome = 'Maria'
WHERE id = 1;
```

## DELETE

Remove registros.

```sql
DELETE FROM alunos
WHERE id = 1;
```

## Cola para prova

```text
INSERT = inserir
UPDATE = atualizar
DELETE = excluir
```

⚠️ Nunca use UPDATE ou DELETE sem WHERE.

---

# DQL (Data Query Language)

Responsável pelas consultas.

## Principal comando

```sql
SELECT
```

## Exemplos

```sql
SELECT * FROM alunos;
```

```sql
SELECT nome
FROM alunos;
```

```sql
SELECT *
FROM alunos
WHERE id = 1;
```

## Cola para prova

```text
SELECT = consultar dados
```

---

# DCL (Data Control Language)

Controla acessos e permissões.

## Principais comandos

```sql
GRANT
REVOKE
```

## GRANT

Concede permissões.

```sql
GRANT SELECT
ON escola.*
TO 'usuario';
```

## REVOKE

Remove permissões.

```sql
REVOKE SELECT
ON escola.*
FROM 'usuario';
```

## Cola para prova

```text
GRANT = conceder permissão
REVOKE = remover permissão
```

---

# TCL (Transaction Control Language)

Controla transações.

## Principais comandos

```sql
START TRANSACTION
COMMIT
ROLLBACK
```

## Exemplo

```sql
START TRANSACTION;

UPDATE contas
SET saldo = saldo - 500
WHERE id = 1;

COMMIT;
```

## Usando ROLLBACK

```sql
START TRANSACTION;

UPDATE contas
SET saldo = saldo - 500
WHERE id = 1;

ROLLBACK;
```

## Cola para prova

```text
START TRANSACTION = iniciar transação

COMMIT = confirmar alterações

ROLLBACK = desfazer alterações
```

---

# Resumo Geral

| Grupo | Função | Comandos |
|---------|---------|---------|
| DDL | Estrutura | CREATE, ALTER, DROP |
| DML | Manipulação | INSERT, UPDATE, DELETE |
| DQL | Consulta | SELECT |
| DCL | Permissões | GRANT, REVOKE |
| TCL | Transações | COMMIT, ROLLBACK |

---

# Mapa Mental Rápido

```text
DDL → Estrutura

DML → Manipulação

DQL → Consulta

DCL → Permissões

TCL → Transações
```

---

# O que mais cai em prova?

✅ Diferença entre DDL, DML e DQL

✅ UPDATE sem WHERE

✅ DELETE sem WHERE

✅ COMMIT x ROLLBACK

✅ GRANT x REVOKE

✅ Função do SELECT

✅ Função do CREATE TABLE
