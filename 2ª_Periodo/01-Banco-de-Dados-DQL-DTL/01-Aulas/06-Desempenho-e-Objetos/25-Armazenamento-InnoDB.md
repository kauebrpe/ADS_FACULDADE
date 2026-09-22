# Armazenamento e InnoDB

## Objetivo

Compreender como o MySQL armazena dados fisicamente e conhecer os principais conceitos relacionados ao mecanismo de armazenamento InnoDB.

Ao final deste tópico você será capaz de entender:

- Como os dados são armazenados
- O que são registros
- O que são páginas
- O que são blocos
- Como funciona o InnoDB
- Por que algumas consultas são rápidas e outras são lentas

---

# Por Que Estudar Armazenamento?

Quando utilizamos SQL normalmente pensamos apenas em tabelas e consultas.

Porém o banco precisa armazenar essas informações em disco.

Entender como isso acontece ajuda a compreender:

- Desempenho
- Índices
- Otimização
- EXPLAIN
- Tuning

---

# Como o Banco Armazena Dados?

Quando criamos uma tabela:

```sql
CREATE TABLE alunos (
    id INT PRIMARY KEY,
    nome VARCHAR(100)
);
```

Os dados não ficam apenas "na tabela".

Eles são armazenados fisicamente em estruturas internas do banco.

---

# Registro

O registro é a menor unidade de informação armazenada.

Também é chamado de linha.

Exemplo:

Tabela ALUNOS

| id | nome |
|----|------|
| 1 | João |
| 2 | Maria |

Cada linha é um registro.

---

# Página

Os registros são agrupados em páginas.

Uma página é a menor unidade de leitura e escrita utilizada pelo banco de dados.

O MySQL não lê um registro por vez.

Ele lê páginas inteiras.

---

# Exemplo

Imagine:

```text
Página 1
├─ Registro 1
├─ Registro 2
├─ Registro 3
└─ Registro 4
```

Quando o banco precisa de um desses registros, normalmente a página inteira é carregada.

---

# Bloco

Os blocos agrupam múltiplas páginas.

Podemos imaginar a seguinte hierarquia:

```text
Bloco
│
├─ Página
│   ├─ Registro
│   ├─ Registro
│   └─ Registro
│
└─ Página
    ├─ Registro
    ├─ Registro
    └─ Registro
```

---

# Hierarquia de Armazenamento

De forma simplificada:

```text
Banco
↓
Tabela
↓
Blocos
↓
Páginas
↓
Registros
```

---

# O Que é InnoDB?

InnoDB é o mecanismo de armazenamento padrão do MySQL.

Quando criamos uma tabela normalmente o MySQL utiliza InnoDB automaticamente.

---

## Exemplo

```sql
CREATE TABLE alunos (
    id INT PRIMARY KEY,
    nome VARCHAR(100)
) ENGINE=InnoDB;
```

---

# Principais Características do InnoDB

- Suporte a transações
- Suporte a chaves estrangeiras
- Controle de concorrência
- Recuperação após falhas
- Alto desempenho

---

# Por Que o InnoDB é Importante?

Praticamente todos os recursos modernos do MySQL dependem dele.

Exemplos:

- COMMIT
- ROLLBACK
- FOREIGN KEY
- Índices B-Tree

---

# Tablespace

O InnoDB armazena dados em áreas chamadas Tablespaces.

Podemos imaginar um Tablespace como um espaço reservado para guardar dados e índices.

---

# Buffer Pool

O Buffer Pool é uma área de memória RAM utilizada pelo InnoDB.

Ele guarda páginas utilizadas com frequência.

Objetivo:

```text
Reduzir acesso ao disco.
```

---

# Exemplo

Sem Buffer Pool:

```text
Consulta
↓
Disco
↓
Resposta
```

Mais lento.

---

Com Buffer Pool:

```text
Consulta
↓
RAM
↓
Resposta
```

Mais rápido.

---

# Por Que Algumas Consultas São Lentas?

Alguns motivos comuns:

- Muitas linhas
- Falta de índice
- Leitura excessiva de páginas
- Estrutura mal planejada

---

# Exemplo Simples

Tabela:

```text
1.000.000 registros
```

Consulta:

```sql
SELECT *
FROM clientes
WHERE nome = 'João';
```

Sem índice:

```text
O banco pode precisar verificar muitas páginas.
```

---

# Relação com Índices

No próximo tópico veremos índices.

Os índices ajudam o banco a localizar páginas mais rapidamente.

Resultado:

```text
Menos leitura
Mais velocidade
```

---

# Tipos de Dados e Armazenamento

Quanto maior o tipo de dado:

```text
Mais espaço ocupa
```

---

## Exemplo

```sql
INT
```

Ocupa menos espaço que:

```sql
BIGINT
```

---

## Exemplo

```sql
VARCHAR(50)
```

Ocupa menos espaço que:

```sql
VARCHAR(255)
```

quando o tamanho é adequado.

---

# Exemplo Completo

```sql
CREATE TABLE produtos (
    id INT PRIMARY KEY,
    nome VARCHAR(100),
    preco DECIMAL(10,2)
) ENGINE=InnoDB;
```

Nessa tabela:

- Os registros serão armazenados em páginas
- As páginas serão organizadas pelo InnoDB
- O Buffer Pool poderá manter páginas em memória

---

# Boas Práticas

- Utilizar tipos de dados adequados
- Criar índices quando necessário
- Evitar tabelas excessivamente largas
- Planejar a estrutura antes da implementação
- Utilizar InnoDB como padrão

---

# Erros Comuns

## Erro 1

Achar que o banco acessa apenas um registro por vez.

---

## Erro 2

Ignorar o impacto dos tipos de dados.

---

## Erro 3

Acreditar que desempenho depende apenas da consulta.

---

## Erro 4

Não considerar a estrutura física do banco.

---

# Resumo

- Registro = linha
- Página = conjunto de registros
- Bloco = conjunto de páginas
- InnoDB = mecanismo padrão do MySQL
- Buffer Pool = memória utilizada para acelerar consultas

---

# Tabela Resumo

| Conceito | Descrição |
|-----------|-----------|
| Registro | Linha da tabela |
| Página | Conjunto de registros |
| Bloco | Conjunto de páginas |
| InnoDB | Mecanismo de armazenamento |
| Buffer Pool | Cache em memória |

---

# Cola para Prova

- Registro = linha
- Página = menor unidade de leitura
- Bloco = conjunto de páginas
- InnoDB = engine padrão do MySQL
- Buffer Pool = memória para acelerar consultas
- Mais páginas lidas = consulta mais lenta
- Índices ajudam a localizar dados mais rápido

---

# Questões de Revisão

## 1. O que é um registro?

Resposta:

Uma linha da tabela.

---

## 2. O que é uma página?

Resposta:

Um conjunto de registros armazenados juntos.

---

## 3. O que é um bloco?

Resposta:

Um conjunto de páginas.

---

## 4. O que é InnoDB?

Resposta:

O mecanismo de armazenamento padrão do MySQL.

---

## 5. Para que serve o Buffer Pool?

Resposta:

Armazenar páginas em memória para acelerar consultas.
