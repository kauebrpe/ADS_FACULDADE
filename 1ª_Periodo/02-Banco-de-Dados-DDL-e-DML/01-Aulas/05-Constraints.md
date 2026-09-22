# Constraints

## O que são Constraints?

Constraints são regras aplicadas às tabelas para garantir que os dados sejam armazenados corretamente.

Elas ajudam a manter a integridade e a consistência das informações.

Sem constraints, seria possível cadastrar dados incorretos ou inconsistentes.

---

## Principais Constraints

As mais utilizadas são:

- PRIMARY KEY
- FOREIGN KEY
- NOT NULL
- UNIQUE
- DEFAULT
- AUTO_INCREMENT

---

# PRIMARY KEY

A PRIMARY KEY (Chave Primária) identifica cada registro de forma única.

Características:

- Não pode repetir
- Não pode ser NULL
- Deve identificar um único registro

---

## Exemplo

```sql
CREATE TABLE alunos (
    id INT PRIMARY KEY,
    nome VARCHAR(100)
);
```

---

## Correto

| id | nome |
|----|------|
| 1 | João |
| 2 | Maria |

---

## Incorreto

| id | nome |
|----|------|
| 1 | João |
| 1 | Maria |

O valor da chave primária não pode se repetir.

---

# FOREIGN KEY

A FOREIGN KEY (Chave Estrangeira) cria relacionamentos entre tabelas.

---

## Exemplo

Tabela DEPARTAMENTOS

```sql
CREATE TABLE departamentos (
    id INT PRIMARY KEY,
    nome VARCHAR(50)
);
```

Tabela FUNCIONARIOS

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

## Objetivo

Garantir que um funcionário seja associado apenas a um departamento existente.

---

# NOT NULL

Impede que uma coluna fique vazia.

---

## Exemplo

```sql
CREATE TABLE alunos (
    id INT PRIMARY KEY,
    nome VARCHAR(100) NOT NULL
);
```

---

## Correto

```sql
INSERT INTO alunos
VALUES (1, 'João');
```

---

## Incorreto

```sql
INSERT INTO alunos (id)
VALUES (1);
```

O campo nome é obrigatório.

---

# UNIQUE

Impede valores duplicados.

---

## Exemplo

```sql
CREATE TABLE usuarios (
    id INT PRIMARY KEY,
    email VARCHAR(100) UNIQUE
);
```

---

## Correto

```text
joao@email.com
maria@email.com
```

---

## Incorreto

```text
joao@email.com
joao@email.com
```

---

# DEFAULT

Define um valor padrão para uma coluna.

---

## Exemplo

```sql
CREATE TABLE produtos (
    id INT PRIMARY KEY,
    estoque INT DEFAULT 0
);
```

---

Inserção:

```sql
INSERT INTO produtos (id)
VALUES (1);
```

---

Resultado:

```text
estoque = 0
```

---

# AUTO_INCREMENT

Gera números automaticamente.

É muito utilizado junto com PRIMARY KEY.

---

## Exemplo

```sql
CREATE TABLE alunos (
    id INT AUTO_INCREMENT PRIMARY KEY,
    nome VARCHAR(100)
);
```

---

Inserção:

```sql
INSERT INTO alunos (nome)
VALUES ('João');
```

Resultado:

```text
id = 1
```

---

Nova inserção:

```sql
INSERT INTO alunos (nome)
VALUES ('Maria');
```

Resultado:

```text
id = 2
```

---

# Exemplo Completo

```sql
CREATE TABLE clientes (
    id INT AUTO_INCREMENT PRIMARY KEY,
    nome VARCHAR(100) NOT NULL,
    email VARCHAR(100) UNIQUE,
    cidade VARCHAR(50) DEFAULT 'Recife'
);
```

---

# Por Que Utilizar Constraints?

Elas ajudam a evitar:

- Dados repetidos
- Dados inválidos
- Relacionamentos incorretos
- Campos obrigatórios vazios

---

# Exemplo de Tabela Bem Definida

```sql
CREATE TABLE produtos (
    id INT AUTO_INCREMENT PRIMARY KEY,
    nome VARCHAR(100) NOT NULL,
    preco DECIMAL(10,2) NOT NULL,
    codigo VARCHAR(30) UNIQUE,
    estoque INT DEFAULT 0
);
```

---

# Erros Comuns

## Erro 1

Criar tabelas sem PRIMARY KEY.

---

## Erro 2

Esquecer NOT NULL em campos obrigatórios.

---

## Erro 3

Não utilizar FOREIGN KEY em relacionamentos.

---

## Erro 4

Esquecer UNIQUE em campos como e-mail.

---

## Erro 5

Achar que AUTO_INCREMENT substitui PRIMARY KEY.

O mais comum é utilizar:

```sql
AUTO_INCREMENT PRIMARY KEY
```

---

# Resumo

## PRIMARY KEY

Identifica registros.

---

## FOREIGN KEY

Relaciona tabelas.

---

## NOT NULL

Campo obrigatório.

---

## UNIQUE

Impede repetição.

---

## DEFAULT

Valor padrão.

---

## AUTO_INCREMENT

Numeração automática.

---

# Revisão Rápida

## Qual constraint identifica registros?

```sql
PRIMARY KEY
```

---

## Qual constraint cria relacionamentos?

```sql
FOREIGN KEY
```

---

## Qual constraint impede valores vazios?

```sql
NOT NULL
```

---

## Qual constraint impede valores repetidos?

```sql
UNIQUE
```

---

## Qual constraint define valor padrão?

```sql
DEFAULT
```

---

## Qual constraint gera numeração automática?

```sql
AUTO_INCREMENT
```
