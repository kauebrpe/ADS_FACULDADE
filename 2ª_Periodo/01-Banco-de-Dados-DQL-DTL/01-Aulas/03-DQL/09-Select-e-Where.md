# SELECT e WHERE

## Objetivo

Aprender a consultar informações armazenadas no banco de dados utilizando o comando SELECT e filtrar registros utilizando a cláusula WHERE.

---

# O que é DQL?

DQL significa:

```text
Data Query Language
```

É a parte do SQL responsável pela consulta dos dados.

---

# SELECT

O comando SELECT é utilizado para consultar informações.

---

## Sintaxe Básica

```sql
SELECT coluna
FROM tabela;
```

---

## Consultando Todas as Colunas

```sql
SELECT *
FROM alunos;
```

O asterisco (*) significa:

```text
Todas as colunas
```

---

## Consultando Colunas Específicas

```sql
SELECT nome, idade
FROM alunos;
```

---

# WHERE

A cláusula WHERE é utilizada para filtrar registros.

---

## Sintaxe

```sql
SELECT *
FROM alunos
WHERE condição;
```

---

## Exemplo

```sql
SELECT *
FROM alunos
WHERE id = 1;
```

---

# Operadores Relacionais

## Igual

```sql
=
```

Exemplo:

```sql
SELECT *
FROM alunos
WHERE nome = 'Maria';
```

---

## Diferente

```sql
<>
```

ou

```sql
!=
```

Exemplo:

```sql
SELECT *
FROM alunos
WHERE idade <> 18;
```

---

## Maior que

```sql
>
```

Exemplo:

```sql
SELECT *
FROM alunos
WHERE idade > 18;
```

---

## Menor que

```sql
<
```

Exemplo:

```sql
SELECT *
FROM alunos
WHERE idade < 18;
```

---

## Maior ou Igual

```sql
>=
```

---

## Menor ou Igual

```sql
<=
```

---

# Operadores Lógicos

Permitem combinar condições.

---

## AND

Todas as condições devem ser verdadeiras.

```sql
SELECT *
FROM alunos
WHERE idade > 18
AND cidade = 'Recife';
```

---

## OR

Pelo menos uma condição deve ser verdadeira.

```sql
SELECT *
FROM alunos
WHERE cidade = 'Recife'
OR cidade = 'Olinda';
```

---

## NOT

Inverte a condição.

```sql
SELECT *
FROM alunos
WHERE NOT idade = 18;
```

---

# Ordem de Precedência

O AND tem prioridade sobre o OR.

Exemplo:

```sql
SELECT *
FROM alunos
WHERE cidade = 'Recife'
OR cidade = 'Olinda'
AND idade > 18;
```

Melhor prática:

```sql
SELECT *
FROM alunos
WHERE (cidade = 'Recife'
OR cidade = 'Olinda')
AND idade > 18;
```

---

# Exemplos Práticos

## Buscar todos os alunos

```sql
SELECT *
FROM alunos;
```

---

## Buscar por nome

```sql
SELECT *
FROM alunos
WHERE nome = 'João';
```

---

## Buscar maiores de idade

```sql
SELECT *
FROM alunos
WHERE idade >= 18;
```

---

## Buscar alunos de Recife

```sql
SELECT *
FROM alunos
WHERE cidade = 'Recife';
```

---

# Erros Comuns

## Erro 1

Esquecer o FROM.

❌

```sql
SELECT *
WHERE idade > 18;
```

---

## Erro 2

Esquecer o WHERE.

❌

```sql
SELECT *
FROM alunos
idade > 18;
```

---

## Erro 3

Misturar AND e OR sem parênteses.

---

## Erro 4

Esquecer aspas em textos.

❌

```sql
WHERE nome = João
```

✅

```sql
WHERE nome = 'João'
```

---

# Resumo

## SELECT

Consulta dados.

---

## WHERE

Filtra dados.

---

## AND

E.

---

## OR

Ou.

---

## NOT

Negação.

---

# Cola para Prova

```text
SELECT = Consultar

WHERE = Filtrar

AND = Todas verdadeiras

OR = Uma verdadeira

NOT = Inversão

* = Todas as colunas
```

---

# Questões de Revisão

## 1

Qual comando consulta dados?

Resposta:

```sql
SELECT
```

---

## 2

Qual cláusula filtra registros?

Resposta:

```sql
WHERE
```

---

## 3

Qual operador significa "maior que"?

Resposta:

```sql
>
```

---

## 4

Qual operador exige todas as condições verdadeiras?

Resposta:

```sql
AND
```

---

## 5

Qual operador exige pelo menos uma condição verdadeira?

Resposta:

```sql
OR
```
