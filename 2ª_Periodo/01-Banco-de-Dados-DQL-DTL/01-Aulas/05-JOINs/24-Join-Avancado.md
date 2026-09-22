# JOIN Avançado

## Objetivo

Aprender técnicas avançadas de JOIN utilizando:

- JOIN com 3 ou mais tabelas
- JOIN com GROUP BY
- JOIN com funções agregadas
- LEFT JOIN com agregação
- Relatórios gerenciais

---

# Quando um JOIN Simples Não é Suficiente?

Em bancos reais raramente trabalhamos apenas com duas tabelas.

Exemplo:

Loja Virtual

```text
CLIENTES
PEDIDOS
ITENS_PEDIDO
PRODUTOS
```

Para descobrir:

```text
Qual cliente comprou qual produto?
```

Precisamos utilizar vários JOINs.

---

# JOIN com 3 ou Mais Tabelas

## Estrutura

```text
CLIENTES
    │
PEDIDOS
    │
ITENS_PEDIDO
    │
PRODUTOS
```

---

# Exemplo

Tabela CLIENTES

| id_cliente | nome |
|------------|------|
| 1 | João |
| 2 | Maria |

---

Tabela PEDIDOS

| id_pedido | id_cliente |
|-----------|------------|
| 101 | 1 |
| 102 | 2 |

---

Tabela PRODUTOS

| id_produto | nome_produto |
|------------|--------------|
| 1 | Notebook |
| 2 | Mouse |

---

Tabela ITENS_PEDIDO

| id_pedido | id_produto | quantidade |
|-----------|------------|------------|
| 101 | 1 | 1 |
| 102 | 2 | 2 |

---

# Consulta

```sql
SELECT
    c.nome,
    p.id_pedido,
    pr.nome_produto,
    ip.quantidade
FROM clientes c
INNER JOIN pedidos p
    ON c.id_cliente = p.id_cliente
INNER JOIN itens_pedido ip
    ON p.id_pedido = ip.id_pedido
INNER JOIN produtos pr
    ON ip.id_produto = pr.id_produto;
```

---

# Resultado

| Cliente | Pedido | Produto | Quantidade |
|----------|---------|----------|-----------|
| João | 101 | Notebook | 1 |
| Maria | 102 | Mouse | 2 |

---

# Como Ler um JOIN Grande?

Leia sempre da esquerda para a direita.

```text
CLIENTES
↓
PEDIDOS
↓
ITENS_PEDIDO
↓
PRODUTOS
```

Cada JOIN adiciona novas informações ao resultado.

---

# JOIN com GROUP BY

Um dos usos mais comuns.

Serve para criar relatórios.

---

# Quantidade de Pedidos por Cliente

```sql
SELECT
    c.nome,
    COUNT(*) AS total_pedidos
FROM *lientes c
INNER JOIN pedidos p
   *ON*c.id_cliente = p.id_cliente
GROUP *Y c.nome;
```

---

# Resultado

|*Cliente*| Total de Pedidos |
|----------|-*----------------|
| João | 3 |
| M*ria*| 2 |

---

# JOIN com SUM()

Cal*ular valor gasto por cliente.

```*ql
SELECT
    c.nome,
    SUM*p*valor_total) AS total_gasto
FROM*clientes c
INNER JOIN pedidos p
  * ON c.id_cliente = p.id_cliente
GR*UP BY*c.nome;
```

*--

# JOIN com AVG()

Calcular*média salarial por*departamento.

```sql
SELECT
    d*nome,
    AVG*f.salario) AS media_s*larial
FROM departamentos d
INNER *OIN funcionarios f
    ON d.id = f*departamento_id
GROUP BY d.nome;
`*`

---

# JOIN com MIN() e MAX()

*``sql
SELECT
    d.nome,
    MIN*f*salario) AS menor_salario,
   *MAX(f*salario) AS maior_salario
*ROM departamentos d
INNER JOIN fun*ionarios f
    ON d.id = f.departa*ento_id
GROUP BY d.nome;
```

*--

# LEFT JOIN*com Agregação

Esse tópico*cai bastante em provas.

---

**Problema

Listar*TODOS os clientes.

Inclusive aque*es que*nunca fizeram pedidos*

---

# Consulta

```sql*SELECT
    c.nome,
    COUNT*p.id_pedido) AS total_pedidos
FROM*clientes*c
LEFT JOIN pedidos p
    ON*c.id_cliente = p.id_cliente
GROUP *Y*c.nome;
```

---

# Resultado

| C*iente | Total de Pedidos |
|------*---*------------------|
| João | 3 |
|*Maria*| 1 |
| Pedro | 0 |

