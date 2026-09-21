# DML: INSERT, UPDATE e DELETE

## Objetivo

Aprender a inserir, atualizar e remover dados utilizando os principais comandos da DML (Data Manipulation Language).

---

# O que é DML?

DML significa:

```text
Data Manipulation Language
```

É a linguagem responsável por manipular os dados armazenados nas tabelas.

---

# Principais Comandos

```text
INSERT
UPDATE
DELETE
```

---

# INSERT

Utilizado para inserir registros em uma tabela.

---

## Sintaxe

```sql
INSERT INTO tabela
VALUES (...);
```

---

## Exemplo

Tabela:

```text
ALUNOS
```

```sql
INSERT INTO alunos
VALUES (1, 'João');
```

---

## Resultado

| id | nome |
|----|------|
| 1 | João |

---

# INSERT Especificando Colunas

```sql
INSERT INTO alunos (id, nome)
VALUES (2, 'Maria');
```

---

# INSERT com Múltiplos Registros

```sql
INSERT INTO alunos (id, nome)
VALUES
(3, 'Pedro'),
(4, 'Ana'),
(5, 'Lucas');
```

---

# UPDATE

Atualiza registros existentes.

---

## Sintaxe

```sql
UPDATE tabela
SET coluna = valor
WHERE condição;
```

---

## Exemplo

Antes:

| id | nome |
|----|------|
| 1 | João |

---

Atualizando:

```sql
UPDATE alunos
SET nome = 'João Silva'
WHERE id = 1;
```

---

Depois:

| id | nome |
|----|-------------|
| 1 | João Silva |

---

# Atualizando Várias Colunas

```sql
UPDATE funcionarios
SET
salario = 3000,
departamento = 'TI'
WHERE id = 1;
```

---

# Atualizando Vários Registros

```sql
UPDATE produtos
SET estoque = 0;
```

⚠️ Isso altera TODAS as linhas da tabela.

---

# DELETE

Remove registros.

---

## Sintaxe

```sql
DELETE FROM tabela
WHERE condição;
```

---

## Exemplo

Antes:

| id | nome |
|----|------|
| 1 | João |
| 2 | Maria |

---

Executando:

```sql
DELETE FROM alunos
WHERE id = 1;
```

---

Resultado:

| id | nome |
|----|------|
| 2 | Maria |

---

# DELETE em Vários Registros

```sql
DELETE FROM alunos
WHERE idade < 18;
```

---

# DELETE Sem WHERE

```sql
DELETE FROM alunos;
```

⚠️ Remove TODOS os registros.

A estrutura da tabela permanece.

---

# Diferença Entre DELETE e TRUNCATE

## DELETE

```sql
DELETE FROM alunos;
```

Remove registros.

Permite WHERE.

---

## TRUNCATE

```sql
TRUNCATE TABLE alunos;
```

Remove todos os registros.

Não permite WHERE.

É mais rápido.

---

# Ordem Recomendada Antes do UPDATE

Antes:

```sql
SELECT *
FROM alunos
WHERE id = 1;
```

Depois:

```sql
UPDATE alunos
SET nome = 'João Silva'
WHERE id = 1;
```

---

# Ordem Recomendada Antes do DELETE

Antes:

```sql
SELECT *
FROM alunos
WHERE id = 1;
```

Depois:

```sql
DELETE FROM alunos
WHERE id = 1;
```

---

# Boas Práticas

✅ Sempre usar WHERE no UPDATE

✅ Sempre usar WHERE no DELETE

✅ Conferir registros com SELECT antes de alterar

✅ Utilizar transações quando possível

✅ Fazer backup antes de operações críticas

---

# Exemplo Completo

## Criar Tabela

```sql
CREATE TABLE alunos (
    id INT PRIMARY KEY,
    nome VARCHAR(100)
);
```

---

## Inserir

```sql
INSERT INTO alunos
VALUES (1, 'João');
```

---

## Consultar

```sql
SELECT *
FROM alunos;
```

---

## Atualizar

```sql
UPDATE alunos
SET nome = 'João Silva'
WHERE id = 1;
```

---

## Excluir

```sql
DELETE FROM alunos
WHERE id = 1;
```

---

# Erros Comuns

## Erro 1

UPDATE sem WHERE.

```sql
UPDATE alunos
SET nome = 'Teste';
```

Resultado:

Todos os registros são alterados.

---

## Erro 2

DELETE sem WHERE.

```sql
DELETE FROM alunos;
```

Resultado:

Todos os registros são removidos.

---

## Erro 3

Inserir valores em ordem incorreta.

```sql
INSERT INTO alunos
VALUES ('João', 1);
```

---

## Erro 4

Não validar os dados antes da alteração.

---

# Resumo

## INSERT

Insere registros.

---

## UPDATE

Atualiza registros.

---

## DELETE

Remove registros.

---

# Cola para Prova

```text
INSERT
→ Inserir

UPDATE
→ Atualizar

DELETE
→ Excluir

UPDATE sem WHERE
→ Atualiza tudo

DELETE sem WHERE
→ Exclui tudo

TRUNCATE
→ Limpa tabela
```

---

# Mapa Mental

```text
DML
│
├── INSERT
│   └── Inserir
│
├── UPDATE
│   └── Atualizar
│
└── DELETE
    └── Excluir
```

---

# Questões de Revisão

## 1

Qual comando insere registros?

Resposta:

```sql
INSERT
```

---

## 2

Qual comando atualiza registros?

Resposta:

```sql
UPDATE
```

---

## 3

Qual comando remove registros?

Resposta:

```sql
DELETE
```

---

## 4

Qual o maior risco de um UPDATE sem WHERE?

Resposta:

Alterar todos os registros da tabela.

---

## 5

Qual o maior risco de um DELETE sem WHERE?

Resposta:

Remover todos os registros da tabela.
