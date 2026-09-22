# Funções Agregadas

## Objetivo

Aprender a utilizar funções agregadas para realizar cálculos sobre conjuntos de registros.

Essas funções são muito utilizadas em relatórios, dashboards, análises e consultas gerenciais.

---

# O que são Funções Agregadas?

Funções agregadas realizam cálculos sobre várias linhas de uma tabela e retornam apenas um resultado.

Principais funções:

- COUNT()
- SUM()
- AVG()
- MIN()
- MAX()

---

# COUNT()

Conta registros.

## Sintaxe

```sql
SELECT COUNT(*)
FROM alunos;
```

---

## Exempl*

Tabela:

|*id | nome |
|----*------|
| 1 | João |
| * | Maria |
| 3 | Pedro |

Consulta*

*``sql
SELECT COUNT(*)
FROM alunos*
```

Resultado:

```text
3
``*

*--

# COUNT(*) x COUNT(coluna)

Essa diferença costuma cair em provas.

## COUNT(*)

Conta todas as linhas.

```sql
SELECT COUNT(*)
FROM funcionarios;
```

---

## *OUNT(coluna)

Conta apenas valores*preenchidos.

Valores NULL não são*contabilizados.

```sql
SELECT COU*T(email)
FROM funcionarios;
```

-*-

## Exemplo

| id | email |
|---*|--------|
| * | joao@gmail.com |
* 2 | NULL |
| * | maria@gmail.com |

Consulta:

*``sql
SELECT COUNT(*)
FROM funcion*rios*
```

*esultado:

```text
3
``*

Consulta:

```sql
SELECT COUNT(e*ail)
FROM funcionarios;
```

Resul*ado:

```text*2
```

---

# COUNT(DISTINCT)

Con*a*apenas valores*diferentes.

## Exemplo

```sql*SELECT COUNT(DISTINCT cidade)
*ROM clientes;
```

---

# SUM()

R*al*za somas.

## Sint*xe

```sql*SELECT SUM(coluna)
*ROM tabela;
```

---

## Exemplo

* produto | preco |
|----------|---*----|
|*A | 100 |
| B | 200 |
| C | 300 |
*Consulta:

```*ql
SELECT SUM(preco)
FROM produtos*
```

Resultado:

```text
600
``*

*--

# AVG()

Calcula a média.

## *intaxe

```sql
SELECT AVG(coluna)
*ROM tabela;
```

*--

## Exemplo

| salario |
|-----*----*
* 2000 |
| 3000 |
| 5000 |

Consult*:

```sql
SELECT AVG(salario)
FROM*funcionarios;
```

Resultado:

```*ext*3333.33
```

---

# MIN()

Retorna*o menor valor.

##*Exemplo

```sql
SELECT MIN(preco)
*ROM produtos;
```

Resultado:

```*ext
100
```

---

# MAX()

Retorna*o maior valor.

##*Ex*mplo

```sql
SELECT MAX(preco)
FRO* produtos;
```

Resultado:

```tex*
300
```

---

# Utilizando Alias
*Alias tornam*o resultado mais legível.

## Exem*lo

```sql*SELECT COUNT(*) AS total_alunos
FR*M alunos;
```

---

## Exemplo

``*sql
SELECT AVG(salario) AS salario*medio
FROM funcionarios;
```

---
*# Várias Funções na Mesma Consulta*
```sql
SELECT
    COUNT(*) AS tot*l,
    SUM*salario) AS folha_pagamento,
    A*G(salario) AS media,
    MIN*salario) AS menor_salario,
    MAX*salario) AS maior_sal*rio
FROM funcionarios;
```

*--

# Exemplo Completo

Tabela:

|*nome | salario |
|---------|------*--|
| João*| 2500 |
| Maria*| 3500 |
| Pedro | 5000 |

Consult*:

```sql
SELECT
    COUNT**) AS total,
    SUM(salario) AS folha,
    AVG(*alario) AS media,
    MIN(salario)*AS menor,
    MAX(s*lario) AS maior
FROM funcionarios;*```

Resultado:

```text*Total: 3
Folha: 11000
M*dia: *666*67
Menor* 2500
Maior: 5000
```

*--

# Aplicações Práticas

## Quan**dade de Clientes

```sql*SELECT COUNT(*)
FROM clientes;
```*
*--

## Salário Médio

```sql*SELECT AVG(salario*
FROM funcionarios;
```

---

## F*lha de Pagamento

```sql
SELECT SU*(salario)
FROM funcionarios;
```

*--

## Produto Mais Caro

```*ql
SELECT MAX(preco)
FROM produtos*
```

---

## Produto Mais Barato
*```sql
SELECT MIN(preco)
FROM prod*tos*
```

---

# Erros Comuns

##*Erro 1

Confundir*

*``sql
COUNT(*)
```

com

```sql
CO*NT(coluna)
```

---

## Erro 2

Ut*lizar SUM() em colunas de texto.

*--

## Erro 3

Esquecer alias em c*nsultas grandes.

---

## Erro 4

*isturar agregações com outras colu*as sem GROUP BY.

Esse assunto*será estudado no próximo tópico.

*--

# Resumo

## COUNT()

Conta re*istros.

---

## SUM()

S*ma*valores.

*--

## AVG()

Calcula média.

---
*## MIN()

Retorna o menor valor.

*--

## MAX()

Retorna o maior valo*.

---

# Tabela Resumo

| Função * Finalidade |
|----------|--------*-|
| COUNT*) | Contar |
| SUM*) | Somar |
| AVG() | Média |
| MI*() | Menor valor |
| MAX*) |*Maior valor |

---

* Cola para Prova

```text*COUNT =*Contar

SUM = Somar

AVG =*Média

MIN = Menor

MAX = Maior

C*UNT(*)*= Todas as linhas

COUNT(col*na) = Ignora NULL

*OUNT(D*STINCT) = Apenas valores únicos
``*

---

# Questões de Revisão

## *

Qual função conta registros?

Re*posta:

```sql
COUNT()
```

---

#* 2

Qual função realiza somas?

Re*posta:

```sql*SUM()
```

---

## 3

Qual*função calcula média?

Resposta:

*``sql
AVG()
```

---

## 4

Qual f*nção*retorna o menor valor?

Resposta:
*```sql
MIN()
```

*--

## 5

Qual função*retorna o maior valor?

Resposta:
*```sql
MAX()
```

*--

## 6

Qual a*diferença entre COUNT(*) e COUNT(coluna)?

Resposta:

COUNT(*) conta todas as linhas.

COUNT(co**na) ignora*valores NULL.

---

## 7

Qual fun*ão conta somente valores diferente*?

Resposta:

```sql*COUNT(DISTINCT coluna)
```
*
