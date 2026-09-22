
# Normalização

## Objetivo

Aprender o processo de normalização de bancos de dados para reduzir redundâncias, eliminar inconsistências e melhorar a organização das informações.

Neste tópico serão estudadas:

- Anomalias
- 1ª Forma Normal (1FN)
- 2ª Forma Normal (2FN)
- 3ª Forma Normal (3FN)

---

# O que é Normalização?

Normalização é o processo de organizar tabelas para evitar problemas com os dados.

O principal objetivo é:

- Reduzir redundância
- Evitar inconsistências
- Melhorar a integridade dos dados

---

# Por que Normalizar?

Imagine uma tabela mal estruturada:

| id_pedido | cliente | telefone | produto |
|------------|----------|------------|----------|
| 1 | João | 99999-1111 | Notebook |
| 2 | João | 99999-1111 | Mouse |
| 3 | João | 99999-1111 | Teclado |

Observe que:

```text
João está repetido
Telefone está repetido
```

Isso gera desperdício e problemas futuros.

---

# Anomalias

Anomalias são problemas causados por uma modelagem inadequada.

Existem três tipos principais.

---

# Anomalia de Inserção

Ocorre quando não conseguimos cadastrar uma informação sem cadastrar outra.

---

## Exemplo

Queremos cadastrar um cliente.

Mas a tabela exige um pedido.

Resultado:

```text
Não é possível cadastrar apenas o cliente.
```

---

# Anomalia de Atualização

Ocorre quando o mesmo dado aparece em vários registros.

---

## Exemplo

Telefone de João:

```text
99999-1111
```

Está presente em:

```text
Pedido 1
Pedido 2
Pedido 3
```

Se mudar:

```text
88888-2222
```

precisaremos atualizar vários registros.

---

# Anomalia de Exclusão

Ocorre quando removemos uma informação importante sem querer.

---

## Exemplo

Se apagarmos o último pedido de João:

```text
DELETE FROM pedidos;
```

Podemos perder também os dados do cliente.

---

# Primeira Forma Normal (1FN)

A 1FN exige que todos os atributos sejam atômicos.

---

# O que significa Atômico?

Significa:

```text
Apenas um valor por campo.
```

---

## Tabela Incorreta

| id | nome | telefones |
|----|-------|-------------------|
| 1 | João | 9999,8888,7777 |

---

## Problema

Há vários valores em uma mesma coluna.

---

## Tabela Correta

CLIENTES

| id | nome |
|----|------|
| 1 | João |

TELEFONES

| cliente_id | telefone |
|------------|-----------|
| 1 | 9999 |
| 1 | 8888 |
| 1 | 7777 |

---

# Regra da 1FN

Cada coluna deve possuir apenas um valor.

---

# Segunda Forma Normal (2FN)

A 2FN exige:

- Estar na 1FN
- Não possuir dependência parcial

---

# Dependência Parcial

Ocorre quando um atributo depende apenas de parte da chave composta.

---

## Exemplo

Tabela:

| pedido_id | produto_id | nome_produto |
|------------|------------|--------------|
| 1 | 10 | Notebook |
| 1 | 20 | Mouse |

Chave composta:

```text
pedido_id + produto_id
```

Mas:

```text
nome_produto
```

depende apenas de:

```text
produto_id
```

---

# Correção

Criar tabela PRODUTOS.

PRODUTOS

| produto_id | nome_produto |
|------------|--------------|
| 10 | Notebook |
| 20 | Mouse |

---

# Regra da 2FN

Todos os atributos devem depender da chave inteira.

---

# Terceira Forma Normal (3FN)

A 3FN exige:

- Estar na 2FN
- Não possuir dependência transitiva

---

# Dependência Transitiva

Ocorre quando um atributo depende de outro atributo que não é chave.

---

## Exemplo

CLIENTES

| id | cidade | estado | regiao |
|----|---------|--------|--------|
| 1 | Recife | PE | Nordeste |

Observe:

```text
regiao depende do estado
```

não do cliente.

---

# Correção

Criar tabela:

ESTADOS

| estado | regiao |
|---------|---------|
| PE | Nordeste |
| SP | Sudeste |

CLIENTES

| id | cidade | estado |
|----|---------|--------|
| 1 | Recife | PE |

---

# Regra da 3FN

Atributos não-chave devem depender apenas da chave primária.

---

# Mnemônico Clássico

Uma frase muito conhecida:

```text
Todo atributo deve depender:

da chave,
da chave toda,
e somente da chave.
```

---

# Exemplo Antes da Normalização

| pedido | cliente | telefone | produto |
|---------|---------|-----------|----------|
| 1 | João | 9999 | Notebook |
| 2 | João | 9999 | Mouse |

Problemas:

- Repetição
- Atualização difícil
- Risco de inconsistência

---

# Exemplo Depois da Normalização

CLIENTES

| id | nome | telefone |
|----|------|----------|
| 1 | João | 9999 |

PEDIDOS

| id | cliente_id |
|----|------------|
| 1 | 1 |
| 2 | 1 |

---

# Benefícios da Normalização

✅ Menos redundância

✅ Mais organização

✅ Melhor manutenção

✅ Menos inconsistências

✅ Banco mais profissional

---

# Quando Normalizar?

Durante a modelagem.

Fluxo ideal:

```text
DER
↓
Modelo Lógico
↓
Normalização
↓
Modelo Físico
↓
SQL
```

---

# Erros Comuns

## Erro 1

Guardar vários valores em uma única coluna.

---

## Erro 2

Duplicar informações em muitas linhas.

---

## Erro 3

Ignorar dependências entre atributos.

---

## Erro 4

Criar tabelas gigantes com muitas informações diferentes.

---

# Resumo

## 1FN

Sem grupos repetidos.

Um valor por campo.

---

## 2FN

Sem dependência parcial.

---

## 3FN

Sem dependência transitiva.

---

# Tabela Resumo

| Forma Normal | Objetivo |
|--------------|----------|
| 1FN | Valores atômicos |
| 2FN | Eliminar dependência parcial |
| 3FN | Eliminar dependência transitiva |

---

# Cola para Prova

- 1FN → Um valor por campo
- 2FN → Sem dependência parcial
- 3FN → Sem dependência transitiva
- Inserção, Atualização e Exclusão geram anomalias
- Normalização reduz redundância
- Chave primária é o centro da normalização

---

# Questões de Revisão

## 1. O que é normalização?

Resposta:

Processo de organizar tabelas para evitar redundâncias e inconsistências.

---

## 2. O que exige a 1FN?

Resposta:

Apenas um valor por campo.

---

## 3. O que exige a 2FN?

Resposta:

Eliminação de dependências parciais.

---

## 4. O que exige a 3FN?

Resposta:

Eliminação de dependências transitivas.

---

## 5. Quais são as três principais anomalias?

Resposta:

- Inserção
- Atualização
- Exclusão
