# Estruturas Condicionais: if e else

## Introdução

Durante a execução de um programa precisamos tomar decisões.

Exemplos:

- Verificar se o usuário é maior de idade
- Verificar se uma senha está correta
- Verificar se um número é positivo
- Verificar se um aluno foi aprovado

Para isso utilizamos estruturas condicionais.

---

# O que é uma Condição?

Uma condição é uma expressão que retorna:

```java
true
```

ou

```java
false
```

Exemplo:

```java
idade >= 18
```

---

Se a idade for:

```java
20
```

Resultado:

```java
true
```

---

Se a idade for:

```java
15
```

Resultado:

```java
false
```

---

# Estrutura if

O comando if executa um bloco de código somente quando uma condição é verdadeira.

---

## Sintaxe

```java
if (condicao) {

    // código

}
```

---

## Exemplo

```java
int idade = 20;

if (idade >= 18) {

    System.out.println("Maior de idade");

}
```

---

## Resultado

```text
Maior de idade
```

---

# Estrutura if + else

O else é executado quando a condição é falsa.

---

## Sintaxe

```java
if (condicao) {

    // verdadeiro

} else {

    // falso

}
```

---

## Exemplo

```java
int idade = 16;

if (idade >= 18) {

    System.out.println("Maior de idade");

} else {

    System.out.println("Menor de idade");

}
```

---

## Resultado

```text
Menor de idade
```

---

# Comparando Números

## Exemplo

```java
int numero = 10;

if (numero > 0) {

    System.out.println("Número positivo");

} else {

    System.out.println("Número negativo");

}
```

---

# Exemplo da Atividade

Verificar se um número é positivo ou negativo.

```java
int numero = -5;

if (numero > 0) {

    System.out.println("Número positivo");

} else {

    System.out.println("Número negativo");

}
```

---

## Resultado

```text
Número negativo
```

---

# if / else if / else

Utilizado quando existem várias opções.

---

## Sintaxe

```java
if (condicao1) {

}
else if (condicao2) {

}
else {

}
```

---

## Exemplo

```java
int nota = 7;

if (nota >= 7) {

    System.out.println("Aprovado");

}
else if (nota >= 5) {

    System.out.println("Recuperação");

}
else {

    System.out.println("Reprovado");

}
```

---

## Resultado

```text
Aprovado
```

---

# Utilizando Operadores Relacionais

## Igual

```java
==
```

---

## Diferente

```java
!=
```

---

## Maior

```java
>
```

---

## Menor

```java
<
```

---

## Maior ou Igual

```java
>=
```

---

## Menor ou Igual

```java
<=
```

---

# Utilizando Operadores Lógicos

## AND

```java
&&
```

Significa:

```text
E
```

---

### Exemplo

```java
int idade = 20;
boolean estudante = true;

if (idade >= 18 && estudante) {

    System.out.println("Benefício liberado");

}
```

---

# OR

```java
||
```

Significa:

```text
OU
```

---

### Exemplo

```java
boolean possuiCartao = false;
boolean possuiDinheiro = true;

if (possuiCartao || possuiDinheiro) {

    System.out.println("Compra aprovada");

}
```

---

# NOT

```java
!
```

Significa:

```text
NÃO
```

---

### Exemplo

```java
boolean ativo = false;

if (!ativo) {

    System.out.println("Usuário inativo");

}
```

---

# Exemplo Completo

```java
public class Principal {

    public static void main(String[] args) {

        int idade = 19;

        if (idade >= 18) {

            System.out.println("Maior de idade");

        } else {

            System.out.println("Menor de idade");

        }

    }

}
```

---

# Exemplo de Comparação

```java
int a = 10;
int b = 20;

if (a > b) {

    System.out.println("A é maior");

} else {

    System.out.println("B é maior");

}
```

---

## Resultado

```text
B é maior
```

---

# Situações Práticas

## Login

```java
if (senha.equals("123")) {

    System.out.println("Acesso permitido");

}
```

---

## Número Par

```java
if (numero % 2 == 0) {

    System.out.println("Par");

}
```

---

## Aprovação

```java
if (nota >= 7) {

    System.out.println("Aprovado");

}
```

---

# Erros Comuns

## Erro 1

Usar:

```java
=
```

em vez de:

```java
==
```

---

Errado:

```java
if (idade = 18)
```

---

Correto:

```java
if (idade == 18)
```

---

## Erro 2

Esquecer os parênteses.

---

Errado:

```java
if idade >= 18
```

---

Correto:

```java
if (idade >= 18)
```

---

## Erro 3

Comparar Strings com:

```java
==
```

---

Errado:

```java
if (senha == "123")
```

---

Correto:

```java
if (senha.equals("123"))
```

---

# Resumo

## if

Executa quando a condição é verdadeira.

---

## else

Executa quando a condição é falsa.

---

## else if

Permite criar várias verificações.

---

## Operadores Relacionais

```java
==
!=
>
<
>=
<=
```

---

## Operadores Lógicos

```java
&&
||
!
```

---

# Revisão Rápida

## O que é uma condição?

Uma expressão que retorna:

```java
true
```

ou

```java
false
```

---

## Qual estrutura executa código somente quando a condição é verdadeira?

```java
if
```

---

## Qual estrutura é executada quando a condição é falsa?

```java
else
```

---

## Qual operador significa "E"?

```java
&&
```

---

## Qual operador significa "OU"?

```java
||
```

---

## Qual operador significa "NÃO"?

```java
!
```
