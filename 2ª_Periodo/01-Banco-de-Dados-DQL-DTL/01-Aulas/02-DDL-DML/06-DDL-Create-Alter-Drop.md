# DDL: CREATE DATABASE, CREATE TABLE, ALTER TABLE, DROP e Tipos de Dados

## Objetivo

Aprender a criar, alterar e remover bancos de dados e tabelas utilizando comandos DDL (Data Definition Language).

---

# O que é DDL?

DDL significa:

```text
Data Definition Language
```

É a linguagem utilizada para criar e alterar estruturas do banco de dados.

---

# Principais Comandos DDL

```text
CREATE
ALTER
DROP
TRUNCATE
```

---

# CREATE DATABASE

Cria um novo banco de dados.

## Sintaxe

```sql
CREATE DATABASE escola;
```

---

# Selecionando um Banco

Após criar o banco:

```sql
USE escola;
```

---

# CREATE TABLE

Cria uma tabela.

## Exemplo

```sql
CREATE TABLE alunos (
    id INT PRIMARY KEY,
    nome VARCHAR(100)
);
```

---

# Estrutura da Tabela

```text
Tabela: alunos

Colunas:
id
nome
```

---

# ALTER TABLE

Altera uma tabela existente.

---

## Adicionar Coluna

```sql
ALTER TABLE alunos
ADD email VARCHAR(100);
```

---

## Remover Coluna

```sql
ALTER TABLE alunos
DROP COLUMN email;
```

---

## Alterar Nome da Coluna

```sql
ALTER TABLE alunos
RENAME COLUMN nome TO nome_completo;
```

---

# DROP

Remove objetos permanentemente.

---

## Remover Tabela

```sql
DROP TABLE alunos;
```

---

## Remover Banco

```sql
DROP DATABASE escola;
```

⚠️ Muito cuidado.

DROP remove tudo permanentemente.

---

# TRUNCATE

Remove todos os registros da tabela.

A estrutura permanece.

```sql
TRUNCATE TABLE alunos;
```

---

# Principais Tipos de Dados

## Numéricos

### INT

Números inteiros.

```sql
idade INT
```

Exemplos:

```text
10
20
35
```

---

### DECIMAL

Valores monetários.

```sql
salario DECIMAL(10,2)
```

Exemplos:

```text
1500.50
999.99
```

---

# Texto

## CHAR

Tamanho fixo.

```sql
estado CHAR(2)
```

Exemplo:

```text
PE
SP
RJ
```

---

## VARCHAR

Tamanho variável.

```sql
nome VARCHAR(100)
```

---

## TEXT

Textos longos.

```sql
descricao TEXT
```

---

# Datas

## DATE

Somente data.

```sql
data_nascimento DATE
```

Exemplo:

```text
2026-09-21
```

---

## DATETIME

Data e hora.

```sql
cadastro DATETIME
```

---

## TIMESTAMP

Data e hora gerenciadas pelo sistema.

```sql
criado_em TIMESTAMP
```

---

# Booleano

```sql
ativo BOOLEAN
```

Valores:

```text
TRUE
FALSE
```

No MySQL é armazenado como:

```text
1 = TRUE

0 = FALSE
```

---

# Exemplo Completo

```sql
CREATE TABLE funcionarios (
    id INT PRIMARY KEY,
    nome VARCHAR(100),
    salario DECIMAL(10,2),
    data_admissao DATE
);
```

---

# Boas Práticas

✅ Utilizar nomes claros

✅ Criar chave primária

✅ Escolher tipos corretos

✅ Documentar estruturas

✅ Evitar nomes genéricos

---

# Erros Comuns

## Erro 1

Esquecer PRIMARY KEY.

---

## Erro 2

Usar VARCHAR para tudo.

---

## Erro 3

Executar DROP sem necessidade.

---

## Erro 4

Escolher tamanho inadequado das colunas.

---

# Resumo

## CREATE

Cria objetos.

---

## ALTER

Altera objetos.

---

## DROP

Remove objetos.

---

## TRUNCATE

Remove todos os registros.

---

## INT

Números inteiros.

---

## VARCHAR

Texto variável.

---

## DATE

Data.

---

## DECIMAL

Valores monetários.

---

# Cola para Prova

```text
CREATE = Criar

ALTER = Alterar

DROP = Remover

TRUNCATE = Limpar dados

INT = Inteiro

VARCHAR = Texto

DATE = Data

DECIMAL = Dinheiro
```

---

# Questões de Revisão

## 1

Qual comando cria um banco?

Resposta:

```sql
CREATE DATABASE
```

---

## 2

Qual comando altera uma tabela?

Resposta:

```sql
ALTER TABLE
```

---

## 3

Qual comando remove uma tabela?

Resposta:

```sql
DROP TABLE
```

---

## 4

Qual tipo é recomendado para armazenar dinheiro?

Resposta:

```sql
DECIMAL
```

---

## 5

Qual a diferença entre DROP e TRUNCATE?

Resposta:

DROP remove a estrutura.

TRUNCATE remove apenas os dados.
