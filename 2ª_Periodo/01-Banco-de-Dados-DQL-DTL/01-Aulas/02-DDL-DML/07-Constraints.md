# Constraints

## Objetivo

Aprender o que são constraints e como utilizá-las para garantir a integridade e a confiabilidade dos dados armazenados no banco de dados.

---

# O que são Constraints?

Constraints são regras aplicadas às colunas de uma tabela.

Essas regras ajudam a impedir que dados inválidos sejam inseridos.

---

# Principais Constraints

```text
PRIMARY KEY
FOREIGN KEY
NOT NULL
UNIQUE
DEFAULT
AUTO_INCREMENT
```

---

# PRIMARY KEY

A chave primária identifica unicamente cada registro.

## Regras

✅ Não pode repetir

✅ Não pode ser NULL

✅ Deve identificar cada linha de forma única

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

## Errado

| id | nome |
|----|------|
| 1 | João |
| 1 | Maria |

---

# FOREIGN KEY

A chave estrangeira cria relacionamentos entre tabelas.

---

## Exemplo

Tabela departamentos:

```sql
CREATE TABLE departamentos (
    id INT PRIMARY KEY,
    nome VARCHAR(50)
);
```

---

Tabela funcionários:

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

Garantir que um departamento exista antes de ser associado a um funcionário.

---

# NOT NULL

Impede que o campo fique vazio.

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

## Errado

```sql
INSERT INTO alunos (id)
VALUES (1);
```

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
joao@gmail.com
maria@gmail.com
```

---

## Errado

```text
joao@gmail.com
joao@gmail.com
```

---

# DEFAULT

Define um valor padrão.

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

Resultado:

```text
estoque = 0
```

---

# AUTO_INCREMENT

Gera números automaticamente.

Muito utilizado em chaves primárias.

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
INSERT INTO alunos(nome)
VALUES ('João');
```

---

Resultado:

```text
id = 1
```

---

Nova inserção:

```sql
INSERT INTO alunos(nome)
VALUES ('Maria');
```

---

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

# Várias Constraints Juntas

```sql
CREATE TABLE produtos (
    id INT AUTO_INCREMENT PRIMARY KEY,
    nome VARCHAR(100) NOT NULL,
    preco DECIMAL(10,2) NOT NULL,
    codigo VARCHAR(20) UNIQUE,
    estoque INT DEFAULT 0
);
```

---

# Por que usar Constraints?

Sem constraints:

```text
Dados inválidos
Duplicações
Inconsistências
Problemas de relacionamento
```

---

Com constraints:

```text
Integridade
Segurança
Confiabilidade
Organização
```

---

# Erros Comuns

## Erro 1

Não definir PRIMARY KEY.

---

## Erro 2

Esquecer NOT NULL em campos obrigatórios.

---

## Erro 3

Não utilizar FOREIGN KEY.

---

## Erro 4

Esquecer UNIQUE em campos como e-mail.

---

## Erro 5

Achar que AUTO_INCREMENT dispensa PRIMARY KEY.

O mais comum é usar:

```sql
AUTO_INCREMENT PRIMARY KEY
```

---

# Resumo

## PRIMARY KEY

Identifica registros.

---

## FOREIGN KEY

Cria relacionamentos.

---

## NOT NULL

Campo obrigatório.

---

## UNIQUE

Não permite repetição.

---

## DEFAULT

Valor padrão.

---

## AUTO_INCREMENT

Numeração automática.

---

# Cola para Prova

```text
PRIMARY KEY
→ Identifica

FOREIGN KEY
→ Relaciona

NOT NULL
→ Obrigatório

UNIQUE
→ Não repete

DEFAULT
→ Valor padrão

AUTO_INCREMENT
→ Numeração automática
```

---

# Questões de Revisão

## 1

Qual constraint identifica unicamente um registro?

Resposta:

PRIMARY KEY.

---

## 2

Qual constraint cria relacionamentos entre tabelas?

Resposta:

FOREIGN KEY.

---

## 3

Qual constraint impede valores nulos?

Resposta:

NOT NULL.

---

## 4

Qual constraint impede duplicação?

Resposta:

UNIQUE.

---

## 5

Qual constraint gera números automaticamente?

Resposta:

AUTO_INCREMENT.
