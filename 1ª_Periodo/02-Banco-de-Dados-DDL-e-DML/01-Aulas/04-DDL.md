# DDL (Data Definition Language)

## O que é DDL?

DDL significa:

```text
Data Definition Language
```

É o conjunto de comandos SQL utilizado para criar, alterar e remover estruturas dentro do banco de dados.

Com DDL podemos trabalhar com:

- Bancos de Dados
- Tabelas
- Colunas
- Estruturas

---

## Principais Comandos

Os comandos mais importantes da DDL são:

```sql
CREATE
ALTER
DROP
```

---

# CREATE DATABASE

Utilizado para criar um banco de dados.

## Sintaxe

```sql
CREATE DATABASE escola;
```

---

## Exemplo

```sql
CREATE DATABASE sistema_escolar;
```

Após a execução, o banco será criado.

---

# USE

Após criar um banco, normalmente selecionamos ele para trabalhar.

## Exemplo

```sql
USE sistema_escolar;
```

A partir desse momento os comandos serão executados nesse banco.

---

# CREATE TABLE

Utilizado para criar tabelas.

## Sintaxe

```sql
CREATE TABLE nome_tabela (
    coluna tipo
);
```

---

## Exemplo

```sql
CREATE TABLE alunos (
    id INT,
    nome VARCHAR(100)
);
```

---

## Resultado

Tabela:

```text
ALUNOS
```

Campos:

```text
id
nome
```

---

# Tipos de Dados

Ao criar uma tabela é necessário definir o tipo de cada coluna.

---

## INT

Utilizado para números inteiros.

Exemplos:

```text
1
20
500
1000
```

---

## VARCHAR

Utilizado para textos.

Exemplo:

```sql
nome VARCHAR(100)
```

---

## DATE

Utilizado para datas.

Exemplo:

```sql
data_nascimento DATE
```

---

## DECIMAL

Utilizado para valores monetários.

Exemplo:

```sql
salario DECIMAL(10,2)
```

---

# ALTER TABLE

Utilizado para modificar tabelas existentes.

---

## Adicionar Coluna

Exemplo:

```sql
ALTER TABLE alunos
ADD email VARCHAR(100);
```

---

Antes:

```text
id
nome
```

Depois:

```text
id
nome
email
```

---

## Remover Coluna

```sql
ALTER TABLE alunos
DROP COLUMN email;
```

---

# DROP TABLE

Remove uma tabela.

## Exemplo

```sql
DROP TABLE alunos;
```

---

## Atenção

Esse comando remove:

- Estrutura
- Dados

Tudo é apagado.

---

# DROP DATABASE

Remove um banco de dados inteiro.

## Exemplo

```sql
DROP DATABASE sistema_escolar;
```

---

## Atenção

Esse comando apaga:

- Tabelas
- Dados
- Estruturas

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

Adicionar coluna:

```sql
ALTER TABLE alunos
ADD email VARCHAR(100);
```

Remover coluna:

```sql
ALTER TABLE alunos
DROP COLUMN email;
```

Remover tabela:

```sql
DROP TABLE alunos;
```

---

# Quando Utilizar DDL?

### Criar banco

```sql
CREATE DATABASE
```

---

### Criar tabela

```sql
CREATE TABLE
```

---

### Alterar estrutura

```sql
ALTER TABLE
```

---

### Remover estrutura

```sql
DROP TABLE
```

ou

```sql
DROP DATABASE
```

---

# Erros Comuns

## Erro 1

Esquecer de selecionar o banco.

Exemplo:

```sql
USE escola;
```

---

## Erro 2

Utilizar DROP sem necessidade.

---

## Erro 3

Escolher tipos de dados inadequados.

---

## Erro 4

Criar tabelas sem planejamento.

---

# Resumo

## CREATE

Cria estruturas.

---

## ALTER

Altera estruturas.

---

## DROP

Remove estruturas.

---

## INT

Números inteiros.

---

## VARCHAR

Textos.

---

## DATE

Datas.

---

## DECIMAL

Valores monetários.

---

# Revisão Rápida

## Qual comando cria um banco?

```sql
CREATE DATABASE
```

---

## Qual comando cria uma tabela?

```sql
CREATE TABLE
```

---

## Qual comando altera uma tabela?

```sql
ALTER TABLE
```

---

## Qual comando remove uma tabela?

```sql
DROP TABLE
```

---

## Qual tipo é usado para textos?

```sql
VARCHAR
```

---

## Qual tipo é usado para números inteiros?

```sql
INT
```

---

## Qual tipo é usado para datas?

```sql
DATE
```

---

## Qual tipo é usado para valores monetários?

```sql
DECIMAL
```
