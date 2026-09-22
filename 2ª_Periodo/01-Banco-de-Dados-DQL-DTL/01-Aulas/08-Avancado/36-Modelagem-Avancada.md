# Modelagem Avançada

## Objetivo

Apresentar conceitos avançados de modelagem de dados normalmente estudados após a 3ª Forma Normal.

Neste tópico serão abordados:

- FNBC (Forma Normal de Boyce-Codd)
- 4FN (Quarta Forma Normal)
- OLTP
- OLAP
- Particionamento

---

## Revisão

Até agora estudamos:

- 1FN
- 2FN
- 3FN

Essas formas normais resolvem a maioria dos problemas encontrados em sistemas convencionais.

Porém existem situações mais complexas que exigem técnicas adicionais.

---

# FNBC (Forma Normal de Boyce-Codd)

FNBC significa:

```text
Forma Normal de Boyce-Codd
```

É considerada uma versão mais rigorosa da 3FN.

---

## Objetivo

Eliminar dependências que ainda podem causar inconsistências.

---

## Regra Simplificada

Todo determinante deve ser uma chave candidata.

---

## Benefício

Reduz ainda mais a redundância dos dados.

---

# Exemplo Simplificado

Imagine uma tabela onde:

```text
Professor
Sala
Disciplina
```

determinadas regras podem gerar dependências que a 3FN não elimina completamente.

A FNBC corrige esse tipo de situação.

---

# 4FN (Quarta Forma Normal)

A 4FN trabalha com dependências multivaloradas.

---

## Problema

Imagine:

```text
Aluno
Telefone
Curso
```

Um aluno pode possuir:

- vários telefones
- vários cursos

---

Isso pode gerar combinações desnecessárias.

---

## Solução

Separar as informações em tabelas adequadas.

Exemplo:

```text
ALUNOS
```

```text
ALUNOS_TELEFONES
```

```text
ALUNOS_CURSOS
```

---

## Benefício

Evita duplicação excessiva.

---

# OLTP

OLTP significa:

```text
Online Transaction Processing
```

São sistemas voltados para operações do dia a dia.

---

## Exemplos

- Banco Digital
- PIX
- Loja Virtual
- Sistema Escolar
- Sistema Hospitalar

---

## Características

- Muitas operações
- Muitos INSERTs
- Muitos UPDATEs
- Respostas rápidas
- Dados atuais

---

## Exemplo

Quando um cliente realiza uma compra:

```text
Pedido criado
↓
Estoque atualizado
↓
Pagamento registrado
```

Isso é OLTP.

---

# OLAP

OLAP significa:

```text
Online Analytical Processing
```

São sistemas voltados para análise de dados.

---

## Exemplos

- Dashboards
- Business Intelligence
- Relatórios gerenciais
- Data Warehouse

---

## Características

- Consultas complexas
- Grandes volumes de dados
- Análises históricas
- Poucas alterações

---

## Exemplo

Relatório:

```text
Total de vendas dos últimos 5 anos
```

Isso é OLAP.

---

# Comparação Entre OLTP e OLAP

| Característica | OLTP | OLAP |
|---------------|------|------|
| Objetivo | Operação diária | Análise |
| Dados | Atuais | Históricos |
| Atualizações | Muitas | Poucas |
| Consultas | Simples | Complexas |
| Usuários | Operacionais | Analistas |

---

# Particionamento

Particionamento é uma técnica utilizada para dividir tabelas muito grandes em partes menores.

---

## Objetivo

Melhorar:

- Desempenho
- Organização
- Escalabilidade

---

# Exemplo

Tabela:

```text
VENDAS
```

Com:

```text
100 milhões de registros
```

---

Em vez de armazenar tudo junto:

```text
VENDAS
```

podemos dividir:

```text
VENDAS_2024
VENDAS_2025
VENDAS_2026
```

---

# Benefícios do Particionamento

- Consultas mais rápidas
- Melhor organização
- Menor volume processado
- Facilidade de manutenção

---

# Aplicação no Mundo Real

Sistemas grandes utilizam:

- Particionamento
- OLAP
- Replicação
- Data Warehouses

para lidar com grandes volumes de informação.

---

# Quando Utilizar?

### FNBC

Quando ainda existem dependências problemáticas após a 3FN.

---

### 4FN

Quando existem dependências multivaloradas.

---

### OLTP

Sistemas operacionais.

---

### OLAP

Análise e relatórios.

---

### Particionamento

Grandes volumes de dados.

---

# Erros Comuns

## Erro 1

Confundir OLTP com OLAP.

---

## Erro 2

Achar que toda tabela precisa de particionamento.

---

## Erro 3

Aplicar normalizações avançadas sem necessidade.

---

## Erro 4

Pensar que OLAP substitui OLTP.

Os dois possuem objetivos diferentes.

---

# Resumo

- FNBC é uma evolução da 3FN.
- 4FN trata dependências multivaloradas.
- OLTP é voltado para operações.
- OLAP é voltado para análises.
- Particionamento divide grandes tabelas.

---

# Tabela Resumo

| Conceito | Finalidade |
|-----------|-----------|
| FNBC | Reduzir dependências |
| 4FN | Eliminar dependências multivaloradas |
| OLTP | Operação diária |
| OLAP | Análise de dados |
| Particionamento | Dividir tabelas grandes |

---

# Cola para Prova

- FNBC = evolução da 3FN
- 4FN = dependências multivaloradas
- OLTP = transações do dia a dia
- OLAP = análise e relatórios
- Particionamento = dividir tabelas grandes

---

# Questões de Revisão

## 1. O que significa FNBC?

Resposta:

Forma Normal de Boyce-Codd.

---

## 2. O que a 4FN procura resolver?

Resposta:

Dependências multivaloradas.

---

## 3. O que significa OLTP?

Resposta:

Online Transaction Processing.

---

## 4. O que significa OLAP?

Resposta:

Online Analytical Processing.

---

## 5. Para que serve o particionamento?

Resposta:

Dividir tabelas muito grandes para melhorar desempenho e organização.
