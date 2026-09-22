# Transações

## Objetivo

Aprender como funcionam as transações em bancos de dados e como utilizar os comandos:

- START TRANSACTION
- COMMIT
- ROLLBACK

Ao final deste tópico você será capaz de controlar alterações e evitar problemas causados por operações incorretas.

---

# O Que é uma Transação?

Uma transação é um conjunto de operações executadas como uma única unidade de trabalho.

A ideia é simples:

```text
Tudo acontece
ou
Nada acontece
```

---

# Exemplo do Mundo Real

Transferência bancária.

Situação:

```text
Conta A → envia R$ 100
Conta B → recebe R$ 100
```

O banco não pode executar apenas metade da operação.

---

# Problema

Se ocorrer uma falha após retirar o dinheiro da Conta A:

```text
Conta A perdeu dinheiro
Conta B não recebeu
```

Haverá inconsistência.

---

# Solução

Executar tudo dentro de uma transação.

---

# Fluxo de uma Transação

```text
START TRANSACTION
↓
Operações SQL
↓
COMMIT ou ROLLBACK
```

---

# START TRANSACTION

Inicia uma nova transação.

## Exemplo

```sql
START TRANSACTION;
```

A partir desse momento as alterações ficam pendentes.

---

# COMMIT

Confirma definitivamente as alterações.

## Exemplo

```sql
START TRANSACTION;

UPDATE contas
SET saldo = saldo - 100
WHERE id = 1;

COMMIT;
```

---

# O Que Aconteceu?

Após o COMMIT:

```text
As alterações foram gravadas definitivamente.
```

---

# ROLLBACK

Desfaz todas as alterações realizadas na transação.

## Exemplo

```sql
START TRANSACTION;

UPDATE contas
SET saldo = saldo - 100
WHERE id = 1;

ROLLBACK;
```

---

# O Que Aconteceu?

Após o ROLLBACK:

```text
Nada foi alterado.
```

O banco voltou ao estado anterior.

---

# Exemplo Completo

Tabela CONTAS

| id | titular | saldo |
|----|----------|--------|
| 1 | João | 1000 |
| 2 | Maria | 500 |

---

## Transferência

```sql
START TRANSACTION;

UPDATE contas
SET saldo = saldo - 100
WHERE id = 1;

UPDATE contas
SET saldo = saldo + 100
WHERE id = 2;

COMMIT;
```

---

## Resultado

| titular | saldo |
|----------|--------|
| João | 900 |
| Maria | 600 |

---

# Simulando Erro

```sql
START TRANSACTION;

UPDATE contas
SET saldo = saldo - 100
WHERE id = 1;

ROLLBACK;
```

---

## Resultado

| titular | saldo |
|----------|--------|
| João | 1000 |
| Maria | 500 |

Nenhuma alteração foi salva.

---

# Boa Prática

Antes de executar:

```sql
UPDATE
```

ou

```sql
DELETE
```

em dados importantes:

utilize transações.

---

# Exemplo Seguro

```sql
START TRANSACTION;

UPDATE funcionarios
SET salario = salario * 1.10
WHERE departamento_id = 1;

SELECT *
FROM funcionarios
WHERE departamento_id = 1;
```

Verifique os resultados.

---

Se estiver correto:

```sql
COMMIT;
```

---

Se estiver incorreto:

```sql
ROLLBACK;
```

---

# Vantagens das Transações

- Segurança
- Integridade dos dados
- Controle de alterações
- Recuperação de erros

---

# Quando Utilizar?

### Atualizações em massa

```sql
UPDATE
```

---

### Exclusões importantes

```sql
DELETE
```

---

### Transferências financeiras

```sql
UPDATE
```

---

### Processos críticos

Qualquer operação onde não pode haver inconsistência.

---

# Erros Comuns

## Erro 1

Executar UPDATE sem iniciar uma transação.

---

## Erro 2

Esquecer o COMMIT.

---

## Erro 3

Executar COMMIT antes de validar os dados.

---

## Erro 4

Acreditar que ROLLBACK funciona após COMMIT.

Depois do COMMIT a alteração já foi gravada.

---

# Resumo

## START TRANSACTION

Inicia uma transação.

---

## COMMIT

Confirma alterações.

---

## ROLLBACK

Desfaz alterações.

---

# Tabela Resumo

| Comando | Função |
|----------|---------|
| START TRANSACTION | Iniciar transação |
| COMMIT | Confirmar alterações |
| ROLLBACK | Desfazer alterações |

---

# Cola para Prova

- START TRANSACTION inicia uma transação
- COMMIT salva as alterações
- ROLLBACK desfaz as alterações
- Transações aumentam a segurança
- COMMIT torna a alteração permanente
- ROLLBACK só funciona antes do COMMIT

---

# Questões de Revisão

## 1. O que é uma transação?

Resposta:

Um conjunto de operações executadas como uma única unidade de trabalho.

---

## 2. Qual comando inicia uma transação?

Resposta:

```sql
START TRANSACTION;
```

---

## 3. Qual comando confirma alterações?

Resposta:

```sql
COMMIT;
```

---

## 4. Qual comando desfaz alterações?

Resposta:

```sql
ROLLBACK;
```

---

## 5. O ROLLBACK funciona após o COMMIT?

Resposta:

Não. Após o COMMIT as alterações já foram gravadas.
