#Métodos

## Introdução

Métodos representam os comportamentos de um objeto.

Se os atributos representam as características de um objeto, os métodos representam as ações que ele é capaz de executar.

---

# O que é um Método?

Um método é um bloco de código criado para executar uma tarefa específica.

Exemplos:

```text
fazAniversario()
depositar()
sacar()
avaliar()
exibirFichaTecnica()
```

---

# Estrutura Básica

```java
void nomeDoMetodo() {

    // código

}
```

---

## Exemplo

```java
public class Pessoa {

    void falar() {

        System.out.println("Olá!");

    }

}
```

---

# Chamando um Método

Depois de criar um objeto, podemos executar seus métodos.

---

## Classe

```java
public class Pessoa {

    void falar() {

        System.out.println("Olá!");

    }

}
```

---

## Objeto

```java
Pessoa pessoa = new Pessoa();

pessoa.falar();
```

---

## Resultado

```text
Olá!
```

---

# Métodos Podem Alterar Atributos

Um método pode modificar os dados do objeto.

---

## Exemplo

```java
public class Pessoa {

    String nome;
    int idade;

    void fazAniversario() {

        idade++;

    }

}
```

---

## Utilização

```java
Pessoa pessoa = new Pessoa();

pessoa.idade = 20;

pessoa.fazAniversario();
```

---

Resultado:

```text
21
```

---

# Métodos com Parâmetros

Métodos podem receber informações.

---

## Exemplo

```java
public class Calculadora {

    void mostrarNumero(int numero) {

        System.out.println(numero);

    }

}
```

---

## Utilização

```java
Calculadora calc = new Calculadora();

calc.mostrarNumero(10);
```

---

Resultado:

```text
10
```

---

# Mais de Um Parâmetro

```java
public class Calculadora {

    void somar(int a, int b) {

        System.out.println(a + b);

    }

}
```

---

## Utilização

```java
Calculadora calc = new Calculadora();

calc.somar(10, 5);
```

---

Resultado:

```text
15
```

---

# Exemplo da Aula

Classe Filme:

```java
void avalia(double nota) {

    somaDasAvaliacoes += nota;

}
```

Esse método recebe uma nota e adiciona ao total de avaliações. 【1-d9de78】

---

# Exemplo com Exibição

```java
void exibeFichaTecnica() {

    System.out.printn(nome);

}
```

O método exibe informações armazenadas nos atributos. 【1-d9de78】

---

# Vantagens dos Métodos

## Organização

Evita repetição de código.

---

## Reuilização

O mesmo método pode ser chamado várias vezes.

---

## Clareza

O código fica mais fácil de entender.

---

## Manutenção

Alterações ficam concentradas em um único lugar.

---

# Exemplo Completo

```java
public class Aluno {

    String nome;

    void apresentar() {

        System.out.println("Meu nome é " + nome);

    }

}
```

---

## Utilização

```java
Aluno aluno = new Aluno();

aluno.nome = "Kauê";

aluno.apresentar();
```

---

## Resultado

```text
Meu nome é Kauê
```

---

# Métodos Sem Retorno

Até agora todos os métodos apresentados apenas executam ações.

Exemplos:

```java
apresentar()
```

```java
falar()
```

```java
fazAniversario()
```

Eles não retornam valores.

Por isso utilizam:

```java
void
```

---

# Significado de void

```java
void
```

significa:

```text
não retorna valor
```

---

# Boas Práticas

## Utilizar nomes claros

Bom:

```java
calcularMedia()
```

```java
exibirFichaTecnica()
```

```java
fazAniversario()
```

---

Ruim:

```java
abc()
```

```java
teste()
```

---

## Cada método deve possuir uma responsabilidade

Evite métodos que fazem muitas coisas ao mesmo tempo.

---

# Erros Comuns

## Erro 1

Criar métodos e esquecer de chamá-los.

---

## Erro 2

Confundir atributo com método.

---

Atributo:

```java
idade
```

---

Método:

```java
fazAniversario()
```

---

## Erro 3

Esquecer os parênteses.

Errado:

```java
pessoa.falar;
```

---

Correto:

```java
pessoa.falar();
```

---

# Resumo

Métodos representam comportamentos dos objetos.

---

Podem:

- Exibir informações
- Alterar atributos
- Receber parâmetros
- Executar ações

---

Métodos sem retorno utilizam:

```java
void
```

---

# Revisão Rápida

## O que é um método?

Um comportamento de um objeto.

---

## O que significa void?

O método não retorna valor.

---

## Um método pode alterar atributos?

Sim.

---

## Um método pode receber parâmetros?

Sim.

---

## Cite exemplos de métodos.

- exibirFichaTecnica()
- fazAniversario()
- avaliar()
- depositar()
