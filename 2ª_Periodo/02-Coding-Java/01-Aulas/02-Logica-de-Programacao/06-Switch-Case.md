# Switch Case

## Introdução

O switch case é uma estrutura de decisão utilizada quando precisamos trabalhar com várias opções.

Ele funciona como uma alternativa ao uso de vários if e else if.

Em muitos casos o código fica mais organizado e mais fácil de entender.

---

# Quando Utilizar?

Sempre que tivermos várias opções possíveis para uma mesma variável.

Exemplos:

- Menu de sistema
- Dias da semana
- Opções de cadastro
- Calculadoras
- Jogos

---

# Estrutura Básica

```java
switch (expressao) {

    case valor1:
        // código
        break;

    case valor2:
        // código
        break;

    default:
        // código padrão
        break;
}
```

---

# Como Funciona?

O Java avalia o valor da variável informada.

Depois procura um case correspondente.

Quando encontra, executa o bloco de código.

---

# Exemplo Simples

```java
int opcao = 1;

switch (opcao) {

    case 1:
        System.out.println("Opção 1");
        break;

    case 2:
        System.out.println("Opção 2");
        break;

    default:
        System.out.println("Opção inválida");
        break;
}
```

---

## Resultado

```text
Opção 1
```

---

# Exemplo com Dias da Semana

```java
int dia = 3;

switch (dia) {

    case 1:
        System.out.println("Domingo");
        break;

    case 2:
        System.out.println("Segunda-feira");
        break;

    case 3:
        System.out.println("Terça-feira");
        break;

    default:
        System.out.println("Dia inválido");
        break;
}
```

---

## Resultado

```text
Terça-feira
```

---

# O Comando break

O break encerra a execução do switch.

É um dos elementos mais importantes da estrutura.

---

# Exemplo

```java
int numero = 1;

switch (numero) {

    case 1:
        System.out.println("Primeiro");
        break;

    case 2:
        System.out.println("Segundo");
        break;
}
```

---

# O Que Acontece Sem break?

```java
int numero = 1;

switch (numero) {

    case 1:
        System.out.println("Primeiro");

    case 2:
        System.out.println("Segundo");
}
```

---

## Resultado

```text
Primeiro
Segundo
```

O programa continua executando os próximos casos.

Esse comportamento é chamado de:

```text
Fall Through
```

---

# default

O default funciona como o else do switch.

Ele é executado quando nenhum case é encontrado.

---

## Exemplo

```java
int opcao = 10;

switch (opcao) {

    case 1:
        System.out.println("Cadastrar");
        break;

    case 2:
        System.out.println("Excluir");
        break;

    default:
        System.out.println("Opção inválida");
        break;
}
```

---

## Resultado

```text
Opção inválida
```

---

# Exemplo da Atividade

Calcular área do quadrado ou do círculo.

```java
int opcao = 1;

switch (opcao) {

    case 1:

        double lado = 5;
        double areaQuadrado = lado * lado;

        System.out.println(areaQuadrado);

        break;

    case 2:

        double raio = 3;
        double areaCirculo = 3.14 * raio * raio;

        System.out.println(areaCirculo);

        break;

    default:

        System.out.println("Opção inválida");

}
```

---

# Menu Simples

```java
System.out.println("1 - Cadastrar");
System.out.println("2 - Atualizar");
System.out.println("3 - Excluir");

int opcao = 2;

switch (opcao) {

    case 1:
        System.out.println("Cadastro");
        break;

    case 2:
        System.out.println("Atualização");
        break;

    case 3:
        System.out.println("Exclusão");
        break;

    default:
        System.out.println("Opção inválida");
}
```

---

# Switch ou If?

## if

Melhor para:

```text
Comparações
Faixas de valores
Condições complexas
```

Exemplo:

```java
if (nota >= 7)
```

---

## switch

Melhor para:

```text
Menus
Opções fixas
Escolhas específicas
```

Exemplo:

```java
switch (opcao)
```

---

# Exemplo com String

Também é possível.

```java
String perfil = "ADMIN";

switch (perfil) {

    case "ADMIN":
        System.out.println("Administrador");
        break;

    case "CLIENTE":
        System.out.println("Cliente");
        break;

    default:
        System.out.println("Perfil desconhecido");
}
```

---

# Erros Comuns

## Erro 1

Esquecer o break.

---

## Erro 2

Esquecer o default.

---

## Erro 3

Utilizar switch para situações que seriam mais simples com if.

---

## Erro 4

Criar menus sem tratar opções inválidas.

---

# Resumo

Switch é utilizado quando existem várias opções possíveis.

---

## Estrutura

```java
switch
case
break
default
```

---

## break

Interrompe a execução.

---

## default

Executa quando nenhum case é encontrado.

---

# Comparação Rápida

| Estrutura | Melhor Uso |
|-----------|------------|
| if | Comparações e condições |
| switch | Menus e opções fixas |

---

# Revisão Rápida

## O que é switch?

Estrutura de decisão com várias opções.

---

## Para que serve o case?

Representar uma opção possível.

---

## Para que serve o break?

Encerrar a execução do switch.

---

## Para que serve o default?

Executar quando nenhuma opção é encontrada.

---

## Quando usar switch?

Menus e escolhas fixas.

---

## Quando usar if?

Comparações e condições mais complexas.
