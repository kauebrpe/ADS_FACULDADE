# Métodos Mais Utilizados em Coleções

## Introdução

Ao trabalhar com `List` e `ArrayList`, alguns métodos aparecem constantemente.

Os mais importantes são:

```java
add()
remove()
get()
set()
contains()
size()
isEmpty()
clear()
```

Dominar esses métodos é suficiente para resolver grande parte dos exercícios e projetos iniciais.

---

# add()

Utilizado para adicionar elementos na coleção.

---

## Exemplo

```java
List<String> nomes =
    new ArrayList<>();

nomes.add("João");
nomes.add("Maria");
nomes.add("Carlos");
```

---

## Resultado

```text
[João, Maria, Carlos]
```

---

# get()

Retorna um elemento de acordo com sua posição.

---

## Exemplo

```java
System.out.println(
    nomes.get(0)
);
```

---

Resultado:

```text
João
```

---

# Índices

Lembre-se:

```text
0 → João
1 → Maria
2 → Carlos
```

---

# set()

Altera um elemento existente.

---

## Exemplo

```java
nomes.set(1, "Ana");
```

---

Resultado:

```text
[João, Ana, Carlos]
```

---

# remove()

Remove elementos da coleção.

---

## Remover por Índice

```java
nomes.remove(0);
```

---

Resultado:

```text
[Ana, Carlos]
```

---

## Remover por Valor

```java
nomes.remove("Carlos");
```

---

Resultado:

```text
[Ana]
```

---

# contains()

Verifica se um elemento existe na coleção.

---

## Exemplo

```java
boolean existe =
    nomes.contains("Ana");

System.out.println(existe);
```

---

Resultado:

```text
true
```

---

# size()

Retorna a quantidade de elementos.

---

## Exemplo

```java
System.out.println(
    nomes.size()
);
```

---

Resultado:

```text
1
```

---

# isEmpty()

Verifica se a coleção está vazia.

---

## Exemplo

```java
List<String> nomes =
    new ArrayList<>();

System.out.println(
    nomes.isEmpty()
);
```

---

Resultado:

```text
true
```

---

Após adicionar um elemento:

```java
nomes.add("João");
```

---

Resultado:

```text
false
```

---

# clear()

Remove todos os elementos da coleção.

---

## Exemplo

```java
nomes.clear();
```

---

Resultado:

```text
[]
```

---

# Exemplo Completo

```java
List<String> nomes =
    new ArrayList<>();

nomes.add("João");
nomes.add("Maria");
nomes.add("Carlos");

System.out.println(nomes);

nomes.set(1, "Ana");

System.out.println(nomes);

nomes.remove("Carlos");

System.out.println(nomes);
```

---

## Saída

```text
[João, Maria, Carlos]

[João, Ana, Carlos]

[João, Ana]
```

---

# Trabalhando com Objetos

Podemos utilizar os mesmos métodos para objetos.

---

## Classe

```java
public class Aluno {

    String nome;

}
```

---

## Coleção

```java
List<Aluno> alunos =
    new ArrayList<>();
```

---

## Adicionando

```java
Aluno aluno = new Aluno();

aluno.nome = "Kauê";

alunos.add(aluno);
```

---

## Acessando

```java
System.out.println(
    alunos.get(0).nome
);
```

---

Resultado:

```text
Kauê
```

---

# Métodos Mais Utilizados

## Inserir

```java
add()
```

---

## Ler

```java
get()
```

---

## Alterar

```java
set()
```

---

## Remover

```java
remove()
```

---

## Verificar existência

```java
contains()
```

---

## Quantidade

```java
size()
```

---

## Verificar vazio

```java
isEmpty()
```

---

## Limpar coleção

```java
clear()
```

---

# Exemplo Prático

Lista de filmes:

```java
List<String> filmes =
    new ArrayList<>();

filmes.add("Matrix");
filmes.add("Avatar");
filmes.add("Interestelar");
```

---

Quantidade:

```java
filmes.size();
```

---

Verificar existência:

```java
filmes.contains("Avatar");
```

---

Obter filme:

```java
filmes.get(0);
```

---

Remover filme:

```java
filmes.remove("Avatar");
```

---

# Erros Comuns

## Erro 1

Acessar posição inexistente.

```java
nomes.get(10);
```

---

Resultado:

```text
IndexOutOfBoundsException
```

---

## Erro 2

Confundir:

```java
size()
```

com:

```java
length
```

---

ArrayList usa:

```java
size()
```

---

## Erro 3

Tentar acessar elementos de uma lista vazia.

---

## Erro 4

Não verificar se o elemento existe antes de removê-lo.

---

# Resumo

Métodos mais importantes:

```java
add()
get()
set()
remove()
contains()
size()
isEmpty()
clear()
```

---

Esses métodos permitem:

- Adicionar
- Consultar
- Alterar
- Remover
- Verificar
- Organizar informações

dentro das coleções.

---

# Revisão Rápida

## Qual método adiciona elementos?

```java
add()
```

---

## Qual método retorna um elemento?

```java
get()
```

---

## Qual método altera um elemento?

```java
set()
```

---

## Qual método remove um elemento?

```java
remove()
```

---

## Qual método retorna a quantidade de elementos?

```java
size()
```

---

## Qual método verifica se a coleção está vazia?

```java
isEmpty()
```

---

## Qual método remove todos os elementos?

```java
clear()
```
