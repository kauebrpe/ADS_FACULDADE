# For Each

## Introdução

Quando trabalhamos com coleções, uma das tarefas mais comuns é percorrer todos os elementos armazenados.

Existem várias formas de fazer isso.

Uma das mais utilizadas é o:

```java
for each
```

Também conhecido como:

```text
Enhanced For
```

ou

```text
For Melhorado
```

---

# O que é o For Each?

O For Each é uma versão simplificada do FOR tradicional.

Ele foi criado para facilitar a leitura de elementos armazenados em:

- Arrays
- List
- ArrayList
- Coleções em geral

---

# Sintaxe

```java
for (Tipo variavel : colecao) {

    // código

}
```

---

# Entendendo a Estrutura

Exemplo:

```java
for (String nome : nomes) {

    System.out.println(nome);

}
```

---

Onde:

```java
String
```

é o tipo dos elementos.

---

```java
nome
```

é a variável que receberá cada elemento.

---

```java
nomes
```

é a coleção que será percorrida.

---

# Exemplo com ArrayList

```java
List<String> nomes =
    new ArrayList<>();
```

---

Adicionando elementos:

```java
nomes.add("João");
nomes.add("Maria");
nomes.add("Carlos");
```

---

Percorrendo:

```java
for (String nome : nomes) {

    System.out.println(nome);

}
```

---

## Resultado

```text
João
Maria
Carlos
```

---

# Comparação com FOR Tradicional

## FOR Tradicional

```java
for (int i = 0;
     i < nomes.size();
     i++) {

    System.out.println(
        nomes.get(i)
    );

}
```

---

## FOR EACH

```java
for (String nome : nomes) {

    System.out.println(nome);

}
```

---

Resultado:

```text
Mesmo resultado
Menos código
Mais legibilidade
```

---

# Exemplo com Inteiros

```java
List<Integer> numeros =
    new ArrayList<>();
```

---

Adicionando:

```java
numeros.add(10);
numeros.add(20);
numeros.add(30);
```

---

Percorrendo:

```java
for (Integer numero : numeros) {

    System.out.println(numero);

}
```

---

## Resultado

```text
10
20
30
```

---

# Exemplo com Objetos

Classe:

```java
public class Aluno {

    String nome;

}
```

---

Lista:

```java
List<Aluno> alunos =
    new ArrayList<>();
```

---

Criando objetos:

```java
Aluno aluno1 = new Aluno();
aluno1.nome = "João";

Aluno aluno2 = new Aluno();
aluno2.nome = "Maria";
```

---

Adicionando:

```java
alunos.add(aluno1);
alunos.add(aluno2);
```

---

Percorrendo:

```java
for (Aluno aluno : alunos) {

    System.out.println(
        aluno.nome
    );

}
```

---

## Resultado

```text
João
Maria
```

---

# Exemplo Prático

Lista de filmes:

```java
List<String> filmes =
    new ArrayList<>();
```

---

Adicionando:

```java
filmes.add("Matrix");
filmes.add("Interestelar");
filmes.add("Avatar");
```

---

Percorrendo:

```java
for (String filme : filmes) {

    System.out.println(filme);

}
```

---

Resultado:

```text
Matrix
Interestelar
Avatar
```

---

# Quando Utilizar For Each?

O For Each é ideal para:

- Exibir elementos
- Percorrer listas
- Ler informações
- Processar objetos

---

# Quando Não Utilizar?

Quando precisamos do índice.

Exemplo:

```text
posição 0
posição 1
posição 2
```

Nesse caso o FOR tradicional costuma ser mais adequado.

---

# Exemplo com Índice

```java
for (int i = 0;
     i < nomes.size();
     i++) {

    System.out.println(i);

}
```

---

O For Each não fornece o índice diretamente.

---

# Vantagens do For Each

## Código Menor

Menos linhas.

---

## Melhor Leitura

Mais simples de compreender.

---

## Menos Erros

Não precisamos controlar:

```java
i++
```

---

## Muito Utilizado

É bastante usado em projetos Java.

---

# Erros Comuns

## Erro 1

Esquecer o tipo correto.

---

Errado:

```java
for (String numero : numeros)
```

---

Se:

```java
numeros
```

for uma lista de Integer.

---

## Erro 2

Confundir o For Each com o FOR tradicional.

---

## Erro 3

Esperar acessar índices diretamente.

---

# Exemplo Completo

```java
import java.util.ArrayList;
import java.util.List;

public class Principal {

    public static void main(String[] args) {

        List<String> nomes =
            new ArrayList<>();

        nomes.add("João");
        nomes.add("Maria");
        nomes.add("Pedro");

        for (String nome : nomes) {

            System.out.println(nome);

        }

    }

}
```

---

# Resumo

For Each é uma forma simplificada de percorrer coleções.

---

Sintaxe:

```java
for (Tipo item : colecao)
```

---

Funciona com:

- Arrays
- List
- ArrayList
- Coleções

---

É mais utilizado quando não precisamos do índice.

---

# Revisão Rápida

## O que é For Each?

Uma forma simplificada de percorrer coleções.

---

## Qual a sintaxe básica?

```java
for (Tipo item : colecao)
```

---

## O For Each funciona com ArrayList?

Sim.

---

## O For Each fornece o índice diretamente?

Não.

---

## Qual sua principal vantagem?

Código mais simples e legível.
