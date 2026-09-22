# Funções Agregadas

## Objetivo

Aprender a utilizar funções agregadas para realizar cálculos sobre conjuntos de registros.

Estas funções são amplamente utilizadas em relatórios, dashboards e consultas gerenciais.

---

# O que são Funções Agregadas?

Funções agregadas realizam cálculos sobre várias linhas e retornam um único resultado.

Principais funções:

```text
COUNT()
SUM()
AVG()
MIN()
MAX()
```

---

# COUNT()

Conta registros.

---

## Sintaxe

```sql
SELECT COUNT(*)
FROM alunos;
```

---

## Exemplo

Tabela:

| id | nome |
|----|------|
| 1 | João |
| 2 | Maria |
| 3 | Pedro |

Consulta:

```sql
SELECT COUNT(*)
FROM alunos;
```

Resultado:

```text
3
```

---

# COUNT(*) x COUNT(coluna)

Essa é uma pegadinha clássica de prova.

---

## COUNT(*)

Conta todas as linhas.

```sql
SELECT COUNT(*)
FROM funcionarios;
```

---

##*COUNT(email)

Conta apenas valores*não nulos.

```sql
SELECT COUNT(em*il)
FROM funcionarios;
```

---

#* Exemplo

Tabela:

| id | email |
*----|-------|
| 1 | abc@gmail.com *
| 2 | NULL |
| 3 | teste@gmail.co* |

---

Consulta:

```sql
SELECT *OUNT(*)
FROM funcionarios;
```

Re*ultado:

```text
3
```

---

Consu*ta:

```sql
SELECT COUNT(email)
FR*M funcionarios;
```

Resultado:

`*`text
2
```

---

# COUNT(DISTINCT*

Conta valores únicos.

---

## E*emplo

```sql
SELECT COUNT(DISTINC* cidade)
FROM clientes;
```

---

* SUM()

Realiza a soma de valores.*
---

## Exemplo

Tabela:

| produ*o | preco |
|----------|--------|
* A | 100 |
| B | 200 |
| C | 300 |*
Consulta:

```sql
SELECT SUM(prec*)
FROM produtos;
```

Resultado:

*``text
600
```

---

# AVG()

Calc*la a média.

---

## Exemplo

```s*l
SELECT AVG(salario)
FROM funcion*rios;
```

---

Tabela:

| salario*|
|----------|
| 2000 |
| 3000 |
|*5000 |

Resultado:

```text
3333,3*
```

---

# MIN()

Retorna o meno* valor.

---

## Exemplo

```sql
S*LECT MIN(preco)
FROM produtos;
```*
Resultado:

```text
100
```

---
*# MAX()

Retorna o maior valor.

-*-

## Exemplo

```sql
SELECT MAX(p*eco)
FROM produtos;
```

Resultado*

```text
300
```

---

# Utilizan*o Alias

Melhora a leitura dos res*ltados.

---

## Exemplo

```sql
S*LECT COUNT(*) AS total_alunos
FROM*alunos;
```

---

## Exemplo

```s*l
SELECT AVG(salario) AS salario_m*dio
FROM funcionarios;
```

---

#*Várias Funções na Mesma Consulta

*``sql
SELECT
COUNT(*) AS total,
SU*(salario) AS folha_pagamento,
AVG(*alario) AS media,
MIN(salario) AS *enor_salario,
MAX(salario) AS maio*_salario
FROM funcionarios;
```

-*-

# Exemplo Prático

Tabela:

```*ext
FUNCIONARIOS
```

| nome | sal*rio |
|---------|---------|
| João*| 2500 |
| Maria | 3500 |
| Pedro * 5000 |

---

Consulta:

```sql
SE*ECT
COUNT(*) AS total,
SUM(salario* AS folha,
AVG(salario) AS media,
*IN(salario) AS menor,
MAX(salario)*AS maior
FROM funcionarios;
```

-*-

Resultado:

```text
Total: 3
Fo*ha: 11000
M*dia: 3666,67
Menor* 2500
*aior: 5000
```

*--

# Aplic*ções no Mundo Real

## RH

```sql*SELECT AVG(salario)
FROM funcionar*os;
```

*alário médio da empresa.

---

## *stoque

```sql*SELECT SUM(estoque)
FROM produtos;*```

Total de produtos.

---

*# Clientes

```sql
SELECT COUNT(*)*FROM clientes;
*``

Quantidade cadastrada.

---

#*Erros Comuns

## Erro 1

Confundir*COUNT(*) com COUNT(coluna).

---

*# Erro 2

Usar SUM em colunas de t*xto.

---

## Erro 3

Esquecer ali*ses.

Os resultados ficam difíceis*de entender.

---

## Erro 4

Tent*r misturar agregações sem GROUP BY*

Esse*assunto será visto no próximo tópi*o.

---

# Resumo

##*COUNT()

Conta registros*

*--

## SUM()

Soma valores.

---

*# AVG()

Calcula média.

---

## M*N()

Menor valor.

---

## MAX()

*aior valor.

---

# Cola para Prov*

```text
COUNT = Contar

SUM =*Som*r

AVG = Média

MIN =*Menor

MAX = Maior

COUNT(*) = Todas as linhas

COUNT(col*na) = Ignora NULL
*``

*--

# Mapa Mental

```text*Funções Agregadas
│
├── COUNT()
│
**─ SUM()
│
├──*AVG()
│
├── MIN()
│
└*─ MAX()
```

*--

# Questões de Revisão

## 1

Q*al função*conta registros?

Resposta:

```sq*
COUNT()
```

---

## 2

Qual funç*o realiza somas?

Resposta:

```sq*
SUM()
``*

---

## 3

Qual função*calcula média?

Resposta:

```sql*AVG()
```

---

## 4

Qual função*retorna o menor*valor?

Resposta:

```sql
MIN()
``*

---

## 5

Qual função retorna o*maior valor?

Resposta:

```sql
MA*()
```

---

## 6

Qual a*diferença entre COUNT(*) e COUNT(coluna)?

Resposta:

COUNT(*) conta todas as linhas.

COUNT(co*una) ignora valores NULL.
````*
