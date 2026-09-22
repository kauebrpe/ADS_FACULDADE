# GROUP BY e HAVING

## Objetivo

Aprender a agrupar registros utilizando o comando GROUP BY e filtrar grupos utilizando o comando HAVING.

Esses comandos são muito utilizados em relatórios, estatísticas e análises de dados.

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

# Sintaxe Básica

```sql
SELECT coluna,
       funcao_agregada()
FROM tabela
GROUP BY coluna;
```

---

# Exemplo Simples

Tabela:

| departamento |
|-------------|
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

* GROUP BY com COUNT()

```*ql*SELECT departamento,
       COUNT**) AS quantidade
FROM funcionarios*GROUP BY departamento;
```

---

* GROUP BY com AVG*)

```sql
SELECT departamento,
   *   AVG(salario) AS media_salarial
*ROM funcionarios
GROUP BY departam*nto;
```

*--

# GROUP BY com SUM()

```sql*SELECT departamento,
       SUM*salario) AS folha_pag*mento
FROM funcionarios
GROUP BY d*partamento;
```

---

# GROUP BY c*m MIN() e MAX()

```sql
SELECT dep*rtamento,
       MIN*salario) AS menor_salario,
       *AX(salario) AS maior_salario
FROM*funcionarios*GROUP BY departamento;
```

*--

# Exemplo Completo

Tabela:

|*nome | departamento | salario |
|-*----*-------------|---------|
| João*| TI | 3000 |
| Maria | TI | 4000 *
|*Pedro | RH | 2500 |
| Ana*| RH | 3500 |

Consulta:

```*ql
SELECT departamento,
       COU*T**) AS total,
       AVG*salario) AS media
FROM funcionario*
GROUP BY departamento;
```

Resul*ado:

| departamento*| total | media |
|-------------|-*-----|-------|
| TI | 2 | 3500 |
|*RH*| 2 | 3000 |

---

* Regra de Ouro do GROUP BY

Toda c*luna*que aparece*no SELECT e não está dentro de uma*função agregada deve aparecer no G*OUP BY.

---

## Exemplo Incorreto*
```sql
SELECT departamento,
     * nome,
       COUNT(*)
FROM funcio*arios
GROUP BY departamento;
```

*--

## Exemplo Correto

```sql
SEL*CT departamento,
       COUNT(*)
F*OM funcionarios
GROUP*BY departamento;
```

*--

# O que é HAVING?

O HAV*NG é utilizado para filtrar grupos*criados pelo GROUP BY.

Func*ona de*forma semelhante ao WHERE, mas*atua após o agrupamento.

*--

# Sintaxe

```sql*SELECT coluna,
       COUNT(*)
FROM tabela
GROUP BY coluna
HAVING condicao;
```

---

# Exemplo

```sql
SELECT departamento,
       COUNT(*) AS total
FROM funcionarios
GROUP*BY departamento
HAVING*COUNT(*) > 2;
```

Resultado:

Mostra apenas os departamentos que possuem mais de 2 funcionários.

---

# Diferença Entre WHERE e HAVING

## WHERE

Filtra registros antes do agrupamento.

```sql
SELECT *
FROM funcionarios
WHERE salario > 3000;
```

---

## HAVING

Filtra grupos após o agrupamento.

```sql
SELECT departamento,
       AVG(salario)
FROM funcionarios
GROUP BY departamento
HAVING AVG(salario) > 3000;
```

---

# Ordem de Execução

```text
FROM
WHERE
GROUP BY
HAVING
SELECT
ORDER BY
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

O que acontece:

1. WHERE filtra os registros.
2. GROUP BY cria os grupos.
3. AVG calcula a média.
4. HAVING filtra os grupos.
5. O resultado é exibido.

---

# Relatório de Clientes por Cidade

```sql
SELECT cidade,
       COUNT(*) AS total_clientes
FROM clientes*GROUP BY cidade;
```

Resultado:

* cidade*| total_clientes |
|---------|----*----------|
| Recife | 10 |
| Ol*nda | 6 |
| Car*aru | 4 |

*--

# Relatório de Faturamento

``*sql
SELECT categoria,
      *SUM(valor) AS faturamento
FROM ven*as
GROUP BY*categoria;
```

*--

# Relatório de Salário Médio

*``sql
SELECT departamento,
       *VG(salario) AS media_salarial
FROM*funcionarios
GROUP BY departamento*
```

---

# Erros Comuns

## Er*o 1

*squecer o GROUP BY.

---

*# Erro 2

Usar*HAVING para*filtrar registros comuns.

Nesses*casos utilize WHERE.

---

## Erro*3

Misturar col*nas e agreg*ções sem respeitar a*regra do GROUP BY.

---

*# Erro 4

Tentar*utilizar*funções agregadas dentro*do WHERE.

Incorreto:

```sql*SELECT departamento,
       COUNT(*)
FROM funcionarios
WHERE COUNT(*)*> 2
GROUP BY*departamento;
```

Correto:

```sq*
SELECT departamento,
       COUNT(*)
FROM funcionarios
GROUP BY departamento
HAVING COUNT(*) > 2;
```

---

# Resumo

*# GROUP BY

Agrupa registros.

---*
*# HAVING

Filtra grupos.

---

## *HERE

Filtra registros.

---

* Tabela Comparativa

* Com*ndo | Atua Sobre |
|----------*------------|
| WHERE | Registros *
| GROUP BY | Grupos |
| HAV*NG | Grupos*|

*--

# Cola para Prova

```text
GRO*P BY = Agrupar

HAVING = Filtrar g*upos

WHERE = Filtrar registros*
WHERE acontece antes do GROUP BY
*HAVING acontece depois do GROUP BY*```

*--

# Questões de Revisão

## *. Para que*serve o GROUP BY?

Resposta:

Agru*ar registros que possuem valores i*uais.

---

## 2. Para que*serve o HAVING?

Resposta:

Filtra* grupos após o agrupamento.

---

*# 3. Qual a*diferença entre WHERE e HAVING?

R*sposta:

WHERE filtra registros.

*AVING filtra grupos.

---

## 4. Q*al comando*é executado primeiro?

Resposta:

*HERE.

---

## 5. Como descobrir q*antos funcionários existem em cada*departamento?

Resposta:

Utilizan*o GROUP BY com COUNT().
````*
