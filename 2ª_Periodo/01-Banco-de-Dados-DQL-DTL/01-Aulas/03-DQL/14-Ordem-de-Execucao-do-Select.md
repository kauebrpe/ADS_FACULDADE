# Ordem de Execução do SELECT

## Objetivo

Compreender a ordem lógica de execução de uma consulta SQL.

Embora o comando SELECT seja escrito de uma forma, o SGBD executa suas cláusulas em outra ordem.

Entender essa sequência ajuda a evitar erros e facilita o aprendizado de GROUP BY, HAVING e Subconsultas.

---

# Como Escrevemos uma Consulta?

Normalmente escrevemos:

```sql
SELECT coluna
FROM tabela
WHERE condição
GROUP BY coluna
HAVING condição
ORDER BY coluna
LIMIT 10;
```

---

# Como o Banco Executa?

O SGBD não executa na ordem em que escrevemos.

A ordem lógica de execução é:

```text
1. FROM
2. WHERE
3. GROUP BY
4. HAVING
5. SELECT
6. ORDER BY
7. LIMIT
```

---

# Ordem Completa

```text
FROM
↓
WHERE
↓
GROUP BY
↓
HAVING
↓
SELECT
↓
ORDER BY
↓
LIMIT
```

---

# 1. FROM

Primeiro o banco determina de onde os dados serão obtidos.

Exemplo:

```sql
FROM funcionarios
```

O SGBD localiza a tabela.

---

# 2. WHERE

Depois são aplicados os filtros.

Exemplo:

```sql
WHERE salario > 3000
```

Somente os registros que atendem à condição permanecem.

---

# 3. GROUP BY

Os registros restantes são agrupados.

Exemplo:

```sql
GROUP BY departamento
```

Os funcionários passam a ser agrupados por departamento.

---

# 4. HAVING

O HAVING filtra os grupos criados pelo GROUP BY.

Exemplo:

```sql
HAVING COUNT(*) > 5
```

Mant*m apenas grupos com mais de 5 regi*tros.

---

# 5. SELECT

Somente*agora*as colunas são*selecionadas.

*xemplo:

```sql*SELECT departamento,
       COUNT(*)
```

O*banco monta o resultado final.

--*

# 6. ORDER BY

Em*seguida, o resultado é ordenado.

*xemplo*

```sql*ORDER BY departamento
```

---

# *. LIMIT

*or último,*limita a quantidade de linhas reto*nadas.

Exemplo:

```sql*LIMIT 10
```

*--

# Exemplo Completo

Consulta:
*```sql
SELECT departamento,
       COUNT(*) AS total
FROM funcionarios
WHERE salario > 2000
GROUP BY departamento
HAVING COUNT(*) > 2
ORDER BY total DESC
LIMIT 5;
```

---

# O que acontece internamente?

## Etapa 1

```sql
FROM funcionarios
```

Seleciona a tabela.

---

## Etapa 2

```sql
WHERE salario > 2000
```

Remove quem recebe menos de 2000.

---

## Etapa 3

```sql
GROUP BY departamento
```

Agrupa por departamento.

---

## Etapa 4

```sql
HAVING COUNT(*) > 2
```

*antém apenas*grupos com mais de 2 pessoas.

---*
## Etapa 5

```sql
SELECT departa*ento,
       COUNT(*)
```

*efine as*colunas exibidas.

---

*# Etapa *

```sql
ORDER BY total DESC
```

*rdena do maior para o menor.

---
*## Etapa 7

```sql
*IMIT 5
```

*x*be somente os 5 primeiros registro*.

---

* Por que Isso é Importante?

Com*reender*a ordem de execução explica vários*erros comuns.

---

# Exemplo de E*ro

Tentativa:

```sql*SELECT departamento,
       COUNT(*)
FROM funcionarios
WHERE COUNT(*) > 2
GROUP BY*departamento;
```

*--

# Por que Está Errado?

Porque*o WHERE é executado antes do GROUP*BY.

Nesse momento:

```text*COUNT(*) ainda não existe.
```

*--

# Forma Correta

```sql
SELECT*departamento,
      *COUNT(*)
FROM funcionarios
GROUP B* departamento
HAVING COUNT(*) > 2;*```

*--

# Regra para*Provas*
Memorize:

```text*WHERE filtra registros

HAVING*filtra grupos
```

*--

# Outro Exemplo

*onsulta:

```sql*SELECT *
FROM alunos
WHERE idade*>= 18
ORDER BY*nome
*IMIT 10;
```

*--

# Execução

```text*FROM*alunos
↓
WHERE idade*>= 18
↓
SELECT *
↓*ORDER BY nome
↓
LIMIT *0
```

*--

# Erros Comuns

## Er*o 1

Achar*que SELECT*é executado primeiro.

Não*é.

---

## Erro 2

Util*zar*funções agregadas dentro do WHERE.*
---

*# Erro 3

Confundir*WHERE com HAVING.

---

*# Erro 4

*squ*cer a sequência lógica da*execução.

---

# Resumo

## FROM*
Origem dos dados.

---

*# WHERE

Filtro de registros.

---*
*# GROUP BY

Agrupamento.

---

*# HAVING

Filtro de grupos.

---

*# SELECT

Seleciona colunas.

---
**# ORDER BY*
Ordenação.

---

## LIMIT

Limita*ão dos resultados.

---

# Tabela *esumo

| Ordem | Cláusula | Função*|
|--------|----------|---------|
* * | FROM | Origem dos dados |
| * | WHERE | Filtra registros |
| * | GROUP BY | Agrupa registros |
|** | HAVING | Filtra grupos |
| * | SELECT | Seleciona colunas |
|*6*| ORDER BY | Ordena |
|*7 | LIMIT | Limita resultados |

-*-

# Cola para Prova

```text
FROM*WHERE
GROUP BY
HAVING
SELECT*ORDER*BY
LIMIT
```

*rase para decorar:

"Prime*ro busco os*dados, depois filtro, agrupo, filt*o grupos, seleciono, ordeno e limi*o."

---

* Questões de Revisão

## 1. Qual c*áus*la é executada primeiro?

Resposta*

```text*FROM
```

---

## 2. Qual cláus*la filtra registros?

Resposta:

`*`text
WHERE
```

*--

## 3. Qual cláusula filtra gru*os?

Resposta:

```text*HAVING
```

---

## 4. O SELECT*é executado antes*ou depois do GROUP BY?

Resposta:
*Depois.

---

## 5. Qual cláus*la é*executada por último?

Resposta:

*``text
LIMIT
```
``*
