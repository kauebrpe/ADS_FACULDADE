# Modelo Relacional

## O que é o Modelo Relacional?

O Modelo Relacional é a forma mais utilizada para organizar dados em bancos de dados.

Nesse modelo, as informações são armazenadas em tabelas.

SGBDs que utilizam esse modelo:

- MySQL
- PostgreSQL
- Oracle
- SQL Server

---

## Estrutura Básica

O Modelo Relacional é composto por:

- Tabelas
- Linhas
- Colunas
- Chaves

---

## Tabela

Uma tabela é utilizada para armazenar informações relacionadas.

Exemplo:

Tabela ALUNOS

| id | nome | idade |
|----|------|-------|
| 1 | João | 20 |
| 2 | Maria | 19 |

---

## Linha

Uma linha representa um registro.

Exemplo:

| id | nome | idade |
|----|------|-------|
| 1 | João | 20 |

Essa linha representa um aluno.

---

## Coluna

Uma coluna representa uma característica do registro.

Exemplo:

```text
id
nome
idade
```

---

## Exemplo Completo

Tabela:

| id | nome | cidade |
|----|------|---------|
| 1 | João | Recife |
| 2 | Maria | Olinda |

---

Nesse exemplo:

Tabela:

```text
CLIENTES
```

Colunas:

```text
id
nome
cidade
```

Registros:

```text
João
Maria
```

---

# Chave Primária (PRIMARY KEY)

A chave primária identifica cada registro de forma única.

Características:

- Não pode repetir
- Não pode ser NULL
- Identifica o registro unicamente

---

## Exemplo

```sql
CREATE TABLE alunos (
    id INT PRIMARY KEY,
    nome VARCHAR(100)
);
```

---

Tabela válida:

| id | nome |
|----|------|
| 1 | João |
| 2 | Maria |

---

Tabela inválida:

| id | nome |
|----|------|
| 1 | João |
| 1 | Maria |

O valor da chave primária não pode se repetir.

---

# Chave Estrangeira (FOREIGN KEY)

A chave estrangeira é utilizada para relacionar tabelas.

---

## Exemplo

Tabela DEPARTAMENTOS

| id | nome |
|----|------|
| 1 | TI |
| 2 | RH |

---

Tabela FUNCIONARIOS

| id | nome | departamento_id |
|----|------|----------------|
| 1 | João | 1 |
| 2 | Maria | 2 |

---

O campo:

```text
departamento_id
```

liga as duas tabelas.

---

# Relacionamentos

As tabelas podem se relacionar.

---

## Um para Um (1:1)

Exemplo:

```text
Pessoa
↓
Passaporte
```

Uma pessoa possui um passaporte.

---

## Um para Muitos (1:N)

Exemplo:

```text
Cliente
↓
Pedido
```

Um cliente pode possuir vários pedidos.

---

## Muitos para Muitos (N:N)

Exemplo:

```text
Aluno
↓
Disciplina
```

Um aluno pode cursar várias disciplinas.

Uma disciplina pode possuir vários alunos.

---

# Integridade Referencial

A integridade referencial garante que os relacionamentos sejam válidos.

Exemplo:

Se existir:

```text
departamento_id = 1
```

deve existir também:

```text
departamentos.id = 1
```

---

# Vantagens do Modelo Relacional

- Organização dos dados
- Facilidade de consulta
- Integridade
- Segurança
- Padronização

---

# Exemplo Prático

Criando duas tabelas relacionadas:

```sql
CREATE TABLE departamentos (
    id INT PRIMARY KEY,
    nome VARCHAR(50)
);
```

```sql
CREATE TABLE funcionarios (
    id INT PRIMARY KEY,
    nome VARCHAR(100),
    departamento_id INT,
    FOREIGN KEY (departamento_id)
        REFERENCES departamentos(id)
);
```

---

# Resumo

Tabela:

```text
Armazena registros.
```

---

Linha:

```text
Registro da tabela.
```

---

Coluna:

```text
Característica do registro.
```

---

PRIMARY KEY:

```text
Identifica o registro.
```

---

FOREIGN KEY:

```text
Relaciona tabelas.
```

---

# Erros Comuns

## Erro 1

Confundir tabela com banco de dados.

Um banco pode possuir várias tabelas.

---

## Erro 2

Criar tabelas sem chave primária.

---

## Erro 3

Criar relacionamentos sem chave estrangeira.

---

# Revisão Rápida

## O que é uma tabela?

Estrutura utilizada para armazenar dados.

---

## O que é uma linha?

Um registro da tabela.

---

## O que é uma coluna?

Uma característica dos registros.

---

## O que é uma PRIMARY KEY?

Campo que identifica registros de forma única.

---

## O que é uma FOREIGN KEY?

Campo utilizado para relacionar tabelas.

---

## Qual modelo é utilizado pelo MySQL?

Modelo Relacional.
