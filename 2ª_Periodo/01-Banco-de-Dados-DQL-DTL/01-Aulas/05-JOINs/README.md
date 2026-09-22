# JOINs

## Objetivo do Bloco

Este bloco apresenta os relacionamentos entre tabelas utilizando JOINs.

Os JOINs permitem combinar informações armazenadas em diferentes tabelas e são uma das partes mais importantes do SQL.

Ao final deste módulo você será capaz de:

- Entender a necessidade dos JOINs
- Utilizar INNER JOIN
- Utilizar LEFT JOIN
- Utilizar RIGHT JOIN
- Utilizar CROSS JOIN
- Encontrar registros órfãos
- Trabalhar com múltiplas tabelas
- Utilizar JOIN com GROUP BY

---

# Conteúdo do Bloco

## 21 - Por Que Usar JOIN

Arquivo:

```text
21-Por-Que-Usar-Join.md
```

Tópicos:

- Conceito de JOIN
- Separação de tabelas
- Relacionamentos
- Benefícios da normalização

---

## 22 - INNER JOIN, LEFT JOIN, RIGHT JOIN e CROSS JOIN

Arquivo:

```text
22-Inner-Left-Right-Cross.md
```

Tópicos:

- INNER JOIN
- LEFT JOIN
- RIGHT JOIN
- CROSS JOIN
- Diagramas de Venn
- Comparações

---

## 23 - Registros Órfãos

Arquivo:

```text
23-Registros-Orfaos.md
```

Tópicos:

- LEFT JOIN + IS NULL
- Auditoria de dados
- Identificação de inconsistências

---

## 24 - JOIN Avançado

Arquivo:

```text
24-Join-Avancado.md
```

Tópicos:

- JOIN com 3 tabelas
- JOIN + GROUP BY
- JOIN + Funções Agregadas
- LEFT JOIN + Agregação

---

# Visão Geral

Em bancos normalizados os dados ficam separados.

Exemplo:

CLIENTES

```text
id_cliente
nome
```

PEDIDOS

```text
id_pedido
id_cliente
```

Para obter informações completas é necessário utilizar JOIN.

---

# Tipos de JOIN

## INNER JOIN

Retorna apenas registros que possuem correspondência nas duas tabelas.

---

## LEFT JOIN

Retorna todos os registros da tabela da esquerda.

---

## RIGHT JOIN

Retorna todos os registros da tabela da direita.

---

## CROSS JOIN

Retorna todas as combinações possíveis.

---

# Resumo Rápido

| JOIN | Retorna |
|--------|----------|
| INNER JOIN | Apenas correspondências |
| LEFT JOIN | Tudo da esquerda |
| RIGHT JOIN | Tudo da direita |
| CROSS JOIN | Produto cartesiano |

---

# Situações Mais Comuns

## Mostrar cliente e pedido

```sql
INNER JOIN
```

---

## Mostrar todos os clientes mesmo sem pedidos

```sql
LEFT JOIN
```

---

## Encontrar registros órfãos

```sql
LEFT JOIN + IS NULL
```

---

## Combinar todas as possibilidades

```sql
CROSS JOIN
```

---

# Status do Bloco

| Tópico | Status |
|---------|---------|
| 21 Por Que Usar JOIN | ⬜ |
| 22 Tipos de JOIN | ⬜ |
| 23 Registros Órfãos | ⬜ |
| 24 JOIN Avançado | ⬜ |

---

# Próximo Bloco

```text
06-Desempenho-e-Objetos
```
