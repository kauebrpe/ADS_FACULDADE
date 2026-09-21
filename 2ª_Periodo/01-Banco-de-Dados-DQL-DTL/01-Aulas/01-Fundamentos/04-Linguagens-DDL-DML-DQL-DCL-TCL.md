# Linguagens do SGBD: DDL, DML, DQL, DCL e TCL

## Objetivo

Compreender as principais sublinguagens do SQL e identificar a função de cada grupo de comandos dentro de um Sistema Gerenciador de Banco de Dados.

---

# O que são Linguagens do SGBD?

O SQL é dividido em grupos de comandos.

Cada grupo tem uma responsabilidade específica.

Esses grupos são chamados de sublinguagens SQL.

---

# Visão Geral

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

Utilizada para criar, alterar e remover objetos.

---

## Principais Comandos

```sql
CREATE
ALTER
DROP
TRUNCATE
```

---

## CREATE

Cria objetos.

### Exemplo

```sql
CREATE DATABASE escola;
```

```sql
CREATE TABLE alunos (
    id INT PRIMARY KEY,
    nome VARCHAR(100)
);
```

---

## ALTER

Altera objetos existentes.

### Exemplo

```sql
ALTER TABLE alunos
ADD email VARCHAR(100);
```

---

## DROP

Remove objetos.

### Exemplo

```sql
DROP TABLE alunos;
```

---

## TRUNCATE

Remove todos os registros de uma tabela.

### Exemplo

```sql
TRUNCATE TABLE alunos;
```

---

# DML (Data Manipulation Language)

Responsável pela manipulação dos dados armazenados.

---

## Principais Comandos

```sql
INSERT
UPDATE
DELETE
```

---

## INSERT

Insere novos registros.

### Exemplo

```sql
INSERT INTO alunos
VALUES (1, 'João');
```

---

## UPDATE

Atualiza registros existentes.

### Exemplo

```sql
UPDATE alunos
SET nome = 'Maria'
WHERE id = 1;
```

---

## DELETE

Exclui registros.

### Exemplo

```sql
DELETE FROM alunos
WHERE id = 1;
```

---

# DQL (Data Query Language)

Responsável pelas consultas.

---

## Principal Comando

```sql
SELECT
```

---

## Exemplo

```sql
SELECT *
FROM alunos;
```

---

## Exemplo com WHERE

```sql
SELECT *
FROM alunos
WHERE id = 1;
```

---

# DCL (Data Control Language)

Responsável pelo controle de usuários e permissões.

---

## Principais Comandos

```sql
GRANT
REVOKE
```

---

## GRANT

Concede permissões.

### Exemplo

```sql
GRANT SELECT
ON escola.*
TO usuario;
```

---

## REVOKE

Remove permissões.

### Exemplo

```sql
REVOKE SELECT
ON escola.*
FROM usuario;
```

---

# TCL (Transaction Control Language)

Responsável pelo controle de transações.

---

## Principais Comandos

```sql
START TRANSACTION
COMMIT
ROLLBACK
```

---

## START TRANSACTION

Inicia uma transação.

### Exemplo

```sql
START TRANSACTION;
```

---

## COMMIT

Confirma as alterações.

### Exemplo

```sql
COMMIT;
```

---

## ROLLBACK

Desfaz as alterações.

### Exemplo

```sql
ROLLBACK;
```

---

# Exemplo Completo de Transação

```sql
START TRANSACTION;

UPDATE contas
SET saldo = saldo - 100
WHERE id = 1;

UPDATE contas
SET saldo = saldo + 100
WHERE id = 2;

COMMIT;
```

---

# Resumo das Linguagens

| Linguagem | Função |
|-----------|---------|
| DDL | Estrutura |
| DML | Manipulação de dados |
| DQL | Consulta |
| DCL | Permissões |
| TCL | Transações |

---

# Exemplo de Classificação

## CREATE TABLE

Pertence à:

```text
DDL
```

---

## INSERT

Pertence à:

```text
DML
```

---

## SELECT

Pertence à:

```text
DQL
```

---

## GRANT

Pertence à:

```text
DCL
```

---

## COMMIT

Pertence à:

```text
TCL
```

---

# Erros Comuns

## Erro 1

Achar que SELECT faz parte do DML.

Correto:

```text
SELECT → DQL
```

---

## Erro 2

Confundir COMMIT com INSERT.

```text
INSERT → DML

COMMIT → TCL
```

---

## Erro 3

Achar que GRANT altera dados.

Correto:

```text
GRANT controla permissões.
```

---

# Mapa Mental

```text
DDL
│
├── CREATE
├── ALTER
├── DROP
└── TRUNCATE

DML
│
├── INSERT
├── UPDATE
└── DELETE

DQL
│
└── SELECT

DCL
│
├── GRANT
└── REVOKE

TCL
│
├── START TRANSACTION
├── COMMIT
└── ROLLBACK
```

---

# Cola para Prova

```text
DDL → Estrutura

DML → Manipulação

DQL → Consulta

DCL → Permissões

TCL → Transações
```

---

# Questões de Revisão

## 1

Qual linguagem é responsável pela estrutura do banco?

Resposta:

DDL.

---

## 2

Qual comando é utilizado para consultar dados?

Resposta:

SELECT.

---

## 3

INSERT pertence a qual linguagem?

Resposta:

DML.

---

## 4

Qual comando desfaz uma transação?

Resposta:

ROLLBACK.

---

## 5

GRANT pertence a qual linguagem?

Resposta:

DCL.
