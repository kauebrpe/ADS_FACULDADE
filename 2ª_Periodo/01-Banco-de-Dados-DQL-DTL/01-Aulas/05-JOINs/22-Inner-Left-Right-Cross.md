# INNER JOIN, LEFT JOIN, RIGHT JOIN e CROSS JOIN

## Objetivo

Aprender os principais tipos de JOIN utilizados em bancos de dados relacionais.

Ao final deste tópico você será capaz de:

- Entender como funcionam os JOINs
- Identificar quando utilizar cada JOIN
- Interpretar resultados de consultas com múltiplas tabelas
- Entender os diagramas de Venn utilizados em provas

---

# Revisão: O que é JOIN?

JOIN é um mecanismo utilizado para combinar dados de duas ou mais tabelas através de um relacionamento.

Os JOINs normalmente utilizam:

- PRIMARY KEY
- FOREIGN KEY

para conectar tabelas relacionadas.

---

# Base Utilizada nos Exemplos

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

- João possui pedido
- Maria possui pedido
- Pedro não possui pedido

---

# INNER JOIN

## O que faz?

Retorna apenas os registros que possuem correspondência nas duas tabelas.

---

## Sintaxe

```sql
SELECT *
FROM clientes
INNER JOIN pedidos
ON clientes.id_cliente = pedidos.id_cliente;
```

---

## Resultado

| nome | id_pedido |
|------|-----------|
| João | 101 |
| Maria | 102 |

---

## O que aconteceu?

Pedro não apareceu.

Motivo:

```text
Não existe correspondência para Pedro na tabela PEDIDOS.
```

---

## Diagrama de Venn

```text
CLIENTES ∩ PEDIDOS
```

Somente a interseção.

---

## Quando Utilizar?

Quando queremos apenas registros que existem nas duas tabelas.

Exemplo:

```text
Clientes que possuem pedidos.
```

---

# LEFT JOIN

## O que faz?

Retorna todos os registros da tabela da esquerda.

Mesmo que não exista correspondência na tabela da direita.

---

## Sintaxe

```sql
SELECT *
FROM clientes
LEFT JOIN pedidos
ON clientes.id_cliente = pedidos.id_cliente;
```

---

## Resultado

| nome | id_pedido |
|------|-----------|
| João | 101 |
| Maria | 102 |
| Pedro | NULL |

---

## O que aconteceu?

Pedro apareceu.

Como ele não possui pedido:

```text
id_pedido = NULL
```

---

## Diagrama de Venn

```text
Tudo da esquerda
+
Interseção
```

---

## Quando Utilizar?

Quando queremos mostrar todos os registros da tabela principal.

Exemplo:

```text
Todos os clientes, mesmo sem pedidos.
```

---

# RIGHT JOIN

## O que faz?

Retorna todos os registros da tabela da direita.

Mesmo que não exista correspondência na tabela da esquerda.

---

## Exemplo

Tabela CLIENTES

| id_cliente | nome |
|------------|------|
| 1 | João |
| 2 | Maria |

---

Tabela PEDIDOS

| id_pedido | id_cliente |
|-----------|------------|
| 101 | 1 |
| 102 | 2 |
| 103 | 99 |

---

## Consulta

```sql
SELECT *
FROM clientes
RIGHT JOIN pedidos
ON clientes.id_cliente = pedidos.id_cliente;
```

---

## Resultado

| nome | id_pedido |
|------|-----------|
| João | 101 |
| Maria | 102 |
| NULL | 103 |

---

## O que aconteceu?

O pedido 103 apareceu mesmo sem cliente correspondente.

---

## Diagrama de Venn

```text
Tudo da direita
+
Interseção
```

---

## Quando Utilizar?

Quando a tabela mais importante está posicionada à direita do JOIN.

---

# LEFT JOIN x RIGHT JOIN

Observe:

```sql
SELECT *
FROM clientes
RIGHT JOIN pedidos
ON clientes.id_cliente = pedidos.id_cliente;
```

Pode ser reescrito como:

```sql
SELECT *
FROM pedidos
LEFT JOIN clientes
ON clientes.id_cliente = pedidos.id_cliente;
```

---

## Boa Prática

Na maioria dos projetos, equipes preferem utilizar LEFT JOIN e reorganizar a consulta quando necessário.

