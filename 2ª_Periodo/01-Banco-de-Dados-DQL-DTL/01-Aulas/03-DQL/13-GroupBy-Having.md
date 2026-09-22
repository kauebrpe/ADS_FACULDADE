# GROUP BY e HAVING

## Objetivo

Aprender a agrupar registros utilizando o GROUP BY e filtrar grupos utilizando o HAVING.

Esses comandos são fundamentais para relatórios, estatísticas e análises de dados.

---

# O que é GROUP BY?

O GROUP BY agrupa registros que possuem valores iguais em uma ou mais colunas.

Após o agrupamento, podemos utilizar funções agregadas como:

- COUNT()
- SUM()
- AVG()
- MIN()
- MAX()

---

# Sintaxe

```sql
SELECT coluna, funcao_agregada()
FROM tabela
GROUP BY coluna;
```

---

# Exemplo Básico

Tabela:

| departamento |
|------------|
| TI |
| TI |
| RH |
| RH |
| RH |

Consulta:

```sql
SELECT departamento,
       COUNT(*) AS total
FROM funcionarios
GROUP*BY departamento;
```

Resultado:

* departamento | total |
|---------*---|-------|
| TI*| 2 |
| RH | 3 |

---

* Utilizando COUNT()

```sql*SELECT departamento,
*      COUNT(*) AS quantidade
FROM *uncionarios
GROUP BY departamento;*```

---

# Utilizando AVG()

```s*l
SELECT departamento,
       AVG*salario) AS media_salarial
FROM*funcionarios
GROUP BY departamento*
```

*--

# Utilizando SUM()

```sql*SELECT departamento,
       SUM*salario) AS folha_pagamento*FROM funcionarios
GROUP BY departa*ento;
```

---

# Utilizando MIN*) e MAX()

```sql*SELECT departamento,
*      MIN*salario) AS menor_salario,
       *AX(salario) AS maior_salario
FROM *uncionarios
GROUP BY departamento;*```

---

# Exemplo Completo

Tabe*a:

| nome | departamento | salari* |
|--------*-------------|---------|
| João*| TI | 3000 |
| Maria*| TI | 4000 |
| Pedro*| RH | 2500 |
* Ana*| RH | 3500 |

Consulta:

```*ql
SELECT departamento,
       COU*T(*) AS total,
       AVG*salario) AS media
FROM funcionario*
GROUP BY*departamento;
```

Resultado:

| d*partamento | total | media |
|----*--------|--------|---------|
| TI * * | 3500 |
| RH | 2 | 3000 |

---

**Regra de Ouro do GROUP BY

Toda co*una que aparece no SELECT e não es*á dentro de uma função agregada de*e aparecer no GROUP BY.

---

*# Errado

```sql*SELECT departamento,
       nome,
*      COUNT(*)
FROM funcionarios
G*OUP BY departamento;
```

*--

## Correto

```sql
SELECT depa*tamento,
       COUNT(*)
FROM func*onarios
GROUP BY departamento;
``*

---

# O que é HAVING?

HAVING*é utilizado para filtrar grupos cr*ados pelo GROUP BY.

É semelhante*ao WHERE* porém trabalha*após o agrupamento.

---

# Sintaxe

```sql
SELECT coluna,
       COUNT(*)
FROM tabela
GROUP BY coluna
HAVING condição;
```

---

# Exemplo

```sql
SELECT departamento,
       COUNT(*) AS total
FROM funcionarios
GROUP*BY departamento
HAVING COUNT(*) > 2;
```

---

Resultado:

Somente departamentos com mais de 2 funcionários.

---

# WHERE x HAVING

Essa diferença costuma cair em prova.

---

## WHERE

Filtra registros antes do agrupamento.

```sql
SELECT *
FROM funcionarios
WHERE salario > 3000;
```

---

## HAVING

Filtra grupos depois do agrupamento.

```sql
SELECT departamento,
       AVG(salario)
FROM funcionarios
GROUP BY departamento
HAVING AVG(salario) > 3000;
```

---

# Fluxo de Execução

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

# Exemplo com WHERE e HAVING

```sql
SELECT departamento,
       AVG(salario) AS media
FROM funcionarios
WHERE salario > 2000
GROUP BY departamento
HAVING AVG(salario) > 3000;
```

---

## O que acontece?

1. WHERE remove salários menores que 2000.
2. GROUP BY cria os grupos.
3. AVG calcula a média.
4. HAVING filtra os grupos.
5. Resultado é exibido.

---

# Exemplo de Relatório

```sql
SELECT cidade,
       COUNT(*) AS total_clientes
FROM clientes
*ROUP BY cidade;
```

---

Resultad*:

| cidade | total_clientes |
|--*------|---------|
| Recife | 10 |
* Ol*nda | 6 |
| Car*aru | 4 |

---

* Exemplo com Soma

```sql
SELECT c*tegoria,
       SUM*valor) AS faturamento
FROM vendas*GROUP BY*categoria;
*``

---

# Exemplo com Média

```s*l
SELECT departamento,
       AVG*salario) AS media_salarial
FROM fu*cionarios
GROUP BY*departamento;
```

*--

# Erros Comuns

*# Erro 1

Esqu*cer o GROUP BY.

---

*# Erro 2

Util*zar*HAV*NG sem agrupamento.

---

## Erro *

Misturar*colunas com*funções agregadas de forma incorre*a.

---

## Erro 4

Util*zar*WHERE para filtrar agregações.

--*

## Errado

```sql
SELECT departa*ento,
       COUNT(*)
FROM funcion*rios
GROUP BY departamento
WHERE C*UNT(*) > 2;
```

*--

## Correto

```sql
SELECT depa*tamento,
       COUNT(*)
FROM funcionarios
GROUP BY departamento
HAVING COUNT(*) > 2;
```

*--

# Resumo

## GROUP BY

Agrupa*registros.

---

## HAVING

Filtra*grupos.

---

## WHERE

Filtra reg*stros.

---

* Tabela Comparativa

| Com*ndo | Trabalha com |
|----------**---------|
| WHERE | Registros |
|*GROUP BY | Grupos |
| HAV*NG | Grupos |

---

# Cola para Pr*va

```*ext
GROUP BY
→ Agr*par

HAVING
→ Filtrar grupos

WHER**→ Filtrar registros

WHERE*ocorre*antes do GROUP BY

HAVING ocorre d*pois do GROUP BY
```

---

# Mapa *ental

```text
SELECT
│
├── WHERE
*
├── GROUP BY
│
├──*HAVING
│*├── ORDER BY
│*└── LIMIT
```

*--

#*Questões de Revisão*
## 1

Para que serve o GROUP BY?
*Resposta:

Agrupar registros com v*lores iguais.

---

## 2

Para que*serve o HAVING?

Resposta:

Filtra* grupos após o agrupamento.

---

*# 3

Qual a diferença entre WHERE * HAVING?

Resposta:

WHERE filtra *egistros.

HAVING filtra grupos.

*--

## 4

Qual comando vem primeir* na execução?

Resposta:

WHERE.

*--

## 5

Qual comando é utilizado*para saber quantos funcionários ex*stem em cada departamento?

Respos*a:

GROUP BY com COUNT().
````*
