# Views

## Objetivo

Aprender o que são Views, como criá-las, como removê-las e entender suas vantagens dentro de um banco de dados.

---

## O Que é uma View?

Uma View é uma tabela virtual criada a partir de uma consulta SQL.

Ela não armazena os dados separadamente.

A View apenas exibe o resultado de uma consulta.

---

## Conceito

Imagine que temos uma consulta utilizada todos os dias:

```sql
SELECT
    id_cliente,
    nome,
    email
FROM clientes;
```

Em vez de escrever essa consulta repetidamente, podemos criar uma View.

---

## Vantagem

Depois de criada, utilizamos a View como se fosse uma tabela.

---

## Criando uma View

### Sintaxe

```sql
CREATE VIEW nome_view AS
SELECT colunas
FROM tabela;
```

---

### Exemplo

```sql
CREATE VIEW vw_clientes AS
SELECT
    id_cliente,
    nome,
    email
FROM clientes;
```

---

## Utilizando uma View

Depois de criada:

```sql
SELECT *
FROM vw_clientes;
```

---

## Resultado

A consulta retorna os mesmos dados definidos na View.

---

## Exemplo com JOIN

Uma View pode conter JOINs.

```sql
CREATE VIEW vw_pedidos_clientes AS
SELECT
    c.nome,
    p.id_pedido
FROM clientes c
INNER JOIN pedidos p
    ON c.id_cliente = p.id_cliente;
```

---

## Utilizando a View

```sql
SELECT *
FROM vw_pedidos_clientes;
```

---

## Como Funciona?

A View executa a consulta armazenada sempre que for utilizada.

Ela não cria uma cópia dos dados.

---

## Atualização dos Dados

Se os dados da tabela original forem alterados:

```text
CLIENTES
```

a View refletirá automaticamente essas alterações.

---

## Exemplo

Tabela original:

| id_cliente | nome |
|------------|------|
| 1 | João |

View:

```sql
SELECT *
FROM vw_clientes;
```

---

Após atualizar:

```sql
UPDATE clientes
SET nome = 'João Silva'
WHERE id_cliente = 1;
```

---

Resultado da View:

| id_cliente | nome |
|------------|-------------|
| 1 | João Silva |

---

## Vantagens das Views

### Simplificação

Permitem reutilizar consultas complexas.

---

### Organização

Consultas frequentes ficam centralizadas.

---

### Segurança

É possível mostrar apenas determinadas colunas aos usuários.

---

### Padronização

Todos utilizam a mesma consulta.

---

## Exemplo de Segurança

Tabela:

```text
FUNCIONARIOS
```

Campos:

```text
id
nome
salario
```

---

Criando uma View sem salário:

```sql
CREATE VIEW vw_funcionarios_publica AS
SELECT
    id,
    nome
FROM funcionarios;
```

---

Agora o usuário acessa:

```sql
SELECT *
FROM vw_funcionarios_publica;
```

Sem visualizar salários.

---

## Removendo uma View

### Sintaxe

```sql
DROP VIEW nome_view;
```

---

### Exemplo

```sql
DROP VIEW vw_clientes;
```

---

## Verificando as Views

Dependendo da ferramenta utilizada, as Views aparecem listadas junto aos objetos do banco.

---

## Exemplo Completo

Criar:

```sql
CREATE VIEW vw_produtos AS
SELECT
    id_produto,
    nome_produto,
    preco
FROM produtos;
```

Consultar:

```sql
SELECT *
FROM vw_produtos;
```

Remover:

```sql
DROP VIEW vw_produtos;
```

---

## Situações Reais

### Loja Virtual

View com produtos disponíveis.

---

### Escola

View com alunos matriculados.

---

### Empresa

View com funcionários por departamento.

---

### Relatórios

View para consultas gerenciais.

---

## Limitações

Views não substituem tabelas.

Views dependem das tabelas originais.

Se uma tabela for removida, a View pode deixar de funcionar.

---

## Erros Comuns

### Erro 1

Achar que uma View armazena dados próprios.

---

### Erro 2

Confundir View com tabela física.

---

### Erro 3

Remover uma tabela utilizada por uma View.

---

### Erro 4

Criar Views desnecessárias para consultas muito simples.

---

## Resumo

- View é uma tabela virtual.
- É criada com CREATE VIEW.
- É removida com DROP VIEW.
- Não armazena dados próprios.
- Ajuda na organização e segurança.

---

## Tabela Resumo

| Comando | Função |
|----------|---------|
| CREATE VIEW | Criar View |
| DROP VIEW | Remover View |
| SELECT | Consultar View |

---

## Cola para Prova

- View = tabela virtual
- Não possui dados próprios
- CREATE VIEW cria
- DROP VIEW remove
- Pode conter JOIN
- Melhora organização
- Pode aumentar segurança

---

## Questões de Revisão

### 1. O que é uma View?

Resposta:

Uma tabela virtual baseada em uma consulta SQL.

---

### 2. Qual comando cria uma View?

Resposta:

```sql
CREATE VIEW
```

---

### 3. Qual comando remove uma View?

Resposta:

```sql
DROP VIEW
```

---

### 4. Uma View armazena dados próprios?

Resposta:

Não.

---

### 5. Cite uma vantagem das Views.

Resposta:

Simplificação de consultas, organização ou segurança.
