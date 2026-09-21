# DQL (Data Query Language)

## Objetivo do Bloco

Este bloco aborda consultas SQL utilizando o comando SELECT e seus principais recursos.

Ao finalizar este módulo você será capaz de:

- Consultar dados
- Filtrar registros
- Ordenar resultados
- Trabalhar com funções agregadas
- Utilizar agrupamentos
- Criar subconsultas
- Entender a ordem de execução do SELECT

---

# Conteúdo do Bloco

## 09 - SELECT e WHERE

Arquivo:

```text
09-Select-e-Where.md
```

Tópicos:

- SELECT
- WHERE
- Operadores relacionais
- Operadores lógicos

---

## 10 - IN, NOT IN, BETWEEN, LIKE e NULL

Arquivo:

```text
10-IN-Between-Like-Null.md
```

Tópicos:

- IN
- NOT IN
- BETWEEN
- LIKE
- IS NULL
- IS NOT NULL

---

## 11 - DISTINCT, AS, ORDER BY e LIMIT

Arquivo:

```text
11-Distinct-AS-OrderBy-Limit.md
```

Tópicos:

- DISTINCT
- Alias
- ORDER BY
- LIMIT

---

## 12 - Funções Agregadas

Arquivo:

```text
12-Funcoes-Agregadas.md
```

Tópicos:

- COUNT
- SUM
- AVG
- MIN
- MAX

---

## 13 - GROUP BY e HAVING

Arquivo:

```text
13-GroupBy-Having.md
```

Tópicos:

- GROUP BY
- HAVING
- WHERE x HAVING

---

## 14 - Ordem de Execução do SELECT

Arquivo:

```text
14-Ordem-de-Execucao-do-Select.md
```

Tópicos:

- FROM
- WHERE
- GROUP BY
- HAVING
- SELECT
- ORDER BY
- LIMIT

---

## 15 - Subconsultas

Arquivo:

```text
15-Subconsultas.md
```

Tópicos:

- Subconsulta de valor único
- Subconsulta com IN
- Subconsulta no FROM

---

# Resumo Rápido

## Consulta Básica

```sql
SELECT *
FROM alunos;
```

---

## Consulta com Filtro

```sql
SELECT *
FROM alunos
WHERE idade >= 18;
```

---

## Consulta com Ordenação

```sql
SELECT *
FROM alunos
ORDER BY nome;
```

---

## Consulta com Agrupamento

```sql
SELECT cidade, COUNT(*)
FROM clientes
GROUP BY cidade;
`*`

---

#*Comandos Mais Importantes

```text
SELECT
WHERE
LIKE
IN
BETWEEN
GROUP BY
HAVING
ORDER BY
LIMIT
COUNT
SUM
AVG
MIN
MAX
```
``

# Status do Bloco

| T*pico | Status |
|---------|-------*-|
| *9 SELECT e WHERE | ⬜ |
| *0 IN, LIKE, BETWEEN, NULL | ⬜ |
* *1 DISTINCT, AS, ORDER BY, LIMIT*| ⬜ |
| *2 Funções Agregadas | ⬜ |
| *3 GROUP BY e HAVING | ⬜ |
| *4 Ordem do SELECT*| ⬜ |
| *5 Subconsultas | ⬜ |

---

* Próximo Bloco*
Após finalizar o DQL:
```text
04-Modelagem
```
