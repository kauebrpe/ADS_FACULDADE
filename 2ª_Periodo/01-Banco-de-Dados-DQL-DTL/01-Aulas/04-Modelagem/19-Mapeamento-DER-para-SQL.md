
# Mapeamento do DER para Tabelas e SQL

## Objetivo

Aprender a transformar um DER (Diagrama Entidade-Relacionamento) em:

1. Modelo Lógico
2. Tabelas
3. Script SQL

Este processo é conhecido como mapeamento.

---

# O que é Mapeamento?

Mapeamento é o processo de converter um DER em tabelas relacionais.

Fluxo:

```text
DER
↓
Modelo Lógico
↓
Tabelas
↓
Script SQL
```

---

# Regra 1 - Entidade Vira Tabela

Toda entidade normalmente se torna uma tabela.

---

## Exemplo

DER:

```text
CLIENTE
```

Modelo Lógico:

```text
CLIENTES
- id_cliente
- nome
- email
```

SQL:

```sql
CREATE TABLE clientes (
    id_cliente INT PRIMARY KEY,
    nome VARCHAR(100),
    email VARCHAR(100)
);
```

---

# Regra 2 - Atributos Viram Colunas

Os atributos da entidade viram colunas da tabela.

---

## Exemplo

Entidade:

```text
ALUNO
```

Atributos:

```text
matricula
nome
email
```

Tabela:

```text
ALUNOS
- matricula
- nome
- email
```

SQL:

```sql
CREATE TABLE alunos (
    matricula INT PRIMARY KEY,
    nome VARCHAR(100),
    email VARCHAR(100)
);
```

---

# Regra 3 - Identificador Vira PRIMARY KEY

O atributo identificador torna-se a chave primária.

---

## Exemplo

DER:

```text
CLIENTE
(id_cliente)
```

SQL:

```sql
CREATE TABLE clientes (
    id_cliente INT PRIMARY KEY,
    nome VARCHAR(100)
);
```

---

# Regra 4 - Relacionamento 1:N

No relacionamento 1:N a chave estrangeira fica na tabela do lado N.

---

## Exemplo

DER:

```text
CLIENTE
   │ 1
   │
REALIZA
   │ N
   │
PEDIDO
```

---

## Modelo Lógico

CLIENTES

```text
id_cliente
nome
```

PEDIDOS

```text
id_pedido
data_pedido
id_cliente
```

---

## SQL

```sql
CREATE TABLE clientes (
    id_cliente INT PRIMARY KEY,
    nome VARCHAR(100)
);

CREATE TABLE pedidos (
    id_pedido INT PRIMARY KEY,
    data_pedido DATE,
    id_cliente INT,
    FOREIGN KEY (id_cliente)
        REFERENCES clientes(id_cliente)
);
```

---

# Regra 5 - Relacionamento N:N

Relacionamentos muitos-para-muitos precisam de uma tabela intermediária.

---

## Exemplo

DER:

```text
ALUNO
   │ N
CURSA
   │ N
DISCIPLINA
```

---

## Modelo Lógico

ALUNOS

```text
id_aluno
nome
```

DISCIPLINAS

```text
id_disciplina
nome
```

MATRICULAS

```text
id_aluno
id_disciplina
```

---

## SQL

```sql
CREATE TABLE alunos (
    id_aluno INT PRIMARY KEY,
    nome VARCHAR(100)
);

CREATE TABLE disciplinas (
    id_disciplina INT PRIMARY KEY,
    nome VARCHAR(100)
);

CREATE TABLE matriculas (
    id_aluno INT,
    id_disciplina INT,
    PRIMARY KEY (id_aluno, id_disciplina),
    FOREIGN KEY (id_aluno)
        REFERENCES alunos(id_aluno),
    FOREIGN KEY (id_disciplina)
        REFERENCES disciplinas(id_disciplina)
);
```

---

# Regra 6 - Relacionamento 1:1

A chave estrangeira normalmente fica na entidade dependente.

---

## Exemplo

DER:

```text
PESSOA
   │ 1
POSSUI
   │ 1
PASSAPORTE
```

---

## Modelo Lógico

PESSOAS

```text
id_pessoa
nome
```

PASSAPORTES

```text
id_passaporte
numero
id_pessoa
```

---

## SQL

```sql
CREATE TABLE pessoas (
    id_pessoa INT PRIMARY KEY,
    nome VARCHAR(100)
);

CREATE TABLE passaportes (
    id_passaporte INT PRIMARY KEY,
    numero VARCHAR(30),
    id_pessoa INT UNIQUE,
    FOREIGN KEY (id_pessoa)
        REFERENCES pessoas(id_pessoa)
);
```

---

# Exemplo Completo

## DER

```text
CLIENTE
   │ 1
REALIZA
   │ N
PEDIDO
```

---

## Modelo Lógico

CLIENTES

```text
id_cliente
nome
email
```

PEDIDOS

```text
id_pedido
data_pedido
valor
id_cliente
```

---

## Modelo Físico

```sql
CREATE TABLE clientes (
    id_cliente INT PRIMARY KEY,
    nome VARCHAR(100),
    email VARCHAR(100)
);

CREATE TABLE pedidos (
    id_pedido INT PRIMARY KEY,
    data_pedido DATE,
    valor DECIMAL(10,2),
    id_cliente INT,
    FOREIGN KEY (id_cliente)
        REFERENCES clientes(id_cliente)
);
```

---

# Mapeamento Resumido

## Entidade

Vira tabela.

---

## Atributo

Vira coluna.

---

## Identificador

Vira PRIMARY KEY.

---

## Relacionamento 1:N

FK no lado N.

---

## Relacionamento N:N

Criar tabela intermediária.

---

## Relacionamento 1:1

FK na entidade dependente.

---

# Erros Comuns

## Erro 1

Não criar chave primária.

---

## Erro 2

Esquecer chave estrangeira.

---

## Erro 3

Criar relacionamento N:N sem tabela intermediária.

---

## Erro 4

Transformar atributos em tabelas sem necessidade.

---

# Resumo

## Entidade

Tabela.

---

## Atributo

Coluna.

---

## Identificador

PRIMARY KEY.

---

## Relacionamento

FOREIGN KEY.

---

# Tabela Resumo

| Elemento do DER | Resultado |
|----------------|------------|
| Entidade | Tabela |
| Atributo | Coluna |
| Identificador | PRIMARY KEY |
| Relacionamento 1:N | FOREIGN KEY |
| Relacionamento N:N | Tabela intermediária |
| Relacionamento 1:1 | FOREIGN KEY + UNIQUE |

---

# Cola para Prova

- Entidade → Tabela
- Atributo → Coluna
- Identificador → PRIMARY KEY
- Relacionamento 1:N → FK no lado N
- Relacionamento N:N → Criar tabela intermediária
- Relacionamento 1:1 → FK + UNIQUE
- DER → Modelo Lógico → SQL

---

# Questões de Revisão

## 1. O que uma entidade vira no modelo lógico?

Resposta:

Uma tabela.

---

## 2. O que um atributo vira?

Resposta:

Uma coluna.

---

## 3. O que o identificador vira?

Resposta:

PRIMARY KEY.

---

## 4. Em qual lado fica a FK em um relacionamento 1:N?

Resposta:

No lado N.

---

## 5. Como mapear um relacionamento N:N?

Resposta:

Criando uma tabela intermediária.
