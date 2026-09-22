# Operadores

## Introdução

Os operadores são símbolos utilizados para realizar operações com valores e variáveis.

Em Java existem diferentes tipos de operadores.

Os principais são:

- Operadores de atribuição
- Operadores aritméticos
- Operadores relacionais
- Operadores lógicos
- Operadores de incremento

---

# Operadores de Atribuição

São utilizados para armazenar valores em variáveis.

---

## Operador =

Exemplo:

```java
int idade = 20;
```

Nesse caso:

```text
idade recebe 20
```

---

## Operadores de Atribuição Composta

Java permite simplificar algumas operações.

---

### +=

```java
int valor = 10;

valor += 5;
```

Equivalente a:

```java
valor = valor + 5;
```

Resultado:

```text
15
```

---

### -=

```java
int valor = 10;

valor -= 3;
```

Equivalente a:

```java
valor = valor - 3;
```

Resultado:

```text
7
```

---

### *=

```java
int valor = 10;

valor *= 2;
```

Resultado:

```text
20
```

---

### /=

```java
int valor = 10;

valor /= 2;
```

Resultado:

```text
5
```

---

# Operadores Aritméticos

São utilizados para cálculos matemáticos.

---

## Soma

```java
int resultado = 10 + 5;
```

Resultado:

```text
15
```

---

## Subtração

```java
int resultado = 10 - 5;
```

Resultado:

```text
5
```

---

## Multiplicação

```java
int resultado = 10 * 5;
```

Resultado:

```text
50
```

---

## Divisão

```java
int resultado = 10 / 5;
```

Resultado:

```text
2
```

---

## Resto da Divisão

```java
int resultado = 10 % 3;
```

Resultado:

```text
1
```

Muito utilizado para verificar números pares e ímpares.

---

# Operadores Relacionais

São utilizados para comparar valores.

O resultado sempre será:

```java
true
```

ou

```java
false
```

---

## Igual

```java
10 == 10
```

Resultado:

```java
true
```

---

## Diferente

```java
10 != 5
```

Resultado:

```java
true
```

---

## Maior

```java
10 > 5
```

Resultado:

```java
true
```

---

## Menor

```java
5 < 10
```

Resultado:

```java
true
```

---

## Maior ou Igual

```java
10 >= 10
```

Resultado:

```java
true
```

---

## Menor ou Igual

```java
5 <= 10
```

Resultado:

```java
true
```

---

# Operadores Lógicos

São utilizados para combinar condições.

---

## AND (&&)

Significa:

```text
E
```

Ambas as condições devem ser verdadeiras.

---

### Exemplo

```java
int idade = 20;
boolean estudante = true;

if (idade >= 18 && estudante) {

    System.out.println("Aprovado");

}
```

---

## OR (||)

Significa:

```text
OU
```

Pelo menos uma condição deve ser verdadeira.

---

### Exemplo

```java
boolean possuiCartao = false;
boolean possuiDinheiro = true;

if (possuiCartao || possuiDinheiro) {

    System.out.println("Pagamento permitido");

}
```

---

## NOT (!)

Significa:

```text
NÃO
```

Inverte o valor lógico.

---

### Exemplo

```java
boolean ativo = true;

System.out.println(!ativo);
```

Resultado:

```java
false
```

---

# Operadores de Incremento

Utilizados para aumentar ou diminuir valores.

---

## Pós-Incremento

```java
int numero = 5;

numero++;
```

Resultado:

```text
6
```

---

## Pré-Incremento

```java
int numero = 5;

++numero;
```

Resultado:

```text
6
```

---

# Diferença Entre Pré e Pós Incremento

### Pós-Incremento

Primeiro usa o valor.

Depois incrementa.

```java
int numero = 5;

int resultado = numero++;
```

Resultado:

```text
numero = 6
resultado = 5
```

---

### Pré-Incremento

Primeiro incrementa.

Depois usa o valor.

```java
int numero = 5;

int resultado = ++numero;
```

Resultado:

```text
numero = 6
resultado = 6
```

---

# Exemplo Completo

```java
public class Principal {

    public static void main(String[] args) {

        int a = 10;
        int b = 5;

        System.out.println(a + b);
        System.out.println(a - b);
        System.out.println(a * b);
        System.out.println(a / b);

        System.out.println(a > b);

    }

}
```

---

# Situações Práticas

Verificar idade:

```java
if (idade >= 18)
```

---

Verificar login:

```java
if (usuario.equals("admin") &&
    senha.equals("123"))
```

---

Verificar número par:

```java
if (numero % 2 == 0)
```

---

# Erros Comuns

## Erro 1

Confundir:

```java
=
```

com

```java
==
```

---

### Atribuição

```java
idade = 20;
```

---

### Comparação

```java
idade == 20
```

---

## Erro 2

Utilizar AND quando deveria usar OR.

---

## Erro 3

Não utilizar parênteses em expressões complexas.

---

# Resumo

## Atribuição

```java
=
+=
-=
*=
/=
```

---

## Aritméticos

```java
+
-
*
/
%
```

---

## Relacionais

```java
==
!=
>
<
>=
<=
```

---

## Lógicos

```java
&&
||
!
```

---

## Incremento

```java
++
--
```

---

# Revisão Rápida

## Qual operador realiza soma?

```java
+
```

---

## Qual operador verifica igualdade?

```java
==
```

---

## Qual operador significa E?

```java
&&
```

---

## Qual operador significa OU?

```java
||
```

---

## Qual operador verifica resto da divisão?

```java
%
```

---

## Qual operador é utilizado para incrementar?

```java
++
```
