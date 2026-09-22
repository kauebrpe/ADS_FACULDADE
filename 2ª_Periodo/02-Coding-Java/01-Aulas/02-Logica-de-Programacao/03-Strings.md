# Strings

## Introdução

Em Java, Strings são utilizadas para armazenar textos.

Praticamente toda aplicação trabalha com Strings:

- Nome de usuários
- Endereços
- E-mails
- Senhas
- Mensagens
- Descrições

Por isso, a classe String é uma das classes mais utilizadas da linguagem.

---

# O Que é uma String?

Uma String representa uma sequência de caracteres.

Exemplo:

```java
String nome = "Kauê";
```

Nesse exemplo:

```text
"Kauê"
```

é uma String.

---

# Criando Strings

## Exemplo

```java
String nome = "Maria";
```

---

## Outro Exemplo

```java
String cidade = "Recife";
```

---

## Exibindo uma String

```java
String nome = "João";

System.out.println(nome);
```

Saída:

```text
João
```

---

# Concatenação

Concatenar significa juntar textos.

Em Java utilizamos o operador:

```java
+
```

---

## Exemplo

```java
String nome = "João";

System.out.println("Olá " + nome);
```

Saída:

```text
Olá João
```

---

## Exemplo com Duas Variáveis

```java
String nome = "João";
String sobrenome = "Silva";

String nomeCompleto = nome + " " + sobrenome;

System.out.println(nomeCompleto);
```

Saída:

```text
João Silva
```

---

# Comparando Strings

Esse é um dos assuntos que mais gera dúvidas.

---

## Comparação Incorreta

Muitos iniciantes tentam fazer:

```java
if (senha == "123")
```

Isso não é recomendado.

---

# Método equals()

Para comparar o conteúdo de Strings utilizamos:

```java
equals()
```

---

## Exemplo

```java
String senha = "12345";

if (senha.equals("12345")) {

    System.out.println("Acesso autorizado");

}
```

Saída:

```text
Acesso autorizado
```

---

# Por Que equals()?

Porque:

```java
==
```

verifica referência de memória.

Já:

```java
equals()
```

verifica o conteúdo da String.

---

# equalsIgnoreCase()

Compara Strings ignorando letras maiúsculas e minúsculas.

---

## Exemplo

```java
String nome = "java";

if (nome.equalsIgnoreCase("JAVA")) {

    System.out.println("São iguais");

}
```

Saída:

```text
São iguais
```

---

# Text Block

O Text Block foi criado para facilitar textos com várias linhas.

---

## Sintaxe

```java
String mensagem = """
Olá!

Bem-vindo ao Java.

Esse texto ocupa
várias linhas.
""";
```

---

## Vantagens

Evita:

```java
"\n"
```

e grandes concatenações.

---

# Exemplo

```java
String texto = """
Curso de Java

Módulo:
- Variáveis
- Strings
- Operadores
""";

System.out.println(texto);
```

---

# Formatação de Texto

Java possui ferramentas para formatar mensagens.

---

# String.format()

Permite inserir valores em um texto.

---

## Sintaxe

```java
String.format(texto, valores);
```

---

## Exemplo

```java
String nome = "Maria";
int idade = 20;

String mensagem = String.format(
    "Meu nome é %s e tenho %d anos",
    nome,
    idade
);

System.out.println(mensagem);
```

---

## Saída

```text
Meu nome é Maria e tenho 20 anos
```

---

# Placeholders Mais Utilizados

## %s

String.

```java
%s
```

---

## %d

Inteiros.

```java
%d
```

---

## %f

Decimais.

```java
%f
```

---

# Exemplo com Double

```java
double saldo = 1500.75;

System.out.println(
    String.format(
        "Saldo: %.2f",
        saldo
    )
);
```

Saída:

```text
Saldo: 1500.75
```

---

# Método formatted()

Funciona junto com Text Blocks.

---

## Exemplo

```java
String nome = "João";
int aulas = 4;

String mensagem = """
Olá, %s!

Teremos %d aulas de Java.
""".formatted(nome, aulas);

System.out.println(mensagem);
```

---

## Saída

```text
Olá, João!

Teremos 4 aulas de Java.
```

---

# Métodos Úteis da Classe String

## length()

Quantidade de caracteres.

```java
String nome = "Java";

System.out.println(nome.length());
```

Resultado:

```text
4
```

---

## toUpperCase()

Transforma para maiúsculo.

```java
String nome = "java";

System.out.println(nome.toUpperCase());
```

Resultado:

```text
JAVA
```

---

## toLowerCase()

Transforma para minúsculo.

```java
String nome = "JAVA";

System.out.println(nome.toLowerCase());
```

Resultado:

```text
java
```

---

# Exemplo Completo

```java
public class Principal {

    public static void main(String[] args) {

        String nome = "Kauê";

        System.out.println("Olá " + nome);

        if (nome.equals("Kauê")) {

            System.out.println("Nome encontrado");

        }

    }

}
```

---

# Erros Comuns

## Erro 1

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

## Erro 2

Esquecer aspas duplas.

---

Errado:

```java
String nome = João;
```

---

Correto:

```java
String nome = "João";
```

---

## Erro 3

Confundir String com char.

---

char:

```java
'A'
```

---

String:

```java
"Java"
```

---

# Resumo

String:

```text
Armazena textos.
```

---

Concatenação:

```java
+
```

---

Comparação:

```java
equals()
```

---

Comparação ignorando maiúsculas:

```java
equalsIgnoreCase()
```

---

Formatação:

```java
String.format()
```

---

Texto multilinha:

```java
Text Block
```

---

# Revisão Rápida

## Como declarar uma String?

```java
String nome = "João";
```

---

## Como juntar Strings?

```java
+
```

---

## Como comparar Strings?

```java
equals()
```

---

## Como ignorar maiúsculas e minúsculas?

```java
equalsIgnoreCase()
```

---

## Como criar textos com múltiplas linhas?

```java
Text Block
```

---

## Qual método formata textos?

```java
String.format()
```
