# DDL e DML

## Objetivo do Bloco

Este bloco aborda a criação da estrutura do banco de dados (DDL) e a manipulação dos dados armazenados (DML).

Ao finalizar este módulo você será capaz de:

- Criar bancos de dados
- Criar tabelas
- Alterar tabelas
- Remover tabelas
- Utilizar constraints
- Inserir registros
- Atualizar registros
- Excluir registros

---

# Conteúdo do Bloco

## 05 - Modelo Relacional

Arquivo:

```text
05-Modelo-Relacional.md
```

Tópicos:

- Tabelas
- Linhas
- Colunas
- Chave Primária
- Chave Estrangeira
- Relacionamentos

---

## 06 - DDL

Arquivo:

```text
06-DDL-Create-Alter-Drop.md
```

Tópicos:

- CREATE DATABASE
- CREATE TABLE
- ALTER TABLE
- DROP DATABASE
- DROP TABLE
- TRUNCATE
- Tipos de Dados

---

## 07 - Constraints

Arquivo:

```text
07-Constraints.md
```

Tópicos:

- PRIMARY KEY
- FOREIGN KEY
- NOT NULL
- UNIQUE
- DEFAULT
- AUTO_INCREMENT

---

## 08 - DML

Arquivo:

```text
08-DML-Insert-Update-Delete.md
```

Tópicos:

- INSERT
- UPDATE
- DELETE

---

# Resumo Rápido

## DDL

Responsável pela estrutura.

Comandos:

```sql
CREATE
ALTER
DROP
TRUNCATE
```

---

## DML

Responsável pelos dados.

Comandos:

```sql
INSERT
UPDATE
DELETE
```

---

# Fluxo de Trabalho

Normalmente seguimos esta ordem:

```text
1. CREATE DATABASE

2. CREATE TABLE

3. Definir Constraints

4. INSERT

5. UPDATE

6. DELETE

7. SELECT
```

---

# Comandos Mais Importantes para Prova

## CREATE TABLE

```sql
CREATE TABLE alunos (
    id INT PRIMARY KEY,
    nome VARCHAR(100)
);
```

---

## INSERT

```sql
INSERT INTO alunos
VALUES (1, 'João');
```

---

## UPDATE

```sql
UPDATE alunos
SET nome = 'Maria'
WHERE id = 1;
```

---

## DELETE

```sql
DELETE FROM alunos
WHERE id = 1;
```

---

# Atenção

Nunca execute:

```sql
UPDATE tabela
SET coluna = valor;
```

sem WHERE.

---

Nunca execute:

```sql
DELETE FROM tabela;
```

sem ter certeza do que está fazendo.

---

# Cola para Prova

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
```

---

# Status do Bloco

| Tópico | Status |
|----------|----------|
| 05 Modelo Relacional | ✅ |
| 06 DDL | ✅ |
| 07 Constraints | ✅ |
| 08 DML | ✅ |

---

# Próximo Bloco

```text
03-DQL
```

Onde serão estudados:

- SELECT
- WHERE
- LIKE
- BETWEEN
- IN
- GROUP BY
- HAVING
- Subconsultas