---

* Por Que Funciona?

O LEFT JOIN ma*tém todos os clientes.

Mesmo sem *edido.

O COUNT() retorna:

*``text
0
```

para clientes sem co*respondência.

---

#*LEFT JOIN com*SUM()

```sql
SELECT
   *c*nome,
    SUM*p.valor_total) AS total_gasto
FROM*clientes c
LEFT JOIN pedidos p
   *ON c.id_cliente = p.id_cliente
GRO*P BY c.nome;
```

*--

# Problema

Clientes sem pedid*s podem retornar:

```text
NULL*```

*--

# Solução com COALESCE()

```s*l
SELECT
   *c.nome,
    CO*LESCE(SUM(p.valor*total), 0) AS total_gasto
FROM cli*ntes c
LEFT JOIN*pedidos p
    ON c.id_cliente = p.*d_cliente
GROUP BY c.nome;
```

*--

# Resultado*
| Cliente*| Total Gasto*|
|----------|------------|
| João*| 1500 |
| Maria | 200 |
| Pedro |*0 |

---

* Relatório Gerencial Completo

```*ql
SELECT
    c.nome,
    COUNT*p.id_pedido* AS pedidos*
    CO*LESCE(SUM(p.valor_total),0) AS fat*ramento
FROM clientes c
LEFT JOIN *edidos p
    ON*c.id_cliente = p.id_cliente
GROUP *Y c.nome
ORDER BY faturamento DESC*
```

---

# Exemplo Muito Cobrado*
Top*produtos*mais vendidos.

```sql
SELECT
    *r*nome_produto,
    SUM*ip.quantidade) AS*total_vendido
FROM produtos pr
INN*R JOIN itens_pedido ip
    ON*pr.id_produto = ip.id*produto
GROUP BY pr.nome_produto
O*DER BY total_vendido DESC;
```

*--

# Situações Reais

## Loja Vir*ual

Cliente →*Pedido → Item*→ Produto

---

## Escola

Aluno →*Matrícula → Disciplina

---

## Em*resa

Funcionário → Departamento

*--

* Boas Práticas

✅ Utilizar aliases*

```sql*c = clientes
p = pedidos
pr*= produtos
ip =*itens_pedido
```

*--

✅ Organizar um*JOIN por linha.

---

* Ind*ntar a cláusula ON.

---

* Test*r a consulta sem GROUP BY primeiro*

---

✅ Utilizar LEFT JOIN quando*não puder perder registros.

---

* Erros Comuns

## Erro 1

Esquecer*o GROUP BY.

---

*# Erro 2

Utilizar*INNER JOIN*quando deveria usar LEFT JOIN.

--*

## Erro 3

Fazer JOIN*sem entender os*relacionamentos.

---

*# Erro 4

*ão utilizar aliases em consultas g*andes.

---

# Resumo

- JOIN*pode conectar*várias tabelas
- JOIN*funciona muito bem com GROUP BY
- *OUNT() conta registros
- SUM*) soma valores
- AVG*) calcula médias
- LEFT*JOIN preserva registros sem*correspondência
- CO*LESCE() substitui*NULL

---

# Tabela Resumo

| Situ*ção | Solução |
|-----------*----------|
| Cliente*e Pedido | INNER JOIN |
| Cliente*mesmo sem pedido | LEFT JOIN*|
| Quant*dade por cliente | COUNT() + GROUP*BY |
| Total gasto | SUM() + GROUP*BY |
| Média salarial | AVG() +*GROUP BY |
| Cliente*sem movimentação | LEFT JOIN |

--*

# Cola para Prova

- JOIN*pode envolver * ou mais tabelas
- GROUP*BY combina muito com JOIN
- COUNT*) = quantidade
- SUM*) = soma
* AVG() = média
-*LEFT*JOIN mantém todos os registros da*esquerda
- CO*LESCE() substitui NULL por outro*valor

---

* Questões de Revisão

## 1. É poss*vel utilizar JOIN com mais de duas*tabelas?

Resposta:

Sim.

---

*# 2. Qual função*normalmente é utilizada para conta* registros?

Resposta:

COUNT().

*--

## 3. Qual função*normalmente é utilizada para somar*valores?

Resposta:

SUM().

---

*# 4. Qual JOIN*mantém clientes sem pedidos?

Resp*sta:

LEFT JOIN.

---

*# 5. Para que*serve o*COALESCE()?

Resposta:

Substit*ir*valores NULL por outro valor.

*--

## 6. Qual comando normalmente*é utilizado para criar relatórios *pós um JOIN?

Resposta:

GROUP BY.*
