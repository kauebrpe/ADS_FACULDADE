# JOIN Avançado

## Objetivo

Aprender técnicas avançadas de JOIN utilizando:

- JOIN com 3 ou mais tabelas
- JOIN com GROUP BY
- JOIN com funções agregadas
- LEFT JOIN com agregação
- Relatórios gerenciais

---

## JOIN com 3 ou Mais Tabelas

Em bancos reais raramente trabalhamos com apenas duas tabelas.

Exemplo:

CLIENTES

PEDIDOS

ITENS_PEDIDO

PRODUTOS

Para descobrir qual cliente comprou qual produto precisamos conectar todas essas tabelas.

---

## Exemplo

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

## Como Ler um JOIN Grande

Leia da esquerda para a direita.

Fluxo:

```text
CLIENTES
↓
PEDIDOS
↓
ITENS_PEDIDO
↓
PRODUTOS
```

Cada JOIN adiciona informações ao resultado final.

---

## JOIN com GROUP BY

Um dos usos mais comuns dos JOINs.

Serve para criar relatórios.

### Quantidade de pedidos por cliente

```sql
SELECT
    c.nome,
    COUNT(*) AS*total_pedidos
FROM clientes c
INNE* JOIN pedidos p
    ON*c.id_cliente = p.id_cliente
GROUP *Y c.nome;
``*

---

## JOIN com SUM

Valor*total*gasto por cliente.

```sql*SELECT
*   c.nome,
    SUM*p.valor_total) AS total_gasto
FROM*clientes c
INNER JOIN pedidos p
  * ON c.id_cliente = p.id_cliente
GR*UP BY c.nome;
```

*--

## JOIN com AVG

Média salaria por departamento.

```sql
*SELECT
d.nome,
    AVG*f.salario) AS media_salarial
FROM*departamentos*d
INNER JOIN funcionarios f
    ON*d.id = f.departamento_id
GROUP BY*d*nome;
```

*--

## JOIN com MIN e MAX

```sql
*SELECT
    d.nome,
    MIN*f.salario) AS menor_salario,
   *MAX(f.salario) AS maior_salario
FR*M departamentos d
INNER*JOIN funcionarios f
    ON*d.id = f.departamento_id
GROUP BY*d*nome;
```

*--

## LEFT JOIN com Agregação

Mu*to cobrado em provas.

Objetivo:

*Mostrar todos os clientes, inclusive os que não possuem pedidos.

```sql
SELECT
   *c.nome,
    COUNT*p.id_pedido) AS total_pedidos
FROM*clientes*c
LEFT JOIN pedidos p
    ON*c.id_cliente = p.id_cliente
GROUP *Y*c.nome;
```

Resultado esperado:

* João →3 pedidos- Maria → 1 pedido
- Pedro→ 0 pedidos

---

*# LEFT JOIN com *SUM

```sql
*SELECT
    c.nome,
    SUM*p.valor_total)*AS total_gasto
FROM clientes c
LEF* JOIN pedidos p
    ON*c.id_cliente =*p.id_cliente
GROUP BY c.nome;
```

Problema:

Clientes sem*pedidos podem retornar NULL.

---
**# Utilizando COALESCE

```sql
*SELECT
*   c.nome,
    CO*LESCE(SUM*p.valor_total), 0) AS total_gasto
*ROM clientes c
LEFT JOIN*pedidos p
    ON*c.id_cliente = p.id_cliente
GROUP *Y c.nome;
```

* CO*LESCE substitui NULL por 0.

---

*# Relatório Gerencial

```sql
SELECT
    c.nome,
   *COUNT(p.id_pedido) AS pedidos,
*   CO*LESCE(SUM(p.valor_total), *) AS faturamento
FROM clientes*c
LEFT JOIN pedidos p
    ON*c.id_cliente = p.id_cliente
*ROUP BY*c.nome
ORDER BY faturamento DESC;
```

---

##*Exemplo Muito Cobrado

*Produtos mais vendidos.

```sql
SEL*CT
    pr.nome_produto,
    SUM*ip.quantidade) AS total_vendido
FR*M produtos*pr
INNER JOIN itens_pedido ip
    *N pr.id_produto =*ip.id_produto
GROUP BY*pr.nome_produto
*RDER BY total_vendido DESC;
```

*--

## Situações Reais

Lo*a Virtual

```text*Cliente → Pedido*→ Item → Produto
```

*scola

```text*Aluno → Matrícula → Disciplina
```*
Empresa

```text*Funcionário → Departamento
```

*--

## Boas Práticas

- Util*zar aliases cur*os.
- Ind*ntar os JOINs.
- Organ*zar um JOIN por linha.
- Test*r*o JOIN antes de*adicionar GROUP BY.
- Util*zar LEFT JOIN quando não puder per*er registros.

---

## Erros Comun*

### Erro 1

Esqu*cer*GROUP BY ao utilizar funções agreg*das.

###*Erro 2

Utilizar*INNER JOIN quando deveria utilizar*LEFT JOIN.

### Erro 3

Criar*JOINs*sem compreender o relacionamento d*s tabelas.

### Er*o 4

Não utilizar aliases em consu*tas grandes.

---

## Resumo

- JO*N pode envolver várias tabelas.
- *ROUP BY combina muito com JOIN.
- *OUNT conta registros.
- SUM soma v*lores.
-*AVG*calcula médias.
- LEFT*JOIN mantém registros sem correspo*dência.
- COALESCE substitui valor*s NULL.

---

## Cola para Prova

* JOIN pode conectar 3 ou mais tabe*as.
- GROUP BY funciona muito bem *om JOIN.
- COUNT = quantidade.
- S*M = soma.
- AVG = média.
- LEFT JO*N preserva registros sem correspon*ência.
- COALESCE substitui NULL.
*---

## Questões de Revisão

### 1* É possível utilizar JOIN com mais*de duas tabelas?

Resposta: Sim.

*## 2. Qual função é utilizada para*contar registros?

Resposta: COUNT*).

### 3. Qual função é utilizada*para somar valores?

Resposta: SUM*).

### 4. Qual JOIN mantém client*s sem pedidos?

Resposta: LEFT JOI*.

### 5. Para que serve COALESCE(*?

Resposta: Substituir NULL por o*tro valor.

### 6. Qual comando no*malmente aparece junto com JOIN em*relatórios?

Resposta: GROUP BY.
`*
