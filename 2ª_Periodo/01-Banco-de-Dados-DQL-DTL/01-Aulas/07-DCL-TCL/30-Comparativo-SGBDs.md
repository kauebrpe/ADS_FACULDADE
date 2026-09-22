# Comparativo de Usuários e Permissões entre SGBDs

## Objetivo

Comparar como os principais Sistemas Gerenciadores de Banco de Dados realizam o controle de usuários e permissões.

Neste tópico serão analisados:

- MySQL
- PostgreSQL
- Oracle Database
- SQL Server

O foco não é decorar todos os comandos, mas compreender as diferenças entre os SGBDs.

---

# Por Que Comparar SGBDs?

Embora os conceitos de segurança sejam parecidos, cada SGBD possui comandos e características próprias.

Todos trabalham com:

- Usuários
- Permissões
- Roles
- Segurança

Mas a sintaxe muda.

---

# MySQL

O MySQL utiliza os comandos:

```sql
CREATE USER
GRANT
REVOKE
DROP USER
```

---

## Criando Usuário

```sql
CREATE USER 'joao'@'localhost'
IDENTIFIED BY '123456';
```

---

## Concedendo Permissão

```sql
GRANT SELECT
ON escola.*
TO 'joao'@'localhost';
```

---

## Removendo Permissão

```sql
REVOKE SELECT
ON escola.*
FROM 'joao'@'localhost';
```

---

# PostgreSQL

O PostgreSQL trabalha com conceitos semelhantes.

---

## Criando Usuário

```sql
CREATE USER joao
WITH PASSWORD '123456';
```

---

## Concedendo Permissão

```sql
GRANT SELECT
ON clientes
TO joao;
```

---

## Removendo Permissão

```sql
REVOKE SELECT
ON clientes
FROM joao;
```

---

# Oracle Database

No Oracle, usuários normalmente possuem um esquema próprio.

---

## Criando Usuário

```sql
CREATE USER joao
IDENTIFIED BY 123456;
```

---

## Concedendo Permissão

```sql
GRANT CREATE SESSION TO joao;
```

---

## Permissão de Tabela

```sql
GRANT SELECT
ON clientes
TO joao;
```

---

# SQL Server

O SQL Server trabalha com logins e usuários.

---

## Criando Login

```sql
CREATE LOGIN joao
WITH PASSWORD = '123456';
```

---

## Criando Usuário

```sql
CREATE USER joao
FOR LOGIN joao;
```

---

## Concedendo Permissão

```sql
GRANT SELECT
ON clientes
TO joao;
```

---

# Comparação Geral

## Criar Usuário

MySQL:

```sql
CREATE USER
```

PostgreSQL:

```sql
CREATE USER
```

Oracle:

```sql
CREATE USER
```

SQL Server:

```sql
CREATE LOGIN
```

e depois:

```sql
CREATE USER
```

---

# Conceder Permissões

Todos utilizam:

```sql
GRANT
```

---

# Remover Permissões

Todos utilizam:

```sql
REVOKE
```

---

# Roles

Roles são conjuntos de permissões reutilizáveis.

---

## Exemplo

Role:

```text
ANALISTA
```

Permissões:

- SELECT
- INSERT

Vários usuários podem receber essa role.

---

# Vantagens das Roles

- Menos trabalho administrativo
- Organização
- Segurança
- Padronização

---

# Exemplo Conceitual

```text
ROLE: ANALISTA

↓
SELECT
INSERT

↓
Usuário 1
Usuário 2
Usuário 3
```

---

# Segurança

Boa prática:

Conceder apenas as permissões necessárias.

Princípio:

```text
Menor Privilégio
```

---

# Exemplo Correto

Usuário que apenas consulta:

```sql
GRANT SELECT
ON clientes
TO usuario;
```

---

# Exemplo Incorreto

```sql
GRANT ALL PRIVILEGES
ON banco
TO usuario;
```

quando o usuário precisa apenas consultar dados.

---

# Diferenças Principais

## MySQL

Mais simples.

Muito comum em aplicações web.

---

## PostgreSQL

Mais rígido e robusto.

Muito utilizado em ambientes corporativos.

---

## Oracle

Grande foco em segurança e ambiente empresarial.

---

## SQL Server

Integração forte com o ecossistema Microsoft.

---

# O Que Cai em Prova?

Normalmente:

- CREATE USER
- GRANT
- REVOKE
- CREATE ROLE
- Diferença entre usuário e role

---

# Resumo

Todos os SGBDs possuem:

- Usuários
- Permissões
- Roles

A principal diferença está na sintaxe.

---

# Tabela Resumo

| Recurso | MySQL | PostgreSQL | Oracle | SQL Server |
|----------|--------|------------|---------|------------|
| CREATE USER | Sim | Sim | Sim | Parcial |
| GRANT | Sim | Sim | Sim | Sim |
| REVOKE | Sim | Sim | Sim | Sim |
| Roles | Sim | Sim | Sim | Sim |

---

# Cola para Prova

- CREATE USER cria usuários
- GRANT concede permissões
- REVOKE remove permissões
- ROLE é um conjunto de permissões
- Menor privilégio aumenta a segurança
- A ideia é igual nos SGBDs
- A sintaxe pode mudar

---

# Questões de Revisão

## 1. Qual comando cria usuários?

Resposta:

CREATE USER.

---

## 2. Qual comando concede permissões?

Resposta:

GRANT.

---

## 3. Qual comando remove permissões?

Resposta:

REVOKE.

---

## 4. O que é uma role?

Resposta:

Um conjunto de permissões agrupadas.

---

## 5. Qual princípio de segurança recomenda conceder apenas os acessos necessários?

Resposta:

Princípio do Menor Privilégio.
