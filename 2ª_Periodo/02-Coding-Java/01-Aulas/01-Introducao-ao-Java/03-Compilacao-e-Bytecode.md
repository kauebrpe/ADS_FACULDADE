# Compilação e Bytecode

## Introdução

Uma das características mais importantes do Java é sua capacidade de executar o mesmo programa em diferentes sistemas operacionais.

Isso só é possível graças ao processo de compilação e ao conceito de bytecode.

---

## Arquivos Java

Quando escrevemos um programa Java, utilizamos arquivos com a extensão:

```text
.java
```

Exemplo:

```text
HelloWorld.java
```

Esse arquivo contém o código-fonte criado pelo programador.

---

## Exemplo de Código-Fonte

```java
public class HelloWorld {

    public static void main(String[] args) {

        System.out.println("Olá Mundo!");

    }

}
```

---

## O Que é Compilação?

Compilação é o processo de transformar o código-fonte em um formato que possa ser executado pela JVM.

No Java, o compilador é chamado:

```text
javac
```

---

## Processo de Compilação

Fluxo básico:

```text
HelloWorld.java
        ↓
Compilação (javac)
        ↓
HelloWorld.class
```

---

## Comando de Compilação

```bash
javac HelloWorld.java
```

Após executar esse comando será criado:

```text
HelloWorld.class
```

---

## O Que é o Arquivo .class?

O arquivo:

```text
.class
```

não contém código Java.

Ele contém:

```text
Bytecode
```

---

## O Que é Bytecode?

Bytecode é uma linguagem intermediária gerada pelo compilador Java.

Ele fica entre:

```text
Código Java
```

e

```text
Código de Máquina
```

---

## Por Que o Java Usa Bytecode?

Porque permite que o mesmo programa funcione em vários sistemas operacionais.

Exemplo:

```text
Windows
Linux
MacOS
```

Todos conseguem executar o mesmo bytecode através da JVM.

---

## Fluxo Completo

```text
Código Fonte (.java)
        ↓
Compilador (javac)
        ↓
Bytecode (.class)
        ↓
JVM
        ↓
Execução
```

---

## Executando o Programa

Depois da compilação:

```bash
java HelloWorld
```

Saída:

```text
Olá Mundo!
```

---

## Diferença Entre javac e java

### javac

Compila.

Exemplo:

```bash
javac HelloWorld.java
```

Resultado:

```text
HelloWorld.class
```

---

### java

Executa.

Exemplo:

```bash
java HelloWorld
```

Resultado:

```text
Programa rodando.
```

---

## Exemplo Visual

Passo 1

Arquivo criado:

```text
Calculadora.java
```

---

Passo 2

Compilação:

```bash
javac Calculadora.java
```

---

Passo 3

Arquivo gerado:

```text
Calculadora.class
```

---

Passo 4

Execução:

```bash
java Calculadora
```

---

## Vantagem do Bytecode

Sem Bytecode:

```text
Um programa para Windows.
Outro para Linux.
Outro para Mac.
```

---

Com Bytecode:

```text
Um único programa.
```

A JVM faz o trabalho de adaptação.

---

## Independência de Plataforma

Esse é um dos motivos do slogan:

```text
Write Once, Run Anywhere
```

Tradução:

```text
Escreva uma vez, execute em qualquer lugar.
```

---

## O Papel da JVM

A JVM interpreta o bytecode e executa o programa.

Podemos imaginar:

```text
.class
↓
JVM
↓
Sistema Operacional
```

---

## Erros Comuns

### Erro 1

Achar que arquivos .java são executados diretamente.

Eles precisam ser compilados primeiro.

---

### Erro 2

Confundir javac com java.

```text
javac = compila

java = executa
```

---

### Erro 3

Pensar que o arquivo .class contém código Java.

Ele contém bytecode.

---

### Erro 4

Achar que a JVM faz a compilação.

Quem compila é:

```text
javac
```

---

## Resumo

Arquivo criado:

```text
.java
```

---

Arquivo gerado:

```text
.class
```

---

Compilador:

```text
javac
```

---

Executor:

```text
java
```

---

Formato intermediário:

```text
Bytecode
```

---

## Revisão Rápida

### Qual extensão possui o código-fonte Java?

```text
.java
```

---

### Qual extensão possui o bytecode?

```text
.class
```

---

### Qual comando compila um programa?

```bash
javac
```

---

### Qual comando executa um programa?

```bash
java
```

---

### O que é bytecode?

Código intermediário gerado pelo compilador Java.

---

### Quem executa o bytecode?

A JVM.

---

### Qual é a principal vantagem do bytecode?

Permitir que o mesmo programa funcione em diferentes sistemas operacionais.
