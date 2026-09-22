# Controle Avançado de Transações: Isolamento, Bloqueios e Deadlocks

## Objetivo

Aprender como o banco de dados controla usuários acessando e modificando dados simultaneamente.

Ao final deste tópico você será capaz de entender:

- Concorrência
- Isolamento de transações
- Bloqueios
- Deadlocks
- Problemas causados por acesso simultâneo

---

# Por Que Esse Assunto é Importante?

Imagine dois usuários trabalhando ao mesmo tempo.

Usuário A:

```text
Atualizando saldo de uma conta
```

Usuário B:

```text
Consultando ou alterando a mesma conta
```

O banco precisa garantir que os dados continuem corretos.

---

# Concorrência

Concorrência ocorre quando várias transações acessam os mesmos dados ao mesmo tempo.

Exemplo:

```text
Transação A
↓
Tabela Contas
↑
Transação B
```

Sem controle adequado podem ocorrer erros.

---

# O Que é Isolamento?

Isolamento define como uma transação "enxerga" as alterações feitas por outras transações.

Objetivo:

```text
Evitar inconsistências.
```

---

# Exemplo

Transação A:

```sql
START TRANSACTION;

UPDATE contas
SET saldo = 500
WHERE id = 1;
```

Ainda não executou:

```sql
COMMIT;
```

---

Pergunta:

A Transação B pode enxergar esse novo saldo?

A resposta depende do nível de isolamento.

---

# Problemas de Concorrência

Existem alguns problemas clássicos.

---

# Dirty Read

Leitura Suja.

Uma transação lê dados que ainda não foram confirmados.

---

## Exemplo

Transação A:

```sql
UPDATE contas
SET saldo = 500;
```

Sem COMMIT.

---

Transação B:

```sql
SELECT saldo
FROM contas;
```

Lê o valor.

---

Depois:

```sql
ROLLBACK;
```

O valor nunca deveria ter existido.

---

# Non-Repeatable Read

Leitura Não Repetível.

A mesma consulta retorna resultados diferentes.

---

## Exemplo

Transação B lê:

```text
Salário = 3000
```

---

Outra transação altera:

```text
Salário = 4000
```

---

A mesma consulta é executada novamente.

Resultado:

```text
Salário = 4000
```

---

# Phantom Read

Leitura Fantasma.

Novos registros aparecem durante a transação.

---

## Exemplo

Consulta inicial:

```text
10 pedidos
```

---

Outra transação insere:

```text
Pedido 11
```

---

Nova consulta:

```text
11 pedidos
```

---

# Níveis de Isolamento

O banco utiliza níveis de isolamento para decidir como controlar esses problemas.

---

# READ UNCOMMITTED

Menor nível de isolamento.

Permite leituras sujas.

---

## Vantagem

Maior desempenho.

---

## Desvantagem

Menor segurança.

---

# READ COMMITTED

Permite enxergar apenas dados confirmados.

---

## Vantagem

Evita Dirty Reads.

---

## Muito utilizado em

```text
Oracle
SQL Server
PostgreSQL
```

---

# REPEATABLE READ

Garante que uma leitura repetida retorne os mesmos dados.

---

## Vantagem

Evita:

```text
Dirty Read
Non-Repeatable Read
```

---

## Padrão do MySQL

O MySQL InnoDB utiliza:

```text
REPEATABLE READ
```

por padrão.

---

# SERIALIZABLE

Maior nível de isolamento.

As transações são executadas como se fossem sequenciais.

---

## Vantagem

Maior segurança.

---

## Desvantagem

Pode reduzir desempenho.

---

# Resumo dos Níveis

| Nível | Segurança |
|---------|---------|
| READ UNCOMMITTED | Baixa |
| READ COMMITTED | Média |
| REPEATABLE READ | Alta |
| SERIALIZABLE | Muito Alta |

---

# O Que é um Bloqueio?

Bloqueio é um mecanismo utilizado para impedir conflitos.

Enquanto uma transação utiliza um registro, outra pode precisar esperar.

---

# Exemplo

Transação A:

```sql
UPDATE contas
SET saldo = 200
WHERE id = 1;
```

---

Transação B:

```sql
UPDATE contas
SET saldo = 300
WHERE id = 1;
```

---

O banco pode bloquear o registro até a primeira transação terminar.

---

# O Que é um Deadlock?

Deadlock significa:

```text
Impasse
```

Duas transações ficam esperando uma pela outra.

---

# Exemplo

Transação A:

```text
Bloqueia Registro X
```

Depois espera:

```text
Registro Y
```

---

Transação B:

```text
Bloqueia Registro Y
```

Depois espera:

```text
Registro X
```

---

Resultado:

```text
A espera B
B espera A
```

Nenhuma continua.

---

# Como o Banco Resolve?

O SGBD detecta o deadlock.

Uma das transações é cancelada automaticamente.

---

## Resultado

```text
Deadlock detected
```

Uma transação continua.

A outra é abortada.

---

# Como Evitar Deadlocks?

- Manter transações curtas
- Atualizar tabelas na mesma ordem
- Evitar bloqueios desnecessários
- Utilizar índices adequados

---

# Exemplo de Boa Prática

Errado:

```text
Transação longa
↓
Vários bloqueios
↓
Maior chance de deadlock
```

---

Correto:

```text
Transação rápida
↓
Commit rápido
↓
Menos bloqueios
```

---

# Relação com COMMIT e ROLLBACK

Os bloqueios normalmente permanecem até:

```sql
COMMIT;
```

ou

```sql
ROLLBACK;
```

---

# Situações Reais

## Bancos

Transferências financeiras.

---

## E-commerce

Atualização de estoque.

---

## Sistemas de Pagamento

Processamento simultâneo de pedidos.

---

## ERPs

Atualização de informações de clientes.

---

# Erros Comuns

## Erro 1

Ignorar concorrência.

---

## Erro 2

Criar transações muito longas.

---

## Erro 3

Não utilizar COMMIT.

---

## Erro 4

Pensar que deadlocks nunca acontecem.

---

# Resumo

- Concorrência ocorre quando várias transações acessam os mesmos dados.
- Isolamento controla a visibilidade dos dados.
- Bloqueios evitam conflitos.
- Deadlocks são impasses entre transações.
- COMMIT libera alterações.
- ROLLBACK desfaz alterações.

---

# Cola para Prova

- Concorrência = acesso simultâneo
- Dirty Read = leitura suja
- Non-Repeatable Read = leitura diferente
- Phantom Read = registros fantasma
- Lock = bloqueio
- Deadlock = impasse entre transações
- REPEATABLE READ = padrão do MySQL
- SERIALIZABLE = maior isolamento

---

# Questões de Revisão

## 1. O que é concorrência?

Resposta:

Acesso simultâneo aos mesmos dados.

---

## 2. O que é um bloqueio?

Resposta:

Um mecanismo utilizado para evitar conflitos entre transações.

---

## 3. O que é um deadlock?

Resposta:

Um impasse onde duas transações esperam uma pela outra.

---

## 4. Qual é o nível de isolamento padrão do MySQL?

Resposta:

REPEATABLE READ.

---

## 5. O que significa Dirty Read?

Resposta:

Leitura de dados ainda não confirmados.
