
# Entidade Fraca, Atributos Especiais e Generalização

## Objetivo

Aprender conceitos importantes da modelagem conceitual:

- Entidade Forte
- Entidade Fraca
- Atributo Simples
- Atributo Composto
- Atributo Multivalorado
- Generalização
- Especialização

Estes conceitos ajudam a representar corretamente situações reais em um DER.

---

# Entidade Forte

Uma entidade forte possui identificador próprio.

Ela consegue existir sozinha.

---

## Exemplo

Cliente

Atributos:

- id_cliente
- nome
- email

Nesse caso:

```text
CLIENTE
```

possui sua própria chave.

---

## Exemplo Visual

```text
CLIENTE
---------
id_cliente
nome
email
```

---

# Entidade Fraca

Uma entidade fraca depende de outra entidade para existir.

Ela não possui identificação completa sozinha.

---

## Exemplo

Pedido

Item de Pedido

Um item de pedido não existe sem um pedido.

---

## Exemplo Visual

```text
PEDIDO
   |
POSSUI
   |
ITEM_PEDIDO
```

---

# Características da Entidade Fraca

- Depende de uma entidade forte
- Possui existência dependente
- Sua identificação normalmente utiliza chave composta

---

## Exemplo

Tabela Pedido:

```text
id_pedido
data
```

Tabela Item_Pedido:

```text
id_pedido
id_produto
quantidade
```

O Item_Pedido depende do Pedido.

---

# Atributo Simples

Possui apenas um valor.

---

## Exemplos

```text
Nome
CPF
Idade
Salário
```

---

# Atributo Composto

Pode ser dividido em partes menores.

---

## Exemplo

Endereço

Pode ser dividido em:

```text
Rua
Número
Bairro
Cidade
CEP
```

---

## Exemplo Visual

```text
ENDERECO
├─ rua
├─ numero
├─ bairro
├─ cidade
└─ cep
```

---

# Atributo Multivalorado

Pode armazenar vários valores para uma mesma entidade.

---

## Exemplo

Telefone

Um cliente pode possuir:

```text
(81) 99999-1111
(81) 98888-2222
(81) 97777-3333
```

---

## Solução na Modelagem

Normalmente criamos uma tabela separada.

Exemplo:

```text
CLIENTE
```

e

```text
TELEFONES_CLIENTE
```

---

# Atributo Derivado

É calculado a partir de outro atributo.

---

## Exemplo

Data de nascimento:

```text
15/03/2000
```

Idade:

```text
26 anos
```

A idade pode ser calculada.

---

# Generalização

Generalização é quando várias entidades possuem características em comum.

Criamos uma entidade mais genérica.

---

## Exemplo

Temos:

```text
Aluno
Professor
Funcionário
```

Todos possuem:

```text
Nome
CPF
Endereço
Telefone
```

---

Criamos:

```text
PESSOA
```

e colocamos os atributos comuns nela.

---

## Estrutura

```text
PESSOA
├─ nome
├─ cpf
└─ endereco

     ▲
     │
 ┌───┼───┐
 │   │   │
ALUNO
PROFESSOR
FUNCIONARIO
```

---

# Especialização

É o contrário da generalização.

Partimos de uma entidade genérica e criamos entidades mais específicas.

---

## Exemplo

```text
VEICULO
```

Especializações:

```text
CARRO
MOTO
CAMINHAO
```

---

## Estrutura

```text
VEICULO
   ▲
   │
 ┌─┼─┐
 │ │ │
CARRO
MOTO
CAMINHAO
```

---

# Quando Utilizar Generalização?

Quando diferentes entidades compartilham muitos atributos.

---

## Exemplo

Em vez de criar:

```text
ALUNO
(nome, cpf)

PROFESSOR
(nome, cpf)

FUNCIONARIO
(nome, cpf)
```

Criamos:

```text
PESSOA
(nome, cpf)
```

E especializamos depois.

---

# Exemplo Completo

Sistema Universitário:

```text
PESSOA
├─ nome
├─ cpf
└─ telefone

      ▲
      │
 ┌────┼────┐
 │         │
ALUNO   PROFESSOR
```

---

# Erros Comuns

## Erro 1

Confundir entidade fraca com entidade forte.

---

## Erro 2

Criar atributo multivalorado dentro da mesma tabela.

---

## Erro 3

Não dividir atributos compostos.

---

## Erro 4

Ignorar oportunidades de generalização.

---

# Resumo

## Entidade Forte

Possui identificação própria.

---

## Entidade Fraca

Depende de outra entidade.

---

## Atributo Simples

Não pode ser dividido.

---

## Atributo Composto

Pode ser dividido em partes menores.

---

## Atributo Multivalorado

Possui vários valores.

---

## Generalização

Agrupa entidades semelhantes.

---

## Especialização

Cria entidades específicas.

---

# Tabela Resumo

| Conceito | Descrição |
|-----------|-----------|
| Entidade Forte | Possui identificador próprio |
| Entidade Fraca | Depende de outra entidade |
| Atributo Simples | Valor único |
| Atributo Composto | Divisível em partes |
| Atributo Multivalorado | Possui vários valores |
| Generalização | Agrupa entidades |
| Especialização | Separa entidades |

---

# Cola para Prova

- Entidade Forte → Existe sozinha
- Entidade Fraca → Depende de outra entidade
- Atributo Simples → Não divide
- Atributo Composto → Divide em partes
- Atributo Multivalorado → Possui vários valores
- Generalização → Junta entidades semelhantes
- Especialização → Cria entidades específicas

---

# Questões de Revisão

## 1. O que é uma entidade forte?

Resposta:

Uma entidade que possui identificador próprio.

---

## 2. O que é uma entidade fraca?

Resposta:

Uma entidade que depende de outra para existir.

---

## 3. O que é um atributo composto?

Resposta:

Um atributo que pode ser dividido em partes menores.

---

## 4. O que é um atributo multivalorado?

Resposta:

Um atributo que pode possuir vários valores.

---

## 5. Qual a diferença entre generalização e especialização?

Resposta:

Generalização cria uma entidade mais genérica.

Especialização cria entidades mais específicas.
