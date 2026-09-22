# Encontrando Registros Órfãos com LEFT JOIN e IS NULL

## Objetivo

Aprender a identificar registros órfãos utilizando LEFT JOIN e IS NULL.

Essa técnica é muito utilizada para:

- Auditoria de dados
- Verificação de consistência
- Relatórios administrativos
- Correção de erros em bancos de dados

---

# O que é um Registro Órfão?

Um registro órfão é um registro que deveria possuir relacionamento com outro registro, mas não possui.

Em outras palavras:

```text
Existe em uma tabela
mas não possui correspondente na outra.
```

---

# Exemplo

Tabela CLIENTES

| id_cliente | nome |
|------------|------|
| 1 | João |
| 2 | Maria |
| 3 | Pedro |

---

Tabela PEDIDOS

| id_pedido | id_cliente |
|-----------|------------|
| 101 | 1 |
| 102 | 2 |

---

Observe:

```text
Pedro não possui pedido.
```

---

# Por Que Isso é Importante?

Dependendo da regra de negócio, isso pode indicar:

- Dados incompletos
- Erros de cadastro
- Informações esquecidas
- Problemas de integração

---

# Técnica Mais Utilizada

A forma mais comum de encontrar registros órfãos é:

```sql
LEFT JOIN + IS NULL
```

---

# Como Funciona?

## Etapa 1

Trazer todos os registros da tabela principal.

```sql
LEFT JOIN
```

---

## Etapa 2

Procurar os que não encontraram correspondência.

```sql
IS NULL
```

---

# Exemplo Prático

```sql
SELECT c.*
FROM clientes c
LEFT JOIN pedidos p
ON c.id_cliente = p.id_cliente
WHERE p.id_cliente IS NULL;
```

---

# Resultado

| id_cliente | nome |
|------------|------|
| 3 | Pedro |

---

# O Que Aconteceu?

Pedro apareceu porque:

```text
Existe em CLIENTES
mas não existe em PEDIDOS
```

---

# Explicação Passo a Passo

Primeiro:

```sql
LEFT JOIN
```

gera:

| nome | id_pedido |
|------|-----------|
| João | 101 |
| Maria | 102 |
| Pedro | NULL |

---

Depois:

```sql
WHERE p.id_cliente IS NULL
```

mantém apenas:

| nome |
|------|
| Pedro |

---

# Outro Exemplo

Tabela DEPARTAMENTOS

| id | nome |
|----|------|
| 1 | TI |
| 2 | RH |
| 3 | Financeiro |

---

Tabela FUNCIONARIOS

| nome | departamento_id |
|------|----------------|
| João | 1 |
| Maria | 2 |

---

Consulta:

```sql
SELECT d.*
FROM departamentos d
LEFT JOIN funcionarios f
ON d.id = f.departamento_id
WHERE f.departamento_id IS NULL;
```

---

# Resultado

| id | nome |
|----|------------|
| 3 | Financeiro |

---

# O Que Significa?

O departamento Financeiro não possui funcionários cadastrados.

---

# Encontrando Produtos Nunca Vendidos

Produtos:

| id | produto |
|----|---------|
| 1 | Notebook |
| 2 | Mouse |
| 3 | Teclado |

---

Itens_Pedido:

| produto_id |
|-----------|
| 1 |
| 2 |

---

Consulta:

```sql
SELECT p.*
FROM produtos p
LEFT JOIN itens_pedido i
ON p.id = i.produto_id
WHERE i.produto_id IS NULL;
```

---

# Resultado

| produto |
|----------|
| Teclado |

---

# Regra para Memorizar

Quando quiser descobrir:

```text
Quem NÃO tem relacionamento
```

utilize:

```sql
LEFT JOIN
```

mais

```sql
IS NULL
```

---

# Casos de Uso Reais

## Clientes sem pedidos

```sql
LEFT JOIN + IS NULL
```

---

## Produtos nunca vendidos

```sql
LEFT JOIN + IS NULL
```

---

## Funcionários sem departamento

```sql
LEFT JOIN + IS NULL
```

---

## Departamentos sem funcionários

```sql
LEFT JOIN + IS NULL
```

---

# Por Que LEFT JOIN?

Porque ele mantém todos os registros da tabela principal.

O INNER JOIN não funciona para esse objetivo.

---

# Exemplo Incorreto

```sql
SELECT *
FROM clientes c
INNER JOIN pedidos p
ON c.id_cliente = p.id_cliente;
```

---

# Problema

Pedro não aparece.

Logo não conseguimos descobrir quem está sem pedido.

---

# Exemplo Correto

```sql
SELECT *
FROM clientes c
LEFT JOIN pedidos p
ON c.id_cliente = p.id_cliente
WHERE p.id_cliente IS NULL;
```

---

# Erros Comuns

## Erro 1

Utilizar INNER JOIN.

---

## Erro 2

Esquecer o IS NULL.

---

## Erro 3

Verificar a coluna da tabela errada.

---

## Erro 4

Não entender qual é a tabela principal.

---

# Resumo

- Registro órfão = sem relacionamento
- LEFT JOIN mantém todos os registros da esquerda
- IS NULL identifica ausência de relacionamento
- Técnica muito utilizada em auditorias

---

# Tabela Resumo

| Objetivo | Solução |
|-----------|----------|
| Cliente sem pedido | LEFT JOIN + IS NULL |
| Produto sem venda | LEFT JOIN + IS NULL |
| Funcionário sem departamento | LEFT JOIN + IS NULL |
| Departamento sem funcionário | LEFT JOIN + IS NULL |

---

# Cola para Prova

- Registro órfão = sem correspondente
- LEFT JOIN mostra todos os registros da esquerda
- IS NULL identifica ausência de relacionamento
- INNER JOIN não encontra órfãos
- LEFT JOIN + IS NULL é o padrão de mercado

---

# Questões de Revisão

## 1. O que é um registro órfão?

Resposta:

Um registro que não possui correspondente em outra tabela.

---

## 2. Qual JOIN normalmente é utilizado para encontrar órfãos?

Resposta:

LEFT JOIN.

---

## 3. Qual condição normalmente acompanha o LEFT JOIN?

Resposta:

IS NULL.

---

## 4. Por que INNER JOIN não é indicado?

Resposta:

Porque ele remove registros sem correspondência.

---

## 5. Qual técnica é mais utilizada para encontrar órfãos?

Resposta:

LEFT JOIN + IS NULL.
