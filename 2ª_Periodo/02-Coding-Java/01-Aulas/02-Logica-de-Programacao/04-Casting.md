# Casting

## Introdução

Casting é o processo de converter um tipo de dado em outro.

Em Java, nem sempre é possível misturar tipos diferentes diretamente.

Por isso utilizamos conversões de tipos.

---

## O Que é Casting?

Casting é uma conversão entre tipos de dados.

Exemplo:

```java
int numero = 10;

double valor = numero;
```

Nesse caso um valor inteiro foi convertido para um valor decimal.

---

## Tipos de Casting

Existem dois tipos principais:

- Casting Implícito
- Casting Explícito

---

# Casting Implícito

É realizado automaticamente pelo Java.

Ocorre quando a conversão é segura.

---

## Exemplo

```java
int idade = 20;

double idadeDouble = idade;
```

---

## Resultado

```text
20.0
```

O Java faz a conversão sozinho.

---

## Outro Exemplo

```java
byte numero = 10;

int valor = numero;
```

---

O Java entende que:

```text
int suporta valores maiores que byte
```

e realiza a conversão automaticamente.

---

# Casting Explícito

É utilizado quando existe possibilidade de perda de informação.

Nesse caso precisamos informar a conversão manualmente.

---

## Sintaxe

```java
(tipo) valor
```

---

## Exemplo

```java
double salario = 3500.75;

int salarioInteiro = (int) salario;
```

---

## Resultado

```text
3500
```

A parte decimal é descartada.

---

## Outro Exemplo

```java
double nota = 8.9;

int notaInteira = (int) nota;
```

Resultado:

```text
8
```

---

# Por Que Existe o Casting Explícito?

Porque a conversão pode gerar perda de dados.

Exemplo:

```java
double valor = 10.9;
```

Convertendo:

```java
int numero = (int) valor;
```

Resultado:

```text
10
```

O valor:

```text
0.9
```

foi perdido.

---

# Exemplo Prático

```java
public class Principal {

    public static void main(String[] args) {

        double preco = 199.99;

        int precoInteiro = (int) preco;

        System.out.println(precoInteiro);

    }

}
```

Saída:

```text
199
```

---

# Conversões Mais Comuns

## int para double

```java
int idade = 20;

double idade2 = idade;
```

Casting implícito.

---

## double para int

```java
double idade = 20.5;

int idade2 = (int) idade;
```

Casting explícito.

---

## int para long

```java
int numero = 10;

long valor = numero;
```

Casting implícito.

---

## float para int

```java
float nota = 7.8f;

int valor = (int) nota;
```

Casting explícito.

---

# Exemplo com Cálculos

```java
int a = 10;
int b = 3;

double resultado = (double) a / b;

System.out.println(resultado);
```

Resultado:

```text
3.3333...
```

---

# Sem Casting

```java
int a = 10;
int b = 3;

System.out.println(a / b);
```

Resultado:

```text
3
```

---

# Com Casting

```java
double resultado = (double) a / b;
```

Resultado:

```text
3.3333...
```

---

# Quando Utilizar Casting?

### Converter valores

```java
double → int
```

---

### Trabalhar com cálculos mais precisos

```java
int → double
```

---

### Adaptar tipos de variáveis

```java
float → double
```

---

# Cuidados

Sempre que existir casting explícito:

```java
(int)
```

verifique se haverá perda de informação.

---

# Erros Comuns

## Erro 1

Achar que casting arredonda valores.

Exemplo:

```java
(double) 10.9
```

para

```java
(int)
```

Resultado:

```text
10
```

Não arredonda.

Apenas remove a parte decimal.

---

## Erro 2

Esquecer o casting.

Errado:

```java
double numero = 10.5;

int valor = numero;
```

---

Correto:

```java
int valor = (int) numero;
```

---

## Erro 3

Utilizar casting sem necessidade.

---

# Resumo

## Casting Implícito

O Java converte automaticamente.

Exemplo:

```java
int → double
```

---

## Casting Explícito

Programador converte manualmente.

Exemplo:

```java
double → int
```

---

# Revisão Rápida

## O que é Casting?

Conversão de tipos de dados.

---

## O que é Casting Implícito?

Conversão automática realizada pelo Java.

---

## O que é Casting Explícito?

Conversão feita manualmente pelo programador.

---

## Como converter double para int?

```java
(int) valor
```

---

## O Casting arredonda valores?

Não.

A parte decimal é descartada.

---

## Quando normalmente utilizamos Casting?

Quando precisamos converter dados entre tipos diferentes.
