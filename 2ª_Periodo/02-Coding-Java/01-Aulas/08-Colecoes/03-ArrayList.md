# ArrayList

## Introdução

O ArrayList é a implementação mais utilizada da interface List.

Ele permite armazenar uma quantidade variável de elementos, sem a necessidade de definir o tamanho antecipadamente.

Na prática, quando começamos a trabalhar com coleções em Java, normalmente utilizamos ArrayList.

---

# O que é um ArrayList?

ArrayList é uma classe da biblioteca Java utilizada para armazenar coleções de objetos.

Ela implementa a interface:

```java
List
```

---

# Importando as Classes

```java
import java.util.ArrayList;
import java.util.List;
```

---

# Criando um ArrayList

## Exemplo

```java
List<String> nomes = new ArrayList<>();
```

---

## Explicação

```java
List<String>
```

Define que a lista armazenará Strings.

---

```java
new ArrayList<>()
```

Cria a lista.

---

# Adicionando Elementos

Utilizamos:

```java
add()
```

---

## Exemplo

```java
List<String> nomes = new ArrayList<>();

nomes.add("João");
nomes.add("Maria");
nomes.add("Carlos");
```

---

# Resultado

```text
[João, Maria, Carlos]
```

---

# Exibindo a Lista

```java
System.out.println(nomes);
```

---

Saída:

```text
[João, Maria, Carlos]
```

---

# Obtendo um Elemento

Utilizamos:

```java
get()
```

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

Assim como arrays, o ArrayList começa na posição:

```text
0
```

---

Exemplo:

```text
0 → João
1 → Maria
2 → Carlos
```

---

# Alterando Elementos

Utilizamos:

```java
set()
```

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

# Removendo Elementos

Utilizamos:

```java
remove()
```

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

# Quantidade de Elementos

Utilizamos:

```java
size()
```

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

# Verificando se Existe

Utilizamos:

```java
contains()
```

---

## Exemplo

```java
System.out.println(
    nomes.contains("Ana")
);
```

---

Resultado:

```text
true
```

---

# Percorrendo a Lista

## Com FOR

```java
for (int i = 0; i < nomes.size(); i++) {

    System.out.println(
        nomes.get(i)
    );

}
```

---

# Percorrendo com FOR EACH

Forma mais comum.

```java
for (String nome : nomes) {

    System.out.println(nome);

}
```

---

Resultado:

```text
Ana
Carlos
Pedro
```

---

# ArrayList com Objetos

Podemos armazenar objetos criados por nós.

---

## Classe

```java
public class Aluno {

    String nome;

}
```

---

## Lista

```java
List<Aluno> alunos =
    new ArrayList<>();
```

---

# Adicionando Objetos

```java
Aluno aluno1 = new Aluno();

aluno1.nome = "João";

alunos.add(aluno1);
```

---

# Lendo Objetos

```java
System.out.println(
    alunos.get(0).nome
);
```

---

Resultado:

```text
João
```

---

# Exemplo Completo

```java
List<String> filmes =
    new ArrayList<>();

filmes.add("Matrix");
filmes.add("Interestelar");
filmes.add("O Poderoso Chefão");

for (String filme : filmes) {

    System.out.println(filme);

}
```

---

Resultado:

```text
Matrix
Interestelar
O Poderoso Chefão
```

---

# ArrayList x Array

## Array

```java
String[] nomes = new String[3];
```

---

Características:

- Tamanho fixo
- Menos flexível

---

## ArrayList

```java
List<String> nomes =
    new ArrayList<>();
```

---

Características:

- Tamanho variável
- Mais flexível
- Mais utilizado

---

# Quando Utilizar ArrayList?

Quando:

- O número de elementos pode variar
- Precisamos adicionar elementos dinamicamente
- Trabalhamos com listas de objetos

---

# Situações Reais

Lista de:

```text
Alunos
Produtos
Filmes
Clientes
Pedidos
Funcionários
```

---

# Boas Práticas

Utilizar:

```java
List<String> nomes =
    new ArrayList<>();
```

em vez de:

```java
ArrayList<String> nomes =
    new ArrayList<>();
```

---

Trabalhar pela interface aumenta a flexibilidade.

---

# Erros Comuns

## Erro 1

Acessar posição inexistente.

---

Exemplo:

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

Esquecer de adicionar elementos antes de acessar.

---

## Erro 3

Confundir:

```java
size()
```

com

```java
length
```

---

Em ArrayList utilizamos:

```java
size()
```

---

# Resumo

ArrayList é a implementação mais utilizada da interface List.

---

Principais métodos:

```java
add()
get()
set()
remove()
size()
contains()
```

---

Pode armazenar:

- Strings
- Números
- Objetos

---

Possui tamanho variável.

---

# Revisão Rápida

## Qual classe implementa List?

```java
ArrayList
```

---

## Qual método adiciona elementos?

```java
add()
```

---

## Qual método acessa elementos?

```java
get()
```

---

## Qual método remove elementos?

```java
remove()
```

---

## Qual método retorna a quantidade de elementos?

```java
size()
```

---

## Podemos armazenar objetos em um ArrayList?

Sim.
