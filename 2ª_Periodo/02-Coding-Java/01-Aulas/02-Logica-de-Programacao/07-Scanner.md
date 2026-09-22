# Scanner

## Introdução

Até agora todos os valores utilizados nos exemplos foram definidos diretamente no código.

Exemplo:

```java
int idade = 20;
```

Mas em programas reais o usuário precisa informar dados.

Para ler informações digitadas pelo usuário utilizamos a classe:

```java
Scanner
```

---

# O que é Scanner?

Scanner é uma classe da biblioteca Java utilizada para ler dados de entrada.

Esses dados podem vir de:

- Teclado
- Arquivos
- Strings
- Fluxos de entrada

Nesta disciplina utilizaremos principalmente a leitura pelo teclado.

---

# Importando Scanner

Antes de utilizar Scanner é necessário importar a classe.

```java
import java.util.Scanner;
```

---

# Criando um Objeto Scanner

```java
Scanner scanner = new Scanner(System.in);
```

Explicação:

```text
Scanner → classe

scanner → objeto criado

System.in → entrada do teclado
```

---

# Lendo uma String

## Exemplo

```java
import java.util.Scanner;

public class Principal {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite seu nome: ");

        String nome = scanner.nextLine();

        System.out.println("Olá " + nome);

    }

}
```

---

## Entrada

```text
Kauê
```

---

## Saída

```text
Olá Kauê
```

---

# Lendo Números Inteiros

Utilizamos:

```java
nextInt()
```

---

## Exemplo

```java
import java.util.Scanner;

public class Principal {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite sua idade: ");

        int idade = scanner.nextInt();

        System.out.println("Idade: " + idade);

    }

}
```

---

# Lendo Números Decimais

Utilizamos:

```java
nextDouble()
```

---

## Exemplo

```java
Scanner scanner = new Scanner(System.in);

System.out.print("Digite seu salário: ");

double salario = scanner.nextDouble();

System.out.println(salario);
```

---

# Principais Métodos

## nextLine()

Lê texto completo.

```java
String nome = scanner.nextLine();
```

---

## nextInt()

Lê números inteiros.

```java
int idade = scanner.nextInt();
```

---

## nextDouble()

Lê números decimais.

```java
double salario = scanner.nextDouble();
```

---

## next()

Lê apenas uma palavra.

```java
String nome = scanner.next();
```

Entrada:

```text
João Silva
```

Resultado:

```text
João
```

---

# Exemplo Completo

```java
import java.util.Scanner;

public class Principal {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("Nome: ");
        String nome = scanner.nextLine();

        System.out.print("Idade: ");
        int idade = scanner.nextInt();

        System.out.print("Salário: ");
        double salario = scanner.nextDouble();

        System.out.println(nome);
        System.out.println(idade);
        System.out.println(salario);

    }

}
```

---

# Utilizando Scanner com Condições

```java
Scanner scanner = new Scanner(System.in);

System.out.print("Digite sua idade: ");

int idade = scanner.nextInt();

if (idade >= 18) {

    System.out.println("Maior de idade");

} else {

    System.out.println("Menor de idade");

}
```

---

# Utilizando Scanner com Switch

```java
Scanner scanner = new Scanner(System.in);

System.out.println("1 - Cadastrar");
System.out.println("2 - Atualizar");

int opcao = scanner.nextInt();

switch (opcao) {

    case 1:
        System.out.println("Cadastro");
        break;

    case 2:
        System.out.println("Atualização");
        break;

    default:
        System.out.println("Opção inválida");
}
```

---

# Fechando o Scanner

Após utilizar o Scanner, podemos fechar o objeto.

```java
scanner.close();
```

---

## Exemplo

```java
Scanner scanner = new Scanner(System.in);

/* código */

scanner.close();
```

---

# Exemplo da Aula

Lendo informações de uma pessoa.

```java
import java.util.Scanner;

public class ExemploScanner {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite seu nome: ");
        String nome = scanner.nextLine();

        System.out.print("Digite sua idade: ");
        int idade = scanner.nextInt();

        System.out.println(nome + " tem " + idade + " anos.");

        scanner.close();

    }

}
```

---

# Cuidados Importantes

## Misturando nextInt() e nextLine()

Esse é um erro muito comum.

Exemplo:

```java
int idade = scanner.nextInt();
String nome = scanner.nextLine();
```

Pode gerar comportamento inesperado.

---

## Solução

Consumir a quebra de linha.

```java
int idade = scanner.nextInt();
scanner.nextLine();

String nome = scanner.nextLine();
```

---

# Erros Comuns

## Erro 1

Esquecer o import.

Errado:

```java
Scanner scanner = new Scanner(System.in);
```

Sem:

```java
import java.util.Scanner;
```

---

## Erro 2

Utilizar nextLine() logo após nextInt() sem tratar a quebra de linha.

---

## Erro 3

Esquecer de fechar o Scanner.

---

## Erro 4

Ler texto com next() quando deveria usar nextLine().

---

# Resumo

Scanner é utilizado para ler dados digitados pelo usuário.

Principais métodos:

```java
nextLine()
nextInt()
nextDouble()
next()
```

---

# Revisão Rápida

## Qual classe permite ler dados do teclado?

```java
Scanner
```

---

## Qual import deve ser utilizado?

```java
import java.util.Scanner;
```

---

## Qual método lê texto completo?

```java
nextLine()
```

---

## Qual método lê inteiros?

```java
nextInt()
```

---

## Qual método lê números decimais?

```java
nextDouble()
```

---

## Qual método fecha o Scanner?

```java
close()
```
