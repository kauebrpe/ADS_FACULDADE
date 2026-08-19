# [II Unidade] Projeto - Núcleo Saúde
**Unidade:** II Unidade  
**Linguagem:** C

## Mini Projeto

### Objetivo

Faça um programa **MODULARIZADO** que auxilie a Núcleo Saúde a manter o cadastro de seus clientes.

O sistema deve possuir as seguintes funcionalidades:

## 1. Cadastro de Cliente

Este módulo será responsável por cadastrar os dados dos clientes em um arquivo.

### Dados do cliente

- CPF
- Nome
- Sexo (1-Feminino / 2-Masculino)
- E-mail
- Data de nascimento do titular
- Telefone
- CPF - Terceiro
- Nome - Terceiro
- Data de nascimento - Terceiro
- Valor do plano de saúde
- Data de vencimento do plano de saúde

## 2. Cálculo do valor do plano de saúde

A Núcleo Saúde oferece quatro tipos de planos:

| Tipo | Plano | Valor Base |
|---|---|---:|
| 1 | Ouro | R$ 300,00 |
| 2 | Diamante | R$ 400,00 |
| 3 | Prata | R$ 200,00 |
| 4 | Esmeralda | R$ 500,00 |

### Regras para cálculo

- Clientes do sexo feminino com idade maior ou igual a 13 anos e menor que 35 anos: **acrescentar 30%** ao valor total do plano.
- Clientes que possuem mais de 1 dependente cadastrado: **20% de desconto** no valor total a ser pago.
- Clientes menores de 13 anos: **30% de desconto** no valor total a ser pago.
- Clientes maiores ou iguais a 60 anos: **acrescentar 40%** ao valor base do plano de saúde.
- O sistema deve permitir que o cliente tenha **mais de um dependente cadastrado**.

## 3. Editar

Permitir a edição dos dados de um cliente já cadastrado.

## 4. Remover

Permitir a remoção de um cliente cadastrado.

## 5. Listagem Geral

Realizar a listagem de todos os clientes com suas respectivas informações.

### Informações apresentadas

- CPF
- Nome
- Sexo
- Fone
- E-mail
- Idade
- Plano
- Dependente
- Valor do Plano
- Vencimento do Plano

## Tela Inicial

Núcleo Seguros

1 - Cadastrar Cliente
2 - Editar Cliente
3 - Remover Cliente
4 - Listagem Geral
5 - Listagem por Plano
6 - Listagem dos Vencimentos do Plano de Saúde do mês
0 - Sair

Escolha uma opção:

Tela da Listagem Geral

CPF        Nome       Sexo    Fone       Email       Idade    Plano    Dependente    Valor Plano    Vencimento do Plano

XX XXX XXX XX  XX     XX      XX         XX          XX       XX       XXXXXX        XXXXXX         XX/XX/XXXX

XX XXX XXX XX  XX     XX      XX         XX          XX       XX       XXXXXX        XXXXXX         XX/XX/XXXX

XX XXX XXX XX  XX     XX      XX         XX          XX       XX       XXXXXX        XXXXXX         XX/XX/XXXX

## Ao final:

Tecle enter para voltar ao Menu

- Observações
! O programa deve ser desenvolvido utilizando a linguagem C.
! O programa deve ser modularizado.
! Os dados dos clientes devem ser armazenados em arquivo.
! O sistema deve permitir mais de um dependente por cliente.
