# Por Que Usar JOIN?

## Objetivo

Entender por que os JOINs existem e por que são essenciais em bancos de dados relacionais.

Ao final deste tópico você será capaz de compreender:

- Por que os dados ficam separados em várias tabelas
- Como os relacionamentos funcionam
- Quando utilizar JOIN
- Quais problemas os JOINs resolvem

---

# O Que é um JOIN?

JOIN é um comando utilizado para combinar dados de duas ou mais tabelas.

Seu objetivo é reunir informações relacionadas que estão armazenadas separadamente.

---

# Por Que os Dados Ficam Separados?

Em bancos de dados relacionais seguimos princípios de modelagem e normalização.

Por isso os dados normalmente são divididos em várias tabelas.

---

# Exemplo Sem Separação

Tabela única:

| id_pedido | cliente | telefone | produto |
|------------|----------|-----------|----------|
| 1 | João | 9999-1111 | Notebook |
| 2 | João | 9999-1111 | Mouse |
| 3 | João | 9999-1111 | Teclado |

---

# Problemas

Observe que:

- Cliente repetido
- Telefone repetido
- Dados duplicados

Isso gera:

- Desperdício de espaço
- Dificuldade de atualização
- Inconsistências

---

# Solução

Separar os dados.

CLIENTES

| id_cliente | nome |
|-----------|------|
| 1 | João |

---

PEDIDOS

| id_pedido | id_cliente |
|-----------|-----------|
| 1 | 1 |
| 2 | 1 |
| 3 | 1 |

---

# O Problema Agora

As informações estão corretas.

Porém ficaram separadas.

Como mostrar:

```text
João → Pedido 1
João → Pedido 2
João → Pedido 3
```

A resposta é:

```text
JOIN
```

---

# Exemplo de JOIN

```sql
SELECT *
FROM clientes
INNER JOIN pedidos
ON clientes.id_cliente = pedidos.id_cliente;
```

---

# O Que o JOIN Faz?

Ele utiliza um relacionamento entre tabelas para combinar os registros.

---

# Exemplo Visual

Tabela A

CLIENTES

| id | nome |
|----|------|
| 1 | João |
| 2 | Maria |

---

Tabela B

PEDIDOS

| id_pedido | id_cliente |
|-----------|-----------|
| 101 | 1 |
| 102 | 2 |

---

Resultado do JOIN

| nome | id_pedido |
|------|-----------|
| João | 101 |
| Maria | 102 |

---

# Analogia Simples

Imagine duas listas.

Lista 1:

```text
Aluno
```

Lista 2:

```text
Matrícula
```

Separadas elas não dizem muita coisa.

Com JOIN podemos descobrir:

```text
Qual aluno possui qual matrícula
```

---

# Por Que JOIN é Importante?

Porque quase todos os bancos reais são normalizados.

Normalização significa:

```text
Dados divididos em várias tabelas.
```

Sem JOIN seria impossível reconstruir essas informações facilmente.

---

# Exemplos Reais

## Loja Virtual

Tabelas:

```text
Clientes
Pedidos
Produtos
Itens_Pedido
```

---

## Sistema Escolar

Tabelas:

```text
Alunos
Disciplinas
Matrículas
```

---

## Hospital

Tabelas:

```text
Pacientes
Médicos
Consultas
```

---

# JOIN e Chaves

JOIN normalmente utiliza:

- PRIMARY KEY
- FOREIGN KEY

---

## Exemplo

CLIENTES

```text
id_cliente
```

PEDIDOS

```text
id_cliente
```

Essa coluna é utilizada para conectar as tabelas.

---

# Sintaxe Geral

```sql
SELECT colunas
FROM tabela_a
JOIN tabela_b
ON tabela_a.id = tabela_b.id;
```

---

# Componentes da Sintaxe

## FROM

Tabela principal.

---

## JOIN

Tabela que será conectada.

---

## ON

Condição de relacionamento.

---

# Benefícios dos JOINs

✅ Menos redundância

✅ Melhor organização

✅ Maior integridade

✅ Consultas mais completas

✅ Melhor modelagem

---

# O Que Será Estudado Depois?

Existem vários tipos de JOIN.

Os principais são:

- INNER JOIN
- LEFT JOIN
- RIGHT JOIN
- CROSS JOIN

Cada um possui um comportamento diferente.

---

# Resumo

JOIN conecta tabelas.

Sem JOIN os dados permaneceriam separados.

JOIN é uma consequência natural da normalização.

---

# Tabela Resumo

| Conceito | Descrição |
|-----------|-----------|
| JOIN | Combina tabelas |
| PRIMARY KEY | Identifica registros |
| FOREIGN KEY | Cria relacionamentos |
| ON | Define a condição da junção |
| Normalização | Divide dados em tabelas |

---

# Cola para Prova

- JOIN combina tabelas
- JOIN utiliza relacionamentos
- JOIN normalmente usa PK e FK
- JOIN existe porque os dados ficam separados
- JOIN é fundamental em bancos relacionais

---

# Questões de Revisão

## 1. O que é um JOIN?

Resposta:

Um mecanismo utilizado para combinar dados de duas ou mais tabelas.

---

## 2. Por que os dados ficam separados?

Resposta:

Por causa da modelagem e da normalização.

---

## 3. Quais tipos de chave normalmente participam dos JOINs?

Resposta:

PRIMARY KEY e FOREIGN KEY.

---

## 4. Qual cláusula define a condição da junção?

Resposta:

ON.

---

## 5. Qual o principal objetivo de um JOIN?

Resposta:

Reunir informações relacionadas armazenadas em tabelas diferentes.
