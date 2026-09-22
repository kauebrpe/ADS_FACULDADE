# JVM, JRE e JDK

## Introdução

Um dos assuntos mais importantes para quem está começando em Java é entender a diferença entre:

- JVM
- JRE
- JDK

Esses três componentes fazem parte da plataforma Java e trabalham juntos para permitir o desenvolvimento e a execução de aplicações.

---

# Visão Geral

Podemos pensar assim:

```text
JDK
│
├── JRE
│   │
│   └── JVM
```

Cada componente possui uma responsabilidade diferente.

---

# O que é JVM?

JVM significa:

```text
Java Virtual Machine
```

ou

```text
Máquina Virtual Java
```

A JVM é responsável por executar programas Java.

---

## Função da JVM

Quando um programa Java é compilado, ele gera um arquivo:

```text
.class
```

A JVM interpreta esse arquivo e executa o programa.

---

## Por que a JVM é importante?

Ela permite que o mesmo programa funcione em diferentes sistemas operacionais.

Exemplo:

```text
Windows
Linux
MacOS
```

O código é o mesmo.

O que muda é apenas a JVM.

---

## Resumo da JVM

```text
Responsável pela execução do programa Java.
```

---

# O que é JRE?

JRE significa:

```text
Java Runtime Environment
```

ou

```text
Ambiente de Execução Java
```

---

## Função da JRE

A JRE fornece tudo que é necessário para executar aplicações Java.

Ela inclui:

- JVM
- Bibliotecas do Java
- Recursos necessários para execução

---

## Quem utiliza a JRE?

Usuários que apenas executam programas Java.

Exemplo:

```text
Jogos
Aplicativos
Sistemas
```

---

## Resumo da JRE

```text
Permite executar aplicações Java.
```

---

# O que é JDK?

JDK significa:

```text
Java Development Kit
```

ou

```text
Kit de Desenvolvimento Java
```

---

## Função do JDK

O JDK é utilizado para desenvolver aplicações Java.

Ele contém:

- JRE
- JVM
- Compilador Java
- Ferramentas de desenvolvimento

---

## Quem utiliza o JDK?

Programadores.

Sem o JDK não é possível compilar programas Java.

---

## Resumo do JDK

```text
Permite criar aplicações Java.
```

---

# Diferença Entre JVM, JRE e JDK

## JVM

Executa programas.

---

## JRE

Fornece ambiente de execução.

---

## JDK

Fornece ferramentas para desenvolvimento.

---

# Comparação

| Componente | Função |
|------------|---------|
| JVM | Executar programas |
| JRE | Executar aplicações |
| JDK | Desenvolver aplicações |

---

# Fluxo de Funcionamento

Quando você cria um programa Java:

```text
Código Fonte (.java)
        ↓
Compilador
        ↓
Bytecode (.class)
        ↓
JVM
        ↓
Execução
```

---

# Exemplo Prático

Arquivo:

```text
HelloWorld.java
```

Código:

```java
public class HelloWorld {

    public static void main(String[] args) {

        System.out.println("Olá Mundo!");

    }

}
```

---

Compilando:

```bash
javac HelloWorld.java
```

Resultado:

```text
HelloWorld.class
```

---

Executando:

```bash
java HelloWorld
```

Saída:

```text
Olá Mundo!
```

---

# Analogia Simples

Imagine um carro.

## JVM

Motor.

---

## JRE

Motor + peças necessárias para funcionar.

---

## JDK

Oficina completa para construir e testar o carro.

---

# Erros Comuns

## Erro 1

Confundir JRE com JDK.

---

## Erro 2

Achar que JVM e JDK são a mesma coisa.

---

## Erro 3

Tentar desenvolver aplicações sem ter o JDK instalado.

---

## Erro 4

Não entender que a JVM é responsável pela portabilidade do Java.

---

# Resumo

JVM:

```text
Executa programas Java.
```

---

JRE:

```text
Permite executar aplicações Java.
```

---

JDK:

```text
Permite desenvolver aplicações Java.
```

---

# Revisão Rápida

## O que significa JVM?

Java Virtual Machine.

---

## O que significa JRE?

Java Runtime Environment.

---

## O que significa JDK?

Java Development Kit.

---

## Qual componente executa programas Java?

JVM.

---

## Qual componente é utilizado pelos programadores?

JDK.

---

## Qual componente contém a JVM?

JRE.

---

## Qual componente contém a JRE?

JDK.
