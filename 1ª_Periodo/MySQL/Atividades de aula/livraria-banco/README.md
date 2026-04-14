#  Atividade Prática - Banco de Dados (Livraria)

##  Objetivo

Modelar e implementar um banco de dados relacional para uma rede de livrarias, partindo do modelo conceitual (DER) até o modelo lógico em SQL.

---

##  Modelo Conceitual (DER)

O Diagrama Entidade-Relacionamento foi construído utilizando a notação de Peter Chen.

###  Entidades

* Autor
* Livro
* Filial
* Cliente
* Venda

###  Atributos principais

**Autor**

* id_autor (PK)
* nome
* nacionalidade

**Livro**

* ISBN (PK)
* título
* preço
* ano de publicação

**Filial**

* id_filial (PK)
* cidade
* endereço

**Cliente**

* cpf (PK)
* nome
* telefone

**Venda**

* id_venda (PK)
* data_venda
* total

---

##  Relacionamentos e Cardinalidades

| Relacionamento | Entidades       | Cardinalidade |
| -------------- | --------------- | ------------- |
| ESCREVE        | Autor - Livro   | N:M           |
| POSSUI         | Filial - Livro  | N:M           |
| INCLUI         | Venda - Livro   | N:M           |
| FAZ            | Cliente - Venda | 1:N           |
| REALIZA        | Filial - Venda  | 1:N           |

---

##  Modelo Lógico

Os relacionamentos N:M foram transformados em tabelas associativas:

* **Escreve** (Autor ↔ Livro)
* **Possui** (Filial ↔ Livro)
* **Inclui** (Venda ↔ Livro)

Os relacionamentos 1:N foram implementados por meio de chaves estrangeiras na tabela Venda.

---

##  Estrutura do Projeto

* `DER.png` → Diagrama Entidade-Relacionamento
* `modelo.sql` → Script SQL do banco de dados

---

## Observações

* Um livro pode ter vários autores.
* Uma venda pode conter vários livros.
* O atributo **total** da venda pode ser considerado derivado, pois pode ser calculado a partir dos itens da venda.

---

## Tecnologias utilizadas

* MySQL
* Draw.io (ou brModelo)