Isso torna o código mais padronizado.

---

# CROSS JOIN

## O que faz?

Retorna todas as combinações possíveis entre duas tabelas.

Também é chamado de produto cartesiano.

---

## Sintaxe

```sql
SELECT *
FROM clientes
CROSS JOIN pedidos;
```

---

## Exemplo

Tabela CLIENTES

| nome |
|------|
| João |
| Maria |

---

Tabela PEDIDOS

| id_pedido |
|-----------|
| 101 |
| 102 |

---

## Resultado

| nome | id_pedido |
|------|-----------|
| João | 101 |
| João | 102 |
| Maria | 101 |
| Maria | 102 |

---

## Como Funciona?

Cada linha da primeira tabela é combinada com todas as linhas da segunda.

---

## Exemplo Matemático

```text
2 clientes
×
2 pedidos

=
4 combinações
```

---

## Cuidado

Se existirem:

```text
100 clientes
```

e

```text
100 pedidos
```

o resultado será:

```text
10.000 linhas
```

---

## Quando Utilizar?

- Simulações
- Matrizes
- Calendários
- Geração de combinações

---

# E o FULL OUTER JOIN?

Alguns bancos possuem:

```sql
FULL OUTER JOIN
```

Ele retorna:

```text
Tudo da esquerda
+
Tudo da direita
```

---

## Atenção

O MySQL não possui FULL OUTER JOIN nativo.

---

# Comparação dos JOINs

| JOIN | Resultado |
|--------|-----------|
| INNER JOIN | Apenas correspondências |
| LEFT JOIN | Tudo da esquerda |
| RIGHT JOIN | Tudo da direita |
| CROSS JOIN | Todas as combinações |

---

# Exemplos do Mundo Real

## Loja Virtual

Mostrar pedidos e seus clientes:

```sql
INNER JOIN
```

---

## Mostrar todos os clientes

Mesmo sem pedidos:

```sql
LEFT JOIN
```

---

## Auditoria de Dados

Verificar pedidos sem cliente:

```sql
RIGHT JOIN
```

ou

```sql
LEFT JOIN invertido
```

---

## Simulações

Gerar todas as combinações:

```sql
CROSS JOIN
```

---

# Boas Práticas

✅ Utilizar aliases

```sql
SELECT c.nome,
       p.id_pedido
FROM clientes c
INNER JOIN pedidos p
ON c.id_cliente = p.id_cliente;
```

---

✅ Sempre utilizar a cláusula ON.

---

✅ Utilizar nomes claros para tabelas.

---

✅ Evitar CROSS JOIN sem necessidade.

---

# Erros Comuns

## Erro 1

Esquecer a cláusula ON.

---

## Erro 2

Utilizar INNER JOIN quando deveria usar LEFT JOIN.

---

## Erro 3

Não entender qual tabela está à esquerda ou à direita.

---

## Erro 4

Executar CROSS JOIN sem perceber o tamanho do resultado.

---

# Resumo

- INNER JOIN → Apenas correspondências
- LEFT JOIN → Tudo da esquerda
- RIGHT JOIN → Tudo da direita
- CROSS JOIN → Todas as combinações
- ON → Define a condição do relacionamento

---

# Cola para Prova

- INNER JOIN = interseção
- LEFT JOIN = tudo da esquerda
- RIGHT JOIN = tudo da direita
- CROSS JOIN = produto cartesiano
- ON = condição da junção
- LEFT JOIN é o mais utilizado na prática

---

# Questões de Revisão

## 1. Qual JOIN retorna apenas registros relacionados?

Resposta:

INNER JOIN.

---

## 2. Qual JOIN retorna todos os registros da tabela da esquerda?

Resposta:

LEFT JOIN.

---

## 3. Qual JOIN retorna todos os registros da tabela da direita?

Resposta:

RIGHT JOIN.

---

## 4. Qual JOIN gera todas as combinações possíveis?

Resposta:

CROSS JOIN.

---

## 5. Qual cláusula define a condição da junção?

Resposta:

ON.

---

## 6. O MySQL possui FULL OUTER JOIN nativo?

Resposta:

Não.

---

## 7. Qual JOIN é mais utilizado em sistemas reais?

Resposta:

LEFT JOIN e INNER JOIN.
