# IN, NOT IN, BETWEEN, LIKE, IS NULL e IS NOT NULL

## Objetivo

Aprender filtros avançados utilizando IN, NOT IN, BETWEEN, LIKE, IS NULL e IS NOT NULL.

Esses operadores tornam as consultas mais simples, legíveis e poderosas.

---

# IN

O operador IN é utilizado para verificar se um valor pertence a uma lista.

---

## Sintaxe

```sql
SELECT *
FROM alunos
WHERE id IN (1, 2, 3);
```

---

## Equivalência

Em vez de escrever:

```sql
SELECT *
FROM alunos
WHERE id = 1
OR id = 2
OR id = 3;
```

Podemos usar:

```sql
SELECT *
FROM alunos
WHERE id IN (1, 2, 3);
```

---

## Exemplo

```sql
SELECT *
FROM funcionarios
WHERE departamento_id IN (1, 2, 5);
```

---

# NOT IN

O NOT IN faz o contrário do IN.

Retorna os registros que NÃO estão na lista.

---

## Exemplo

```sql
SELECT *
FROM funcionarios
WHERE departamento_id NOT IN (3, 4);
```

---

## Resultado

Retorna todos os funcionários que não pertencem aos departamentos 3 e 4.

---

# BETWEEN

BETWEEN verifica se um valor está dentro de um intervalo.

---

## Sintaxe

```sql
SELECT *
FROM alunos
WHERE idade BETWEEN 18 AND 25;
```

---

## Equivalência

```sql
WHERE idade >= 18
AND idade <= 25
```

---

## Atenção

O BETWEEN é inclusivo.

Ou seja:

```text
18 ✅
25 ✅
```

também serão retornados.

---

# Exemplo

```sql
SELECT *
FROM produtos
WHERE preco BETWEEN 100 AND 500;
```

---

# LIKE

LIKE é utilizado para pesquisar padrões em textos.

---

# Caracteres Coringa

## %

Representa:

```text
Zero ou mais caracteres
```

---

## _

Representa:

```text
Exatamente um caractere
```

---

# Começa Com

```sql
SELECT *
FROM alunos
WHERE nome LIKE 'A%';
```

---

## Exemplo

Retorna:

```text
Ana
Amanda
Anderson
```

---

# Termina Com

```sql
SELECT *
FROM alunos
WHERE nome LIKE '%Silva';
```

---

## Exemplo

Retorna:

```text
João Silva
Maria Silva
```

---

# Contém

```sql
SELECT *
FROM alunos
WHERE nome LIKE '%an%';
```

---

## Exemplo

Retorna:

```text
Amanda
Fernando
André
```

---

# Exatamente Um Caractere

```sql
SELECT *
FROM alunos
WHERE nome LIKE '_a__';
```

---

## Exemplo

Combina com:

```text
Caio
```

Porque possui 4 letras e a segunda é "a".

---

# NULL

NULL significa:

```text
Ausência de valor
```

Não é:

```text
0
```

Não é:

```text
''
```

Não é:

```text
FALSE
```

---

# IS NULL

Utilizado para localizar valores nulos.

---

## Exemplo

```sql
SELECT *
FROM funcionarios
WHERE departamento_id IS NULL;
```

---

## Resultado

Funcionários sem departamento cadastrado.

---

# IS NOT NULL

Utilizado para localizar valores preenchidos.

---

## Exemplo

```sql
SELECT *
FROM funcionarios
WHERE email IS NOT NULL;
```

---

## Resultado

Funcionários que possuem e-mail cadastrado.

---

# Erro Muito Comum

❌ Errado

```sql
SELECT *
FROM funcionarios
WHERE departamento_id = NULL;
```

---

✅ Correto

```sql
SELECT *
FROM funcionarios
WHERE departamento_id IS NULL;
```

---

# Exemplos Práticos

## Funcionários de alguns departamentos

```sql
SELECT *
FROM funcionarios
WHERE departamento_id IN (1, 2, 3);
```

---

## Funcionários fora de alguns departamentos

```sql
SELECT *
FROM funcionarios
WHERE departamento_id NOT IN (2, 4);
```

---

## Produtos entre dois preços

```sql
SELECT *
FROM produtos
WHERE preco BETWEEN 50 AND 300;
```

---

## Nomes iniciados por M

```sql
SELECT *
FROM alunos
WHERE nome LIKE 'M%';
```

---

## Nomes terminados em Junior

```sql
SELECT *
FROM alunos
WHERE nome LIKE '%Junior';
```

---

## Registros sem e-mail

```sql
SELECT *
FROM clientes
WHERE email IS NULL;
```

---

# Comparação Rápida

## IN

Lista de valores.

```sql
WHERE id IN (1, 2, 3)
```

---

## NOT IN

Fora da lista.

```sql
WHERE id NOT IN (1, 2, 3)
```

---

## BETWEEN

Intervalo.

```sql
WHERE idade BETWEEN 18 AND 25
```

---

## LIKE

Pesquisa textual.

```sql
WHERE nome LIKE 'A%'
```

---

## IS NULL

Valor nulo.

```sql
WHERE email IS NULL
```

---

## IS NOT NULL

Valor preenchido.

```sql
WHERE email IS NOT NULL
```

---

# Erros Comuns

## Erro 1

Usar OR no lugar de IN.

---

## Erro 2

Esquecer que BETWEEN inclui limites.

---

## Erro 3

Confundir % e _.

```text
% = vários caracteres

_ = um único caractere
```

---

## Erro 4

Usar = NULL.

❌

```sql
WHERE email = NULL
```

✅

```sql
WHERE email IS NULL
```

---

# Cola para Prova

```text
IN = Está na lista

NOT IN = Não está na lista

BETWEEN = Intervalo

LIKE = Pesquisa textual

% = Vários caracteres

_ = Um caractere

IS NULL = Valor nulo

IS NOT NULL = Valor preenchido
```

---

# Questões de Revisão

## 1

Qual operador substitui vários OR?

Resposta:

```sql
IN
```

---

## 2

Qual operador verifica intervalos?

Resposta:

```sql
BETWEEN
```

---

## 3

Qual coringa representa vários caracteres?

Resposta:

```text
%
```

---

## 4

Qual comando verifica valores nulos?

Resposta:

```sql
IS NULL
```

---

## 5

É correto utilizar = NULL?

Resposta:

Não.

Deve-se utilizar:

```sql
IS NULL
```
