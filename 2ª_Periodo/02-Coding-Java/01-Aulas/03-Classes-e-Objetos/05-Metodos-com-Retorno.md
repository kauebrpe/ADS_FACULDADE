# Métodos com Retorno

## Introdução

Nos tópicos anteriores estudamos métodos que apenas executavam ações.

Exemplo:

```java
void exibeFichaTecnica() {

    System.out.println(nome);

}
```

Esses métodos utilizam:

```java
void
```

pois não retornam nenhum valor.

Agora veremos métodos capazes de devolver informações para quem os chamou.

---

# O que é um Método com Retorno?

É um método que devolve um valor após executar alguma operação.

Exemplo:

```java
double calculaMedia() {

    return 8.5;

}
```

Nesse caso o método retorna:

```text
8.5
```

---

# O Comando return

O comando:

```java
return
```

é utilizado para devolver um valor.

---

## Exemplo

```java
int dobro() {

    return 10;

}
```

Resultado:

```text
10
```

---

# Estrutura Básica

```java
tipo nomeMetodo() {

    return valor;

}
```

---

## Exemplo

```java
int retornaNumero() {

    return 100;

}
```

---

# Diferença Entre void e Retorno

## Método Sem Retorno

```java
void falar() {

    System.out.println("Olá");

}
```

Executa uma ação.

---

## Método Com Retorno

```java
String retornaNome() {

    return "João";

}
```

Devolve uma informação.

---

# Exemplo Simples

```java
public class Calculadora {

    int dobrarNumero() {

        return 10 * 2;

    }

}
```

---

## Utilização

```java
Calculadora calc = new Calculadora();

int resultado = calc.dobrarNumero();

System.out.println(resultado);
```

---

## Saída

```text
20
```

---

# Método com Parâmetro e Retorno

Esse é um dos modelos mais utilizados.

---

## Classe

```java
public class Calculadora {

    int dobro(int numero) {

        return numero * 2;

    }

}
```

---

## Utilização

```java
Calculadora calc = new Calculadora();

int resultado = calc.dobro(5);

System.out.println(resultado);
```

---

## Resultado

```text
10
```

---

# Exemplo da Disciplina

O professor utilizou um método semelhante para calcular média de avaliações. turn108search6

```java
double pegaMedia() {

    return somaDasAvaliacoes / totalDeAvaliacoes;

}
``

---

## Como Funciona?

Supondo:

```java
somaDasAvaliacoes = 23
```

e

```java
totalDeAvaliacoes = 3
```

Resultado:

```java
23 / 3
```

---

## Retorno

```text
7.66
```

---

# Armazenando o Resultado

O retorno pode ser guardado em uma variável.

---

## Exemplo

```java
double media = filme.pegaMedia();
```

---

Depois:

```java
System.out.println(media);
```

---

# Retorno de String

Métodos podem retornar textos.

---

## Exemplo

```java
String obterNome() {

    return "Kauê";

}
```

---

## Utilização

```java
String nome = obterNome();
```

---

# Retorno de boolean

Também pode retornar verdadeiro ou falso.

---

## Exemplo

```java
boolean maiorDeIdade() {

    return true;

}
```

---

# Exemplo Prático

```java
public class Aluno {

    double nota1;
    double nota2;

    double calcularMedia() {

        return (nota1 + nota2) / 2;

    }

}
```

---

## Utilização

```java
Aluno aluno = new Aluno();

aluno.nota1 = 8;
aluno.nota2 = 10;

System.out.println(
    aluno.calcularMedia()
);
```

---

## Resultado

```text
9.0
```

---

# Um Método Pode Ter Apenas Um Return?

Pode possuir vários returns.

---

## Exemplo

```java
boolean verificarMaiorIdade(int idade) {

    if (idade >= 18) {

        return true;

    }

    return false;

}
```

---

# Boas Práticas

## Nome Claro

Bom:

```java
calcularMedia()
```

```java
obterNome()
```

```java
pegarSaldo()
```

---

Evite:

```java
abc()
```

```java
teste()
```

---

## Retorno Compatível

O tipo do método deve combinar com o valor retornado.

---

Correto:

```java
int retornarNumero() {

    return 10;

}
```

---

Incorreto:

```java
int retornarNumero() {

    return "João";

}
```

---

# Erros Comuns

## Erro 1

Esquecer o return.

---

Errado:

```java
int calcular() {

}
```

---

## Erro 2

Retornar um tipo incompatível.

---

## Erro 3

Confundir método com retorno e método void.

---

## Erro 4

Não utilizar o valor retornado.

---

# Resumo

Métodos com retorno devolvem informações.

---

O comando utilizado é:

```java
return
```

---

O tipo do método precisa ser compatível com o retorno.

---

Exemplos:

```java
int
double
String
boolean
```

---

# Comparação

## Sem Retorno

```java
void exibir()
```

Executa ações.

---

## Com Retorno

```java
double calcularMedia()
```

Devolve valores.

---

# Revisão Rápida

## Qual comando devolve um valor?

```java
return
```

---

## Qual palavra indica que o método não retorna valor?

```java
void
```

---

## Um método pode retornar números?

Sim.

---

## Um método pode retornar textos?

Sim.

---

## Um método pode retornar valores booleanos?

Sim.

---

## O tipo do método precisa combinar com o retorno?

Sim.
