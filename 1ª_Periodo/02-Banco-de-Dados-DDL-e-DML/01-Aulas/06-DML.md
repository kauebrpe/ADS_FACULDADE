# DML (Data Manipulation Language)

## O que é DML?

DML significa:

```text
Data Manipulation Language
```

É o conjunto de comandos SQL utilizado para trabalhar diretamente com os dados armazenados nas tabelas.

Enquanto a DDL cria estruturas, a DML manipula os registros.

---

## Principais Comandos

A DML é composta principalmente por:

```sql
INSERT
UPDATE
DELETE
```

---

# INSERT

O comando INSERT é utilizado para inserir novos registros em uma tabela.

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
CREATE TABLE alunos (
    id INT,
    nome VARCHAR(100)
);
```

Inserindo registros:

```sql
INSERT INTO alunos
VALUES (1, 'João');
```

---

## Inserindo Outro Registro

```sql
INSERT INTO alunos
VALUES (2, 'Maria');
```

---

## Resultado

| id | nome |
|----|------|
| 1 | João |
| 2 | Maria |

---

## Inserindo Informando as Colunas

Também é possível especificar as colunas.

```sql
INSERT INTO alunos (id, nome)
VALUES (3, 'Pedro');
```

Essa forma é considerada mais segura.

---

# UPDATE

O comando UPDATE é utilizado para alterar registros existentes.

---

## Sintaxe

```sql
UPDATE tabela
SET coluna = valor
WHERE condicao;
```

---

## Exemplo

Antes:

| id | nome |
|----|------|
| 1 | João |

---

Comando:

```sql
UPDATE alunos
SET nome = 'João Silva'
WHERE id = 1;
```

---

## Resultado

| id | nome |
|----|-------------|
| 1 | João Silva |

---

## Atualizando Mais de Uma Coluna

```sql
UPDATE alunos
SET
    nome = 'Maria Souza',
    idade = 20
WHERE id = 2;
```

---

# DELETE

O comando DELETE é utilizado para remover registros.

---

## Sintaxe

```sql
DELETE FROM tabela
WHERE condicao;
```

---

## Exemplo

Tabela:

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

# Fluxo Mais Comum

Normalmente trabalhamos nesta sequência:

Criar tabela:

```sql
CREATE TABLE alunos (
    id INT,
    nome VARCHAR(100)
);
```

---

Inserir registros:

```sql
INSERT INTO alunos
VALUES (1, 'João');
```

---

Consultar registros:

```sql
SELECT *
FROM alunos;
```

---

Atualizar registros:

```sql
UPDATE alunos
SET nome = 'João Silva'
WHERE id = 1;
```

---

Excluir registros:

```sql
DELETE FROM alunos
WHERE id = 1;
```

---

# Exemplo Completo

Criando tabela:

```sql
CREATE TABLE produtos (
    id INT,
    nome VARCHAR(100)
);
```

Inserindo:

```sql
INSERT INTO produtos
VALUES (1, 'Notebook');
```

Consultando:

```sql
SELECT *
FROM produtos;
```

Atualizando:

```sql
UPDATE produtos
SET nome = 'Notebook Gamer'
WHERE id = 1;
```

Excluindo:

```sql
DELETE FROM produtos
WHERE id = 1;
```

---

# Cuidados Importantes

## UPDATE sem WHERE

Errado:

```sql
UPDATE alunos
SET nome = 'Teste';
```

---

Resultado:

Todos os registros serão alterados.

---

## DELETE sem WHERE

Errado:

```sql
DELETE FROM alunos;
```

---

Resultado:

Todos os registros serão removidos.

---

## Boa Prática

Antes de executar um UPDATE ou DELETE:

```sql
SELECT *
FROM alunos
WHERE id = 1;
```

Verifique se realmente está alterando o registro correto.

---

# Quando Utilizar Cada Comando?

## INSERT

Quando deseja cadastrar informações.

Exemplo:

- Novo aluno
- Novo cliente
- Novo produto

---

## UPDATE

Quando deseja corrigir ou atualizar informações.

Exemplo:

- Alteração de nome
- Mudança de endereço
- Atualização de preço

---

## DELETE

Quando deseja remover informações.

Exemplo:

- Cliente removido
- Produto descontinuado
- Cadastro incorreto

---

# Resumo

## INSERT

Insere registros.

---

## UPDATE

Altera registros.

---

## DELETE

Remove registros.

---

# Tabela Resumo

| Comando | Função |
|----------|---------|
| INSERT | Inserir registros |
| UPDATE | Atualizar registros |
| DELETE | Remover registros |

---

# Erros Mais Comuns

### UPDATE sem WHERE

Altera todos os registros.

---

### DELETE sem WHERE

Remove todos os registros.

---

### Inserir dados fora da ordem

Exemplo:

```sql
INSERT INTO alunos
VALUES ('João', 1);
```

Pode gerar erro dependendo da estrutura da tabela.

---

# Revisão Rápida

## Qual comando insere registros?

```sql
INSERT
```

---

## Qual comando altera registros?

```sql
UPDATE
```

---

## Qual comando remove registros?

```sql
DELETE
```

---

## Qual o maior cuidado ao utilizar UPDATE?

Utilizar WHERE corretamente.

---

## Qual o maior cuidado ao utilizar DELETE?

Utilizar WHERE corretamente.

---

## Qual a sequência mais comum?

```text
INSERT
↓
SELECT
↓
UPDATE
↓
DELETE
```
