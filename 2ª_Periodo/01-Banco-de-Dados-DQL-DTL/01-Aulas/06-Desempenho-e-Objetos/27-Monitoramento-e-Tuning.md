# Monitoramento e Tuning

## Objetivo

Aprender conceitos básicos de monitoramento e tuning de banco de dados.

Ao final deste tópico você será capaz de:

- Entender o que é monitoramento
- Entender o que é tuning
- Identificar problemas de desempenho
- Conhecer boas práticas de otimização
- Entender a relação entre estrutura e consultas SQL

---

## O Que é Monitoramento?

Monitoramento é o processo de acompanhar o funcionamento do banco de dados.

O objetivo é identificar:

- Lentidão
- Falhas
- Uso excessivo de recursos
- Consultas problemáticas

---

## Por Que Monitorar?

Sem monitoramento:

- Problemas demoram a ser descobertos
- Consultas lentas passam despercebidas
- O sistema pode ficar indisponível

Com monitoramento:

- Problemas são detectados mais cedo
- É possível agir antes que o sistema pare
- O desempenho pode ser melhorado

---

## O Que Pode Ser Monitorado?

Exemplos:

- Tempo de execução das consultas
- Utilização de CPU
- Consumo de memória
- Uso de disco
- Crescimento das tabelas
- Utilização de índices

---

## Exemplo de Problema

Tabela:

```text
CLIENTES
```

Quantidade:

```text
1.000.000 registros
```

Consulta:

```sql
SELECT *
FROM clientes
WHERE nome = 'João';
```

Sem índice adequado essa consulta pode ficar lenta.

---

## O Que é Tuning?

Tuning significa otimização.

É o processo de melhorar o desempenho do banco.

---

## Objetivo do Tuning

Fazer com que operações sejam executadas com menos consumo de recursos.

Exemplos:

- Consultas mais rápidas
- Menos uso de memória
- Menos acesso ao disco
- Melhor experiência do usuário

---

## Tipos de Tuning

### Tuning de Estrutura

Relaciona-se à forma como o banco foi construído.

Exemplos:

- Tipos de dados adequados
- Índices corretos
- Boa modelagem
- Normalização adequada

---

### Tuning de Consulta

Relaciona-se ao SQL utilizado.

Exemplos:

- Melhorar SELECT
- Reduzir filtros desnecessários
- Evitar consultas duplicadas
- Utilizar índices corretamente

---

## Exemplo de Consulta Pouco Eficiente

```sql
SELECT *
FROM clientes;
```

Em uma tabela muito grande isso pode retornar dados demais.

---

## Consulta Mais Específica

```sql
SELECT nome, email
FROM clientes
WHERE id_cliente = 10;
```

Menos dados precisam ser processados.

---

## Boas Práticas de Monitoramento

- Acompanhar consultas lentas
- Verificar crescimento das tabelas
- Monitorar utilização de memória
- Monitorar espaço em disco
- Verificar uso dos índices

---

## Boas Práticas de Tuning

- Criar índices quando necessário
- Evitar SELECT *
- Utilizar WHERE corretamente
- Escolher tipos de dados adequados
- Revisar consultas antigas

---

## Relação com EXPLAIN

O comando EXPLAIN ajuda a analisar como uma consulta será executada.

Exemplo:

```sql
EXPLAIN
SELECT *
FROM clientes
WHERE nome = 'João';
```

Ele auxilia na identificação de gargalos.

---

## Processo Básico de Otimização

1. Identificar problema
2. Analisar a causa
3. Aplicar correções
4. Testar novamente

---

## Exemplo

Problema:

```text
Consulta demora 20 segundos
```

Análise:

```text
Falta de índice
```

Correção:

```sql
CREATE INDEX idx_nome
ON clientes(nome);
```

Novo teste:

```text
Consulta executa em poucos milissegundos
```

---

## Ferramentas de Monitoramento

Cada SGBD possui ferramentas próprias.

Exemplos:

- MySQL Workbench
- SQL Server Management Studio
- Oracle Enterprise Manager

Também existem ferramentas externas de monitoramento.

---

## Erros Comuns

### Erro 1

Achar que toda lentidão é causada pelo SQL.

---

### Erro 2

Criar índices em todas as colunas.

---

### Erro 3

Nunca analisar consultas lentas.

---

### Erro 4

Ignorar crescimento das tabelas.

---

## Resumo

- Monitoramento identifica problemas
- Tuning corrige problemas
- Consultas lentas podem ser otimizadas
- Índices ajudam no desempenho
- EXPLAIN auxilia na análise

---

## Tabela Resumo

| Conceito | Função |
|-----------|---------|
| Monitoramento | Identificar problemas |
| Tuning | Otimizar desempenho |
| Índice | Acelerar consultas |
| EXPLAIN | Analisar consultas |

---

## Cola para Prova

- Monitoramento = identificar problemas
- Tuning = otimizar desempenho
- Estrutura ruim afeta desempenho
- Consultas ruins afetam desempenho
- EXPLAIN auxilia na análise
- Índices podem melhorar velocidade

---

## Questões de Revisão

### 1. O que é monitoramento?

Resposta:

Acompanhar o funcionamento do banco de dados.

---

### 2. O que é tuning?

Resposta:

Otimização de desempenho.

---

### 3. Qual comando ajuda a analisar consultas?

Resposta:

EXPLAIN.

---

### 4. Cite duas boas práticas de tuning.

Resposta:

Criar índices adequados e evitar SELECT *.

---

### 5. Qual é o objetivo principal do tuning?

Resposta:

Melhorar o desempenho do banco de dados.
``
