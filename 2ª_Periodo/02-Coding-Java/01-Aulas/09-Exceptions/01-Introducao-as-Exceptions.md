# Introdução às Exceptions

## Objetivo

Compreender o que são Exceptions, por que elas existem, como o Java trata erros durante a execução e quais ferramentas a linguagem oferece para lidar com situações inesperadas.

Ao concluir este tópico você deverá ser capaz de:

- Identificar uma Exception
- Entender por que ela acontece
- Ler mensagens de erro
- Diferenciar erros de compilação e erros de execução
- Compreender a importância do tratamento de exceções

---

# O Que é uma Exception?

Uma Exception (Exceção) é um evento que interrompe o fluxo normal de execução de um programa.

Em situações ideais, o programa executa todas as suas instruções normalmente.

Exemplo:

```text
Linha 1
↓
Linha 2
↓
Linha 3
↓
Linha 4
```

Porém, quando ocorre uma situação inesperada:

```text
Linha 1
↓
Linha 2
↓
Erro
↓
Exception
↓
Interrupção
```

o Java gera uma Exception para informar que algo deu errado.

---

# Por Que Exceptions Existem?

Imagine um programa bancário.

Um usuário tenta:

```text
Transferir dinheiro
```

ou

```text
Consultar uma conta
```

Se o sistema encontrar um problema, ele precisa informar o erro de maneira organizada.

As Exceptions foram criadas exatamente para isso.

Elas permitem:

- Detectar problemas
- Identificar a causa
- Informar onde ocorreu o erro
- Possibilitar recuperação da aplicação

---

# O Mundo Real Não é Perfeito

Quando desenvolvemos software, precisamos considerar que usuários cometem erros.

Exemplos:

- Digitar letras quando o sistema espera números
- Informar datas inválidas
- Deixar campos vazios
- Solicitar arquivos inexistentes

Também existem problemas externos:

- Falha de conexão
- Falta de memória
- Banco de dados indisponível
- Arquivos corrompidos

O Java utiliza Exceptions para lidar com essas situações.

---

# Erro de Compilação x Exception

Uma dúvida comum é confundir erro de compilação com Exception.

---

## Erro de Compilação

O programa nem chega a executar.

Exemplo:

```java
int idade = "20";
```

Resultado:

```text
Erro de compilação
```

O compilador identifica o problema antes da aplicação iniciar.

---

## Exception

O programa compila normalmente.

O erro acontece durante a execução.

Exemplo:

```java
int resultado = 10 / 0;
```

Resultado:

```text
ArithmeticException
```

Nesse caso o programa inicia, mas falha durante a execução.

---

# Exemplo de Exception

```java
public class Principal {

    public static void main(String[] args) {

        int resultado = 10 / 0;

        System.out.println(resultado);

    }

}
```

Resultado:

```text
Exception in thread "main"
java.lang.ArithmeticException: / by zero
```

O Java identificou uma operação inválida e interrompeu o programa.

---

# O Que É o Stack Trace?

Quando ocorre uma Exception o Java imprime informações chamadas de:

```text
Stack Trace
```

Exemplo:

```text
Exception in thread "main"
java.lang.ArithmeticException: / by zero
at Principal.main(Principal.java:5)
```

Essas informações ajudam a localizar:

- Tipo do erro
- Arquivo onde ocorreu
- Linha onde ocorreu
- Caminho percorrido até o problema

---

# Exceptions Mais Comuns

Durante os primeiros estudos de Java, algumas Exceptions aparecem com frequência.

## ArithmeticException

Erro matemático.

Exemplo:

```java
int resultado = 10 / 0;
```

---

## NullPointerException

Tentativa de utilizar um objeto inexistente.

Exemplo:

```java
String nome = null;

System.out.println(nome.length());
```

---

## IndexOutOfBoundsException

Tentativa de acessar posições inexistentes.

Exemplo:

```java
lista.get(10);
```

quando a lista possui apenas 3 elementos.

---

## InputMismatchException

Muito comum ao utilizar Scanner.

Exemplo:

```java
Scanner scanner = new Scanner(System.in);

int idade = scanner.nextInt();
```

Entrada:

```text
abc
```

Resultado:

```text
InputMismatchException
```

---

# Por Que Aprender Exceptions?

Muitos programas iniciantes falham porque não tratam erros.

Um sistema profissional deve ser capaz de:

- Continuar funcionando
- Informar mensagens adequadas
- Evitar travamentos
- Registrar problemas

É exatamente por isso que o Java possui mecanismos como:

```java
try
catch
finally
throw
throws
```

que serão estudados nos próximos tópicos.

---

# Resumo

Uma Exception é um erro que ocorre durante a execução de um programa.

Ela existe para:

- Informar problemas
- Evitar comportamentos incorretos
- Auxiliar na identificação de falhas
- Permitir tratamento adequado dos erros

Nos próximos tópicos veremos como capturar e tratar essas Exceptions utilizando os mecanismos da própria linguagem Java.
