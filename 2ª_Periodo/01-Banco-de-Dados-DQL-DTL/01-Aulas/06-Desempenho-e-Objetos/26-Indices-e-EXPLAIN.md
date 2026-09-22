# Índices e EXPLAIN

## Objetivo

Aprender como os índices ajudam o MySQL a encontrar dados mais rapidamente e como utilizar o comando EXPLAIN para analisar consultas.

Ao final deste tópico você será capaz de:

- Entender o que é um índice
- Saber quando criar índices
- Saber quando evitar índices
- Utilizar CREATE INDEX
- Utilizar DROP INDEX
- Compreender B-Tree e Hash
- Utilizar EXPLAIN

---

# O Que é um Índice?

Um índice é uma estrutura criada pelo banco de dados para acelerar consultas.

A ideia é semelhante ao índice de um livro.

---

## Livro Sem Índice

Se você quiser encontrar um assunto:

```text
Precisa procurar página por página.
```

---

## Livro Com Índice

Você consulta o índice.

Depois vai direto para a página correta.

---

## Banco de Dados

A lógica é a mesma.

Sem índice:

```text
O banco verifica muitas linhas.
```

Com índice:

```text
O banco encontra os registros mais rapidamente.
```

---

# Exemplo

Tabela:

```text
CLIENTES
```

Possui:

```text
1.000.000 registros
```

Consulta:

```sql
SELECT *
FROM clientes
WHERE cpf = '12345678900';
```

Sem índice:

```text
O banco pode percorrer toda a tabela.
```

Com índice:

```text
O banco localiza o registro rapidamente.
```

---

# Índices Automáticos

O MySQL normalmente cria índices para:

- PRIMARY KEY
- UNIQUE

Dependendo da modelagem, índices também podem existir em relacionamentos importantes.

---

# CREATE INDEX

Cria um novo índice.

---

## Sintaxe

```sql
CREATE INDEX nome_indice
ON tabela(coluna);
```

---

## Exemplo

```sql
CREATE INDEX idx_cliente_nome
ON clientes(nome);
```

---

# Consulta Beneficiada

```sql
SELECT *
FROM clientes
WHERE nome = 'João';
```

---

# Índice em Mais de Uma Coluna

Também é possível.

```sql
CREATE INDEX idx_cliente_nome_cidade
ON clientes(nome, cidade);
```

---

# DROP INDEX

Remove um índice existente.

---

## Sintaxe

```sql
DROP INDEX nome_indice
ON tabela;
```

---

## Exemplo

```sql
DROP INDEX idx_cliente_nome
ON clientes;
```

---

# Quando Criar Índices?

Em geral, crie índices quando a coluna é muito utilizada em:

- WHERE
- JOIN
- ORDER BY

---

## Exemplos

```sql
WHERE cpf = ?
```

```sql
WHERE email = ?
```

```sql
JOIN clientes
```

```sql
ORDER BY nome
```

---

# Quando NÃO Criar Índices?

Nem toda coluna precisa de índice.

---

## Evite Índices em:

### Tabelas pequenas

O ganho normalmente é muito pequeno.

---

### Colunas pouco utilizadas

Exemplo:

```text
Observações
Descrição
Comentários
```

---

### Tabelas atualizadas constantemente

Índices também precisam ser atualizados.

---

# Vantagens dos Índices

- Consultas mais rápidas
- Menos leitura de dados
- Melhor desempenho

---

# Desvantagens dos Índices

- Consomem espaço em disco
- Tornam INSERT mais lento
- Tornam UPDATE mais lento
- Tornam DELETE mais lento

---

# B-Tree

É o tipo de índice mais utilizado pelo MySQL.

---

## Características

- Estrutura em árvore
- Muito eficiente
- Boa performance em grandes volumes de dados

---

## Funciona Bem Com

```sql
=
```

```sql
>
```

```sql
<
```

```sql
BETWEEN
```

```sql
ORDER BY
```

---

## Exemplo

```sql
SELECT *
FROM produtos
WHERE preco BETWEEN 100 AND 500;
```

Um índice B-Tree pode ajudar bastante nessa consulta.

---

# Hash

Hash utiliza uma função matemática para localizar registros.

---

## Vantagem

Muito rápido para igualdade.

---

## Exemplo

```sql
SELECT *
FROM clientes
WHERE email = 'joao@email.com';
```

---

## Limitação

Não funciona bem para:

```sql
BETWEEN
```

```sql
>
```

```sql
<
```

---

# Comparação

| Tipo | Melhor Uso |
|--------|------------|
| B-Tree | Consultas gerais |
| Hash | Igualdade (=) |

---

# O Que é EXPLAIN?

EXPLAIN mostra como o MySQL pretende executar uma consulta.

É uma ferramenta utilizada para análise de desempenho.

---

# Sintaxe

```sql
EXPLAIN
SELECT *
FROM clientes
WHERE nome = 'João';
```

---

# Objetivo

Descobrir:

- Se um índice está sendo utilizado
- Como o banco executará a consulta
- Possíveis problemas de desempenho

---

# Exemplo

```sql
EXPLAIN
SELECT *
FROM produtos
WHERE preco BETWEEN 100 AND 500;
```

---

# O Que Procurar?

Uma das informações mais importantes é:

```text
type
```

---

## ALL

Significa:

```text
Table Scan
```

O banco está lendo toda a tabela.

Geralmente não é o melhor cenário.

---

## range

Normalmente indica uso eficiente do índice.

---

## ref

Também costuma indicar uso de índice.

---

# Exemplo Completo

Criando tabela:

```sql
CREATE TABLE produtos (
    id INT PRIMARY KEY,
    nome VARCHAR(100),
    preco DECIMAL(10,2)
);
```

Criando índice:

```sql
CREATE INDEX idx_preco
ON produtos(preco);
```

Consultando:

```sql
EXPLAIN
SELECT *
FROM produtos
WHERE preco BETWEEN 100 AND 500;
```

---

# Boas Práticas

- Criar índices apenas quando necessário
- Utilizar EXPLAIN para analisar consultas
- Evitar excesso de índices
- Testar o desempenho antes e depois

---

# Erros Comuns

## Erro 1

Criar índice em todas as colunas.

---

## Erro 2

Nunca utilizar EXPLAIN.

---

## Erro 3

Achar que índice sempre melhora tudo.

---

## Erro 4

Ignorar o impacto dos índices em INSERT e UPDATE.

---

# Resumo

- Índice acelera consultas
- CREATE INDEX cria índices
- DROP INDEX remove índices
- B-Tree é o tipo mais comum
- Hash é eficiente para igualdade
- EXPLAIN mostra o plano da consulta

---

# Cola para Prova

- Índice = acelera consultas
- CREATE INDEX = cria índice
- DROP INDEX = remove índice
- B-Tree = padrão do MySQL
- Hash = igualdade
- EXPLAIN = analisar consulta
- WHERE e JOIN costumam se beneficiar de índices

---

# Questões de Revisão

## 1. O que é um índice?

Resposta:

Uma estrutura que acelera consultas.

---

## 2. Qual comando cria um índice?

Resposta:

```sql
CREATE INDEX
```

---

## 3. Qual comando remove um índice?

Resposta:

```sql
DROP INDEX
```

---

## 4. Qual índice é mais comum no MySQL?

Resposta:

B-Tree.

---

## 5. Para que serve o EXPLAIN?

Resposta:

Mostrar como o MySQL executará uma consulta.
``
