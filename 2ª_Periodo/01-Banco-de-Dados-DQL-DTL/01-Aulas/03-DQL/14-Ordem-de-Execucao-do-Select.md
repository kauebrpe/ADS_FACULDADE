# Ordem de Execução do SELECT

## Objetivo

Entender a ordem lógica de execução de uma consulta SQL.

Embora escrevamos o comando SELECT primeiro, o banco de dados executa as cláusulas em outra ordem.

Essa é uma das matérias que mais ajudam a entender erros envolvendo WHERE, GROUP BY e HAVING.

---

# Como Escrevemos uma Consulta

Normalmente escrevemos:

```sql
SELECT departamento,
       COUNT(*)
FROM funcionarios
WHERE salario*> 2000
GROUP BY departamento
HAVIN**COUNT(*) > 2
ORDER BY departamento
LIMIT 5;
```

---

# Como o Banco Executa

A ordem lógica de execução é:

1. FROM
2. WHERE
3. GROUP BY
4. HAVING
5. SELECT
6. ORDER BY
7. LIMIT

---

# 1. FROM

Primeiro o banco identifica a origem dos dados.

Exemplo:

```sql
FROM funcionarios
```

Nesta etapa o SGBD localiza a tabela.

---

# 2. WHERE

Após localizar os dados, o banco aplica os filtros.

Exemplo:

```sql
WHERE salario > 2000
```

Somente os registros que atendem à condição continuam na consulta.

---

# 3. GROUP BY

Depois os registros são agrupados.

Exemplo:

```sql
GROUP BY departamento
```

Agora os funcionários passam a ser organizados em grupos por departamento.

---

# 4. HAVING

Após o agrupamento, o HAVING filtra os grupos.

Exemplo:

```sql
HAVING COUNT(*) > 2
```

Somente grupos com mais*de dois registros permanecem.

---*
# 5. SELECT

Somente agora as col*nas são escolhidas.

Exemplo:

```*ql
SELECT departamento,
       COU*T(*)
```

O resultado começa a ser*montado.

---

# 6. ORDER BY

O*resultado é*ordenado.

Exemplo:

```sql*ORDER BY departamento
```

*u

```sql
ORDER BY salario DESC
``*

*--

# 7. LIMIT

Por último**o banco limita a quantidade de lin*as retornadas.

Exemplo:

```sql
L*MIT 10
```

---

# Ex*mplo Completo

Consulta:

```sql
S*LECT departamento,
       COUNT(*)*AS total
FROM funcionarios
WHERE s*lario > 2000
GROUP BY departamento*HAVING*COUNT(*) > 2
ORDER BY total DESC
L*MIT 5;
```

---

# O que Acontece *nternamente?

## Et*pa 1*
```sql
FROM funcionarios
```

Bus*a os dados.

---

## Etapa 2

```s*l
WHERE salario > 2000
```

Remove*registros indesejados.

---

## Et*pa 3

```sql
GROUP BY departamento*```

Cria os grupos.

---

## Etap* 4

```sql
HAVING COUNT(*) > 2
```*
Filtra os grupos.

---

## Etapa *

```sql
SELECT departamento,
    *  COUNT(*)
```

Define as colunas *xibidas.

---

## Etapa 6

```sql
*RDER BY total DESC
```

Ordena o r*sultado.

---

## Etapa 7

```sql
*IMIT 5
```

Exibe apenas os cinco *rimeiros registros.

---

# Por Qu* Isso é Importante?

Quando entend*mos essa ordem, fica fácil descobr*r por que algumas consultas geram *rro.

---

# Exemplo de Erro Comum*
Consulta incorreta:

```sql
SELEC* departamento,
       COUNT(*)
FRO* funcionarios
WHERE COUNT(*) > 2
G*OUP BY departamento;
```

---

# P*r Que Está Errada?

Porque o WHERE*é executado antes do GROUP BY.

Ne*se momento:

```sql
COUNT(*)
```

*inda não existe.

---

# Forma Cor*eta

```sql
SELECT departamento,
 *     COUNT(*)
FROM funcionarios
GR*UP BY departamento
HAVING COUNT(*)*> 2;
```

---

# WHERE x HAVING

#* WHERE

Filtra registros.

Exemplo*

```sql
SELECT *
FROM funcionario*
WHERE salario > 3000;
```

---

#* HAVING

Filtra grupos.

Exemplo:
*```sql
SELECT departamento,
      *AVG(salario)
FROM funcionarios
GRO*P BY departamento
HAVING AVG(salar*o) > 3000;
```

---

# Regra para *emorização

Pense assim:

- WHERE *rabalha com registros.
- GROUP BY *ria grupos.
- HAVING trabalha com *rupos.

---

# Exemplo Simples

``*sql
SELECT *
FROM alunos
WHERE ida*e >= 18
ORDER BY nome
LIMIT 10;
``*

Ordem executada:

1. FROM alunos*2. WHERE idade >= 18
3. SELECT *
4* ORDER BY nome
5. LIMIT 10

---

#*Erros Comuns

## Erro 1

Achar que*o SELECT é executado primeiro.

--*

## Erro 2

Usar funções agregada* dentro do WHERE.

---

## Erro 3
*Confundir WHERE com HAVING.

---

*# Erro 4

Não conhecer a ordem lóg*ca do SQL.

---

# Resumo

- FROM * busca os dados
- WHERE → filtra r*gistros
- GROUP BY → agrupa regist*os
- HAVING → filtra grupos
- SELE*T → escolhe colunas
- ORDER BY → o*dena resultados
- LIMIT → limita r*sultados

---

# Tabela Resumo

| *rdem | Cláusula | Função |
|------*-|----------|---------|
| 1 | FROM*| Buscar dados |
| 2 | WHERE | Fil*rar registros |
| 3 | GROUP BY | A*rupar registros |
| 4 | HAVING | F*ltrar grupos |
| 5 | SELECT | Esco*her colunas |
| 6 | ORDER BY | Ordenar |
| 7 | LIMIT | Limitar resultados |

---

# Cola para Prova

Memorize a sequência:

```text
FROM
WHERE
GROUP BY
HAVING
SELECT
ORDER BY
LIMIT
```

Frase para decorar:

"Primeiro busco os dados, depois filtro, agrupo, filtro grupos, seleciono, ordeno e limito."

---

# Questões de Revisão

## 1. Qual cláusula é executada primeiro?

Resposta:

FROM.

---

## 2. Qual cláusula filtra registros?

Resposta:

WHERE.

---

## 3. Qual cláusula filtra grupos?

Resposta:

HAVING.

---

## 4. O SELECT é executado antes ou depois do GROUP BY?

Resposta:

Depois.

---

## 5. Qual cláusula é executada por último?

Resposta:

LIMIT.
