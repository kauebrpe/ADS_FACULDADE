# DCL e TCL

## Objetivo do Bloco

Este bloco apresenta os comandos relacionados a segurança, controle de acesso e controle de transações em bancos de dados.

Ao final deste módulo você será capaz de:

- Criar usuários
- Remover usuários
- Criar funções (roles)
- Gerenciar permissões
- Utilizar GRANT e REVOKE
- Trabalhar com transações
- Utilizar COMMIT e ROLLBACK
- Entender diferenças entre SGBDs

---

## Conteúdo do Bloco

### 29 - Usuários e Permissões

Arquivo:

```text
29-Usuarios-e-Permissoes.md
```

Tópicos:

- CREATE USER
- DROP USER
- CREATE ROLE
- GRANT
- REVOKE
- Associação de usuários e funções

---

### 30 - Comparativo Entre SGBDs

Arquivo:

```text
30-Comparativo-SGBDs.md
```

Tópicos:

- MySQL
- PostgreSQL
- Oracle
- SQL Server
- Diferenças de comandos e permissões

---

### 31 - Transações

Arquivo:

```text
31-Transacoes.md
```

Tópicos:

- START TRANSACTION
- COMMIT
- ROLLBACK
- Controle de alterações

---

## O Que é DCL?

DCL significa:

```text
Data Control Language
```

É o conjunto de comandos responsável pelo controle de acesso aos dados.

Principais comandos:

```text
CREATE USER
DROP USER
GRANT
REVOKE
CREATE ROLE
```

---

## O Que é TCL?

TCL significa:

```text
Transaction Control Language
```

É o conjunto de comandos responsável pelo controle de transações.

Principais comandos:

```text
START TRANSACTION
COMMIT
ROLLBACK
```

---

## Exemplo de Controle de Permissão

```sql
GRANT SELECT
ON clientes
TO usuario;
```

Objetivo:

Permitir que um usuário consulte dados.

---

## Exemplo de Transação

```sql
START TRANSACTION;

UPDATE contas
SET saldo = saldo - 100
WHERE id = 1;

COMMIT;
```

Objetivo:

Confirmar alterações somente após finalizar a operação.

---

## Resumo do Bloco

### DCL

Responsável por:

- Usuários
- Roles
- Permissões
- Segurança

---

### TCL

Responsável por:

- Transações
- Confirmação de alterações
- Desfazer alterações

---

## Fluxo de Controle de Acesso

```text
Usuário
↓
Permissões
↓
Banco de Dados
```

---

## Fluxo de Transação

```text
START TRANSACTION
↓
Operações SQL
↓
COMMIT ou ROLLBACK
```

---

## Tabela Resumo

| Categoria | Finalidade |
|------------|------------|
| DCL | Controle de acesso |
| TCL | Controle de transações |
| GRANT | Conceder permissões |
| REVOKE | Remover permissões |
| COMMIT | Confirmar alterações |
| ROLLBACK | Desfazer alterações |

---

## Status do Bloco

- 29 Usuários e Permissões ⬜
- 30 Comparativo Entre SGBDs ⬜
- 31 Transações ⬜

---

## Próximo Bloco

```text
08-Avancado
```
