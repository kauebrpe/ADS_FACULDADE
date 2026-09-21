# Modelos de Dados, Esquemas e Arquiteturas

## Objetivo

Compreender os principais modelos de dados utilizados ao longo da história dos bancos de dados, entender o conceito de esquema e conhecer as arquiteturas mais comuns de banco de dados.

---

# O que é um Modelo de Dados?

Um modelo de dados é uma forma de representar como os dados serão organizados e relacionados dentro de um banco de dados.

Ele funciona como um "mapa" que mostra como as informações serão armazenadas.

---

# Principais Modelos de Dados

Ao longo da evolução dos bancos de dados surgiram diversos modelos.

Os principais são:

```text
Hierárquico
Rede
Relacional
```

---

# Modelo Hierárquico

Foi um dos primeiros modelos utilizados.

Os dados são organizados em forma de árvore.

## Estrutura

```text
Empresa
│
├── RH
│   ├── Funcionário 1
│   └── Funcionário 2
│
└── TI
    ├── Funcionário 3
    └── Funcionário 4
```

---

## Vantagens

✅ Simples

✅ Fácil navegação

---

## Desvantagens

❌ Pouca flexibilidade

❌ Difícil representar relacionamentos complexos

---

# Modelo em Rede

Foi criado para superar algumas limitações do modelo hierárquico.

Permite que um registro possua múltiplos relacionamentos.

---

## Estrutura

```text
Aluno
 ├── Disciplina
 ├── Disciplina
 └── Disciplina
```

Um aluno pode cursar várias disciplinas.

Uma disciplina pode possuir vários alunos.

---

## Vantagens

✅ Mais flexível

✅ Relacionamentos mais ricos

---

## Desvantagens

❌ Complexidade elevada

❌ Difícil manutenção

---

# Modelo Relacional

É o modelo utilizado atualmente pelo MySQL.

Foi proposto por Edgar F. Codd em 1970.

---

## Estrutura

Dados organizados em tabelas.

### Exemplo

Tabela:

```text
ALUNOS
```

| id | nome |
|----|------|
| 1 | João |
| 2 | Maria |

---

## Conceitos Principais

### Tabela

Conjunto de registros.

---

### Linha

Representa um registro.

Exemplo:

```text
João
```

---

### Coluna

Representa um atributo.

Exemplo:

```text
nome
```

---

## Vantagens

✅ Fácil entendimento

✅ Linguagem SQL

✅ Flexibilidade

✅ Ampla utilização

---

## Desvantagens

❌ Pode exigir planejamento mais cuidadoso

❌ Modelagem inadequada gera problemas de desempenho

---

# Comparação dos Modelos

| Modelo | Estrutura |
|----------|----------|
| Hierárquico | Árvore |
| Rede | Grafo |
| Relacional | Tabelas |

---

# O que é um Esquema?

Um esquema descreve a estrutura do banco de dados.

Ele define:

- Tabelas
- Colunas
- Chaves
- Relacionamentos
- Restrições

---

# Exemplo de Esquema

```sql
CREATE TABLE alunos (
    id INT PRIMARY KEY,
    nome VARCHAR(100)
);
```

O esquema informa:

```text
Tabela: alunos
Colunas: id, nome
Chave Primária: id
```

---

# Esquema x Dados

## Esquema

Estrutura.

Exemplo:

```text
Tabela alunos
```

---

## Dados

Conteúdo armazenado.

Exemplo:

```text
1 | João
2 | Maria
```

---

# Arquiteturas de Banco de Dados

Arquitetura define como os dados e os usuários estão organizados.

---

# Arquitetura Monolítica

Tudo fica em uma única máquina.

```text
Aplicação
+
Banco de Dados
+
Usuário
```

---

## Vantagens

✅ Simplicidade

✅ Fácil configuração

---

## Desvantagens

❌ Escalabilidade limitada

---

# Arquitetura Cliente-Servidor

A mais utilizada atualmente.

```text
Cliente
   ↓
Servidor de Banco de Dados
```

---

## Exemplo

```text
Notebook
↓
MySQL Server
```

---

## Vantagens

✅ Maior controle

✅ Mais segurança

✅ Melhor desempenho

---

# Arquitetura Distribuída

Os dados ficam espalhados entre diferentes máquinas.

```text
Servidor 1
Servidor 2
Servidor 3
```

Todos compartilham informações.

---

## Vantagens

✅ Alta disponibilidade

✅ Escalabilidade

✅ Tolerância a falhas

---

## Desvantagens

❌ Maior complexidade

---

# Arquiteturas em Resumo

| Arquitetura | Característica |
|------------|---------------|
| Monolítica | Tudo em uma máquina |
| Cliente-Servidor | Cliente acessa servidor |
| Distribuída | Dados distribuídos |

---

# Exemplos Reais

## Sistema Escolar

Cliente-Servidor.

```text
Aluno
↓
Sistema
↓
Banco de Dados
```

---

## Netflix

Arquitetura distribuída.

Dados espalhados por vários servidores.

---

## Banco Digital

Arquitetura distribuída.

Alta disponibilidade e escalabilidade.

---

# Erros Comuns

## Erro 1

Confundir tabela com banco de dados.

Banco pode conter várias tabelas.

---

## Erro 2

Confundir esquema com dados.

Esquema = estrutura.

Dados = conteúdo.

---

## Erro 3

Pensar que MySQL é um modelo.

MySQL é um SGBD.

O modelo utilizado pelo MySQL é o:

```text
Modelo Relacional
```

---

# Resumo

## Modelo Hierárquico

Estrutura em árvore.

---

## Modelo de Rede

Estrutura em grafo.

---

## Modelo Relacional

Estrutura em tabelas.

---

## Esquema

Estrutura do banco.

---

## Cliente-Servidor

Arquitetura mais comum.

---

# Cola para Prova

```text
Hierárquico = Árvore

Rede = Grafo

Relacional = Tabelas

Esquema = Estrutura

Dados = Conteúdo

MySQL = Modelo Relacional

Cliente-Servidor = Arquitetura mais utilizada
```

---

# Questões de Revisão

## 1

Qual modelo de dados é utilizado pelo MySQL?

Resposta:

Modelo Relacional.

---

## 2

Em qual estrutura o modelo hierárquico organiza os dados?

Resposta:

Árvore.

---

## 3

O que é um esquema?

Resposta:

A estrutura do banco de dados.

---

## 4

Qual a arquitetura mais utilizada atualmente?

Resposta:

Cliente-Servidor.

---

## 5

Qual a diferença entre esquema e dados?

Resposta:

Esquema é a estrutura. Dados são as informações armazenadas.
