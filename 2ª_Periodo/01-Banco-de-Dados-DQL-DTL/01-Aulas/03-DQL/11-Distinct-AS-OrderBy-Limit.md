# DISTINCT, AS, ORDER BY e LIMIT

## Objetivo

Aprender como remover duplicidades, utilizar aliases, ordenar resultados e limitar a quantidade de registros retornados por uma consulta.

---

# DISTINCT

O DISTINCT é utilizado para eliminar valores repetidos.

---

## Sintaxe

```sql
SELECT DISTINCT coluna
FROM tabela;
```

---

## Exemplo

Tabela:

| cidade |
|----------|
| Recife |
| Recife |
| Olinda |
| Caruaru |
| Olinda |

---

Consulta:

```sql
SELECT DISTINCT cidade
FROM clientes;
```

---

Resultado:

| cidade |
|----------|
| Recife |
| Olinda |
| Caruaru |

---

# Quando Utilizar?

Quando queremos listar apenas valores únicos.

---

## Exemplos

### Cidades diferentes

```sql
SELECT DISTINCT cidade
FROM clientes;
```

---

### Departamentos diferentes

```sql
SELECT DISTINCT departamento
FROM funcionarios;
```

---

# AS (Alias)

AS significa apelido.

É utilizado para renomear colunas ou tabelas no resultado da consulta.

---

# Alias para Coluna

## Exemplo

```sql
SELECT nome AS aluno
FROM alunos;
```

Resultado:

| aluno |
|---------|
| João |
| Maria |

---

# Alias para Tabela

Muito utilizado em JOINs.

---

## Exemplo

```sql
SELECT a.nome
FROM alunos AS a;
```

---

## Forma Simplificada

Também funciona:

```sql
SELECT a.nome
FROM alunos a;
```

---

# Vantagens dos Aliases

✅ Melhor leitura

✅ Consultas menores

✅ Essencial em JOINs

✅ Evita ambiguidades

---

# ORDER BY

Ordena os resultados.

---

## Sintaxe

```sql
SELECT *
FROM tabela
ORDER BY coluna;
```

---

# Ordem Crescente (ASC)

Padrão do SQL.

---

## Exemplo

```sql
SELECT *
FROM alunos
ORDER BY nome ASC;
```

Resultado:

```text
Ana
Carlos
João
Maria
```

---

# Ordem Decrescente (DESC)

---

## Exemplo

```sql
SELECT *
FROM alunos
ORDER BY nome DESC;
```

Resultado:

```text
Maria
João
Carlos
Ana
```

---

# Ordenando por Números

```sql
SELECT *
FROM produtos
ORDER BY preco DESC;
```

---

# Ordenando por Duas Colunas

```sql
SELECT *
FROM funcionarios
ORDER BY departamento ASC,
         nome ASC;
```

Primeiro ordena por departamento.

Depois por nome.

---

# LIMIT

Restringe a quantidade de linhas retornadas.

---

## Sintaxe

```sql
SELECT *
FROM tabela
LIMIT quantidade;
```

---

# Exemplo

Retornar apenas 5 registros:

```sql
SELECT *
FROM alunos
LIMIT 5;
```

---

# Top 3 Mais Caros

```sql
SELECT *
FROM produtos
ORDER BY preco DESC
LIMIT 3;
```

---

# LIMIT com OFFSET

Muito usado em paginação.

---

## Exemplo

```sql
SELECT *
FROM alunos
ORDER BY id
LIMIT 10 OFFSET 5;
```

Significado:

```text
Ignora os 5 primeiros

Mostra os próximos 10
```

---

# Exemplos Práticos

## Cidades sem repetição

```sql
SELECT DISTINCT cidade
FROM clientes;
```

---

## Alterando nome da coluna

```sql
SELECT nome AS cliente
FROM clientes;
```

---

## Ordenando por nome

```sql
SELECT *
FROM clientes
ORDER BY nome;
```

---

## Ordenando por salário

```sql
SELECT *
FROM funcionarios
ORDER BY salario DESC;
```

---

## Mostrar apenas 10 registros

```sql
SELECT *
FROM produtos
LIMIT 10;
```

---

# Exemplo Completo

```sql
SELECT DISTINCT cidade AS localidade
FROM clientes
ORDER BY localidade
LIMIT 5;
```

---

# Erros Comuns

## Erro 1

Usar DISTINCT sem necessidade.

Pode deixar consultas mais lentas.

---

## Erro 2

Esquecer DESC quando desejar ordem decrescente.

---

## Erro 3

Achar que LIMIT filtra dados.

LIMIT apenas reduz a quantidade retornada.

---

## Erro 4

Confundir alias com nome real da coluna.

Alias altera apenas a exibição.

Não altera a estrutura da tabela.

---

# Resumo

## DISTINCT

Remove duplicidades.

---

## AS

Cria apelidos.

---

## ORDER BY

Ordena resultados.

---

## LIMIT

Limita registros.

---

# Cola para Prova

```text
DISTINCT
→ Não repetir

AS
→ Apelido

ORDER BY ASC
→ Crescente

ORDER BY DESC
→ Decrescente

LIMIT
→ Limita resultados
```

---

# Mapa Mental

```text
SELECT
│
├── DISTINCT
│   └── Remove repetidos
│
├── AS
│   └── Apelido
│
├── ORDER BY
│   ├── ASC
│   └── DESC
│
└── LIMIT
    └── Quantidade de linhas
```

---

# Questões de Revisão

## 1

Para que serve o DISTINCT?

Resposta:

Remover valores repetidos.

---

## 2

O que significa AS?

Resposta:

Alias (apelido).

---

## 3

Qual comando organiza os resultados?

Resposta:

```sql
ORDER BY
```

---

## 4

Qual palavra gera ordem decrescente?

Resposta:

```sql
DESC
```

---

## 5

Para que serve LIMIT?

Resposta:

Limitar a quantidade de registros retornados.
