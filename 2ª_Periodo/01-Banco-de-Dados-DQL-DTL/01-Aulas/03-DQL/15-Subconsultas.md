
# Subconsultas (Subqueries)

## Objetivo

Aprender a utilizar consultas dentro de outras consultas.

As subconsultas permitem resolver problemas mais complexos utilizando o resultado de uma consulta como entrada para outra.

---

# O que é uma Subconsulta?

Uma subconsulta é uma consulta SQL dentro de outra consulta SQL.

Ela pode ser utilizada em:

- WHERE
- IN
- FROM

---

# Estrutura Básica

```sql
SELECT coluna
FROM tabela
WHERE coluna > (
    SELECT valor
    FROM tabela
);
```

A consulta interna é executada primeiro.

Seu resultado é utilizado pela consulta externa.

---

# Subconsulta Retornando um Único Valor

## Exemplo

Listar funcionários que ganham acima da média salarial da empresa.

```sql
SELECT nome, salario
FROM funcionarios
WHERE salario > (
    SELECT AVG(salario)
    FROM funcionarios
);
```

---

## O que acontece?

Primeiro:

```sql
SELECT AVG(salario)
FROM funcionarios;
```

Suponha resultado:

```text
3500
```

Depois:

```sql
SELECT nome, salario
FROM funcionarios
WHERE salario > 3500;
```

---

# Subconsulta Utilizando MAX()

Retornar o funcionário com maior salário.

```sql
SELECT nome, salario
FROM funcionarios
WHERE salario = (
    SELECT MAX(salario)
    FROM funcionarios
);
```

---

# Subconsulta com IN

Utilizada quando a consulta interna retorna vários valores.

---

## Exemplo

Listar funcionários de departamentos que possuem mais de 5 funcionários.

```sql
SELECT nome
FROM funcionarios
WHERE departamento_id IN (
    SELECT departamento_id
    FROM funcionarios
    GROUP BY departamento_id
    HAVING COUNT(*) > 5
);
```

---

#*Entendendo a Consulta

*rimeiro:

```sql*SELECT departamento_id
FROM funcio*arios
GROUP BY departamento_id
HAV*NG COUNT(*) > 5;
```

*esultado:

```text
1
3
5
``*

Depois:

```sql*SELECT*nome
FROM funcionarios
WHERE depar*amento_id IN (1,3,5);
```

*--

# Subconsulta com NOT IN

Reto*na*registros que não pertencem ao res*ltado da subconsulta.

---

## Exe*plo

```sql*SELECT nome
FROM funcionarios
WHER* departamento_id NOT IN (
    SELE*T id
    FROM departamentos
    WH*RE cidade = 'Recife'
);
```

*--

# Subconsulta no FROM

Também *hamada*de tabela derivada.

A subconsulta*funciona como uma tabela temporári*.

---

## Exemplo

```sql
SELECT *
FROM (
    SELECT departamento_id*
           AVG(salario) AS media
*   FROM funcionarios
    GROUP BY *epartamento_id
) AS resumo
WHERE m*dia > 4000;
```

---

# Por Que o *lias é Obrigatório?

No MySQL toda*tabela derivada precisa possuir no*e.

Por isso:

```sql
AS resumo
``*

é obrigatório.

---

# Exemplo C*mpleto

Tabela:

| nome | departam*nto | salario |
|---------|-------*----|---------|
| João | TI | 3000*|
| Maria | TI | 5000 |
| Pedro | *H | 2500 |
| Ana | RH | 3500 |

--*

Consulta:

```sql
SELECT nome, s*lario
FROM funcionarios
WHERE sala*io > (
    SELECT AVG(salario)
   *FROM funcionarios
);
```

---

Res*ltado

Salário médio:

```text
350*
```

Funcionários retornados:

``*text
Maria
```

---

# Quando Util*zar Subconsultas?

✅ Comparar regi*tros com médias

✅ Encontrar máxim*s e mínimos

✅ Trabalhar com lista* de valores

✅ Construir relatório* mais complexos

---

# Quando Evi*ar?

Em tabelas muito grandes algu*as subconsultas podem ser mais len*as.

Em muitos casos um JOIN pode *presentar melhor desempenho.

---
*# Exemplo com COUNT()

Listar depa*tamentos que possuem mais de 10 fu*cionários.

```sql
SELECT departam*nto_id
FROM funcionarios
GROUP BY *epartamento_id
HAVING COUNT(*) > 1*;
```

---

# Exemplo com AVG()

L*star funcionários acima da média s*larial.

```sql
SELECT nome
FROM f*ncionarios
WHERE salario > (
    S*LECT AVG(salario)
    FROM funcion*rios
);
```

---

# Exemplo com MA*()

Listar maior salário.

```sql
*ELECT nome
FROM funcionarios
WHERE*salario = (
    SELECT MAX(salario*
    FROM funcionarios
);
```

---*
# Erros Comuns

## Erro 1

Utiliz*r "=" quando a subconsulta retorna*vários valores.

Errado:

```sql
W*ERE departamento_id = (
    SELECT*departamento_id
    FROM funcionar*os
)
```

---

Correto:

```sql
WH*RE departamento_id IN (
    SELECT*departamento_id
    FROM funcionar*os
)
```

---

## Erro 2

Esquecer*o alias em subconsultas no FROM.

*rrado:

```sql
FROM (
    SELECT .*.
)
```

---

Correto:

```sql
FRO* (
    SELECT ...
) AS resumo
```
*---

## Erro 3

Utilizar subconsul*as quando um JOIN seria mais simpl*s.

---

# Resumo

## Subconsulta *e Valor Único

Retorna um único re*ultado.

Exemplo:

```sql
AVG()
MA*()
MIN()
```

---

## Subconsulta *om IN

Retorna vários valores.

--*

## Subconsulta no FROM

Cria uma*tabela derivada temporária.

---

* Cola para Prova

- Subconsulta = *onsulta dentro de consulta
- Prime*ro executa a consulta interna
- IN*é usado quando a subconsulta retor*a vários valores
- "=" deve ser us*do quando a subconsulta retorna ap*nas um valor
- Toda subconsulta no*FROM precisa de alias
- WHERE trab*lha antes do SELECT externo

---

* Questões de Revisão

## 1. O que é uma subconsulta?

Resposta:

Uma consulta SQL executada dentro de outra consulta.

---

## 2. Quando utilizar IN?

Resposta:

Quando a subconsulta retorna vários valores.

---

## 3. Quando utilizar "="?

Resposta:

Quando a subconsulta retorna apenas um valor.

---

## 4. O que é uma tabela derivada?

Resposta:

Uma subconsulta utilizada dentro do FROM.

---

## 5. O alias é obrigatório em subconsultas no FROM?

Resposta:

Sim.
