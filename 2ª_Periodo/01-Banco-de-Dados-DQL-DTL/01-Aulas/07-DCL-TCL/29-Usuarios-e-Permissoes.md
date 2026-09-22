# Usuários e Permissões

## Objetivo

Aprender a criar usuários, remover usuários e controlar permissões em um banco de dados.

Ao final deste tópico você será capaz de:

- Criar usuários
- Remover usuários
- Criar roles
- Conceder permissões
- Remover permissões
- Associar roles a usuários

---

# O Que é Controle de Acesso?

Nem todos os usuários devem ter acesso total ao banco de dados.

Em sistemas reais existem diferentes níveis de acesso.

Exemplos:

- Administrador
- Analista
- Desenvolvedor
- Usuário comum

Cada perfil recebe permissões diferentes.

---

# Usuários no Banco de Dados

Um usuário é uma conta autorizada a acessar o banco.

Exemplo:

```text
admin
analista
joao
maria
```

---

# CREATE USER

Utilizado para criar novos usuários.

## Sintaxe

```sql
CREATE USER 'usuario'@'localhost'
IDENTIFIED BY 'senha';
```

---

## Exemplo

```sql
CREATE USER 'joao'@'localhost'
IDENTIFIED BY '123456';
```

---

# DROP USER

Remove um usuário existente.

## Sintaxe

```sql
DROP USER 'usuario'@'localhost';
```

---

## Exemplo

```sql
DROP USER 'joao'@'localhost';
```

---

# O Que São Permissões?

Permissões definem quais operações um usuário pode executar.

Exemplos:

- Consultar dados
- Inserir registros
- Atualizar registros
- Excluir registros
- Criar tabelas

---

# GRANT

Concede permissões.

## Sintaxe

```sql
GRANT permissao
ON objeto
TO usuario;
```

---

## Permitir Consulta

```sql
GRANT SELECT
ON escola.*
TO 'joao'@'localhost';
```

---

## Permitir Inserção

```sql
GRANT INSERT
ON escola.*
TO 'joao'@'localhost';
```

---

## Permitir Múltiplas Permissões

```sql
GRANT SELECT,
      INSERT,
      UPDATE
ON escola.*
TO 'joao'@'localhost';
```

---

# REVOKE

Remove permissões.

## Sintaxe

```sql
REVOKE permissao
ON objeto
FROM usuario;
```

---

## Exemplo

```sql
REVOKE INSERT
ON escola.*
FROM 'joao'@'localhost';
```

---

# Permissões Mais Comuns

## SELECT

Permite consultar dados.

```sql
GRANT SELECT
ON escola.*
TO 'usuario';
```

---

## INSERT

Permite inserir registros.

```sql
GRANT INSERT
ON escola.*
TO 'usuario';
```

---

## UPDATE

Permite atualizar registros.

```sql
GRANT UPDATE
ON escola.*
TO 'usuario';
```

---

## DELETE

Permite excluir registros.

```sql
GRANT DELETE
ON escola.*
TO 'usuario';
```

---

## ALL PRIVILEGES

Concede todas as permissões.

```sql
GRANT ALL PRIVILEGES
ON escola.*
TO 'admin'@'localhost';
```

---

# O Que é uma Role?

Uma role é um conjunto de permissões agrupadas.

Em vez de atribuir permissões individualmente para muitos usuários, criamos uma role.

---

# CREATE ROLE

## Exemplo

```sql
CREATE ROLE analista;
```

---

# Concedendo Permissões à Role

```sql
GRANT SELECT
ON escola.*
TO analista;
```

---

# Associando Role a um Usuário

```sql
GRANT analista
TO 'joao'@'localhost';
```

---

# Exemplo Completo

Criando usuário:

```sql
CREATE USER 'maria'@'localhost'
IDENTIFIED BY '123456';
```

Criando role:

```sql
CREATE ROLE analista;
```

Concedendo permissão:

```sql
GRANT SELECT
ON escola.*
TO analista;
```

Associando role:

```sql
GRANT analista
TO 'maria'@'localhost';
```

---

# Cenário Real

Sistema escolar.

Administrador:

```text
SELECT
INSERT
UPDATE
DELETE
```

---

Professor:

```text
SELECT
UPDATE
```

---

Aluno:

```text
SELECT
```

---

Cada usuário recebe apenas o que necessita.

---

# Princípio do Menor Privilégio

Boa prática muito utilizada em segurança.

Significa:

```text
Conceder apenas as permissões necessárias.
```

---

## Exemplo

Se o usuário apenas consulta dados:

```sql
GRANT SELECT
ON escola.*
TO usuario;
```

Não é necessário permitir:

```sql
DELETE
```

ou

```sql
DROP
```

---

# Erros Comuns

## Erro 1

Conceder ALL PRIVILEGES para todos os usuários.

---

## Erro 2

Esquecer de remover acessos antigos.

---

## Erro 3

Utilizar usuários compartilhados.

---

## Erro 4

Conceder permissões maiores que o necessário.

---

# Resumo

- CREATE USER cria usuários.
- DROP USER remove usuários.
- GRANT concede permissões.
- REVOKE remove permissões.
- CREATE ROLE cria funções.
- Roles facilitam o gerenciamento de acessos.

---

# Tabela Resumo

| Comando | Finalidade |
|----------|-----------|
| CREATE USER | Criar usuário |
| DROP USER | Remover usuário |
| GRANT | Conceder permissões |
| REVOKE | Remover permissões |
| CREATE ROLE | Criar role |

---

# Cola para Prova

- CREATE USER = criar usuário
- DROP USER = remover usuário
- GRANT = conceder permissão
- REVOKE = remover permissão
- ROLE = grupo de permissões
- Menor privilégio = mais segurança

---

# Questões de Revisão

## 1. Qual comando cria um usuário?

Resposta:

```sql
CREATE USER
```

---

## 2. Qual comando remove um usuário?

Resposta:

```sql
DROP USER
```

---

## 3. Qual comando concede permissões?

Resposta:

```sql
GRANT
```

---

## 4. Qual comando remove permissões?

Resposta:

```sql
REVOKE
```

---

## 5. O que é uma role?

Resposta:

Um conjunto de permissões agrupadas.
