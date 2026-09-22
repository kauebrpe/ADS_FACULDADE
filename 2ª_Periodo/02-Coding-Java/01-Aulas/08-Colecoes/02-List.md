# List

## Introdução

A interface `List` é uma das estruturas mais utilizadas do Java Collections Framework.

Ela permite armazenar vários elementos em uma sequência ordenada.

Uma lista pode conter:

- Strings
- Números
- Objetos
- Qualquer outro tipo de dado

---

# O que é uma List?

Uma List é uma coleção ordenada de elementos.

Cada elemento possui uma posição chamada índice.

Exemplo:

```text
Índice 0 → João
Índice 1 → Maria
Índice 2 → Carlos
```

---

# Principais Características

Uma List:

- Mantém a ordem de inserção
- Permite elementos repetidos
- Permite acessar elementos por posição
- Possui tamanho variável

---

# Importando List

Antes de utilizar uma List, é necessário importar a interface.

```java
import java.util.List;
```

---

# Declarando uma List

```java
List<String> nomes;
```

Nesse momento apenas declaramos a variável.

A lista ainda não foi criada.

---

# O Que Significa?

```java
List<String>
```

Indica que a lista armazenará:

```text
Strings
```

---

# Outros Exemplos

Lista de inteiros:

```java
List<Integer> numeros;
```

---

Lista de alunos:

```java
List<Aluno> alunos;
```

---

Lista de filmes:

```java
List<Filme> filmes;
```

---

# Generics

Observe:

```java
<String>
```

Esse recurso é chamado de:

```text
Generics
```

Ele informa ao Java qual tipo de dado será armazenado.

---

# Benefícios dos Generics

- Mais segurança
- Menos erros
- Melhor organização

---

# Exemplo

```java
List<String> nomes;
```

Agora a lista aceita apenas Strings.

---

# Utilizando List com Objetos

Classe:

```java
public class Aluno {

    String nome;

}
```

---

Lista:

```java
List<Aluno> alunos;
```

---

Agora a lista pode armazenar objetos do tipo:

```java
Aluno
```

---

# Onde Utilizamos List?

Em praticamente qualquer sistema.

---

## Sistema Escolar

```java
List<Aluno>
```

---

## Loja Virtual

```java
List<Produto>
```

---

## Streaming

```java
List<Filme>
```

---

## Banco

```java
List<Conta>
```

---

# Vantagens da List

## Organização

Os dados permanecem ordenados.

---

## Facilidade de Uso

Acesso simples aos elementos.

---

## Flexibilidade

Pode crescer conforme a necessidade.

---

## Integração

Funciona perfeitamente com objetos.

---

# Exemplo Conceitual

Imagine uma lista de alunos:

```text
0 → Ana
1 → João
2 → Maria
3 → Carlos
```

Cada posição pode ser acessada individualmente.

---

# Relação com Array

Antes das Lists normalmente utilizamos Arrays.

Exemplo:

```java
String[] nomes = new String[3];
```

---

Problema:

```text
Tamanho fixo
```

---

A List resolve esse problema.

---

# Exemplo Visual

Array:

```text
Tamanho definido previamente
```

---

List:

```text
Cresce conforme necessário
```

---

# Cuidados

Utilizar o tipo correto.

Exemplo:

```java
List<String>
```

para textos.

---

```java
List<Aluno>
```

para objetos do tipo Aluno.

---

# Erros Comuns

## Erro 1

Achar que List é uma classe.

Na verdade ela é uma interface.

---

## Erro 2

Misturar tipos diferentes.

---

## Erro 3

Esquecer os Generics.

---

## Errado

```java
List lista;
```

---

## Melhor

```java
List<String> lista;
```

---

# Resumo

List é uma coleção ordenada.

---

Principais características:

- Possui índices
- Mantém ordem
- Aceita elementos repetidos
- Utiliza Generics

---

# Revisão Rápida

## O que é uma List?

Uma coleção ordenada de elementos.

---

## Uma List mantém a ordem dos elementos?

Sim.

---

## Uma List permite elementos repetidos?

Sim.

---

## O que significa?

```java
List<String>
```

Uma lista de Strings.

---

## O que são Generics?

Mecanismo utilizado para definir o tipo dos elementos armazenados.

---

## Em sistemas reais, podemos armazenar objetos em Lists?

Sim.
