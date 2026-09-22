# DER (Diagrama Entidade-Relacionamento) - Notação de Peter Chen

## Objetivo

Aprender a criar Diagramas Entidade-Relacionamento (DER) utilizando a notação de Peter Chen.

O DER é uma das ferramentas mais importantes da modelagem de dados, pois permite representar visualmente as regras de negócio antes da criação das tabelas.

---

# O que é um DER?

DER significa:

```text
Diagrama Entidade-Relacionamento
```

É uma representação gráfica utilizada para mostrar:

- Entidades
- Atributos
- Relacionamentos
- Cardinalidades

---

# O que é a Notação de Peter Chen?

A notação de Peter Chen é uma das formas mais conhecidas de representar um DER.

Ela utiliza símbolos específicos para cada elemento.

---

# Principais Elementos

## Entidade

Representa algo que existe no sistema.

Exemplos:

- Cliente
- Produto
- Funcionário
- Aluno
- Disciplina

---

## Como é Representada?

Uma entidade é representada por um retângulo.

Exemplo:

```text
+---------+
| CLIENTE |
+---------+
```

---

# Atributo

Representa uma característica de uma entidade.

Exemplo:

Entidade:

```text
CLIENTE
```

Atributos:

```text
id
nome
email
telefone
```

---

## Representação

Na notação de Peter Chen:

```text
(nome)
   |
CLIENTE
```

Os atributos são representados por elipses.

---

# Atributo Chave

É o atributo que identifica unicamente cada entidade.

Exemplo:

```text
id_cliente
```

---

## Exemplos

Cliente:

```text
id_cliente
```

Aluno:

```text
matricula
```

Produto:

```text
id_produto
```

---

# Relacionamento

Relacionamentos mostram como as entidades se conectam.

---

## Exemplo

```text
CLIENTE
    |
 REALIZA
    |
 PEDIDO
```

---

## Representação

Na notação de Peter Chen o relacionamento é representado por um losango.

```text
CLIENTE
    |
  REALIZA
    |
 PEDIDO
```

---

# Cardinalidade

A cardinalidade define quantas ocorrências de uma entidade podem se relacionar com outra.

---

# Relacionamento 1:1

Um para um.

---

## Exemplo

```text
Pessoa
    |
Possui
    |
Passaporte
```

Cada pessoa possui apenas um passaporte.

Cada passaporte pertence a apenas uma pessoa.

---

# Relacionamento 1:N

Um para muitos.

---

## Exemplo

```text
CLIENTE
    |
REALIZA
    |
PEDIDO
```

Um cliente pode realizar vários pedidos.

Um pedido pertence a apenas um cliente.

---

# Relacionamento N:N

Muitos para muitos.

---

## Exemplo

```text
ALUNO
    |
CURSA
    |
DISCIPLINA
```

Um aluno pode cursar várias disciplinas.

Uma disciplina pode possuir vários alunos.

---

# Exemplos Práticos

## Sistema Escolar

Entidades:

```text
ALUNO
DISCIPLINA
PROFESSOR
TURMA
```

---

## Sistema de Loja

Entidades:

```text
CLIENTE
PRODUTO
PEDIDO
```

---

## Sistema Hospitalar

Entidades:

```text
PACIENTE
MEDICO
CONSULTA
```

---

# DER do Sistema Escolar

Exemplo simplificado:

```text
ALUNO
   |
 CURSA
   |
DISCIPLINA
```

Cardinalidade:

```text
N:N
```

---

# DER do Sistema de Vendas

```text
CLIENTE
    |
 REALIZA
    |
 PEDIDO
```

Cardinalidade:

```text
1:N
```

---

# Identificando Entidades

Uma dica simples:

Pergunte:

```text
"O que precisa ser armazenado?"
```

As respostas normalmente viram entidades.

---

## Exemplo

Sistema de Biblioteca

Respostas:

```text
Livro
Autor
Aluno
Empréstimo
```

Essas entidades podem virar tabelas.

---

# Regras Importantes

## Regra 1

Toda entidade deve possuir um identificador.

---

## Regra 2

Todo relacionamento deve possuir sentido no negócio.

---

## Regra 3

Nem tudo que existe é uma entidade.

---

## Exemplo

```text
Telefone
```

normalmente é atributo.

---

Enquanto:

```text
Cliente
```

normalmente é entidade.

---

# Erros Comuns

## Erro 1

Confundir entidade com atributo.

---

## Erro 2

Criar entidades desnecessárias.

---

## Erro 3

Esquecer cardinalidades.

---

## Erro 4

Criar relacionamentos sem significado.

---

# Resumo

## Entidade

Representa algo do sistema.

---

## Atributo

Característica da entidade.

---

## Relacionamento

Ligação entre entidades.

---

## Cardinalidade

Quantidade de ocorrências relacionadas.

---

# Tabela Resumo

| Elemento | Representa |
|-----------|-----------|
| Entidade | Objeto do sistema |
| Atributo | Característica |
| Relacionamento | Ligação |
| Cardinalidade | Quantidade |

---

# Cola para Prova

- Entidade → Algo que existe no sistema
- Atributo → Característica da entidade
- Relacionamento → Conexão entre entidades
- 1:1 → Um para um
- 1:N → Um para muitos
- N:N → Muitos para muitos
- Peter Chen utiliza retângulos, elipses e losangos

---

# Questões de Revisão

## 1. O que significa DER?

Resposta:

Diagrama Entidade-Relacionamento.

---

## 2. O que é uma entidade?

Resposta:

Algo que existe no sistema e precisa ser armazenado.

---

## 3. O que é um atributo?

Resposta:

Uma característica de uma entidade.

---

## 4. O que é um relacionamento?

Resposta:

Uma ligação entre entidades.

---

## 5. Qual a diferença entre 1:N e N:N?

Resposta:

1:N significa um para muitos.

N:N significa muitos para muitos.
