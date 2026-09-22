# Throw e Throws

## Objetivo

Aprender como gerar e propagar Exceptions manualmente utilizando:

- throw
- throws

Esses recursos permitem que o próprio programador controle situações de erro dentro da aplicação.

---

# Introdução

Nos tópicos anteriores estudamos:

- Exceptions
- try
- catch
- finally

Até agora apenas capturamos erros gerados pelo próprio Java.

Agora vamos aprender a criar e lançar exceções manualmente.

---

# O que é throw?

A palavra-chave:

```java
throw
```

é utilizada para lançar uma Exception manualmente.

---

## Sintaxe

```java
throw new Exception();
```

---

## Exemplo

```java
public class Principal {

    public static void main(String[] args) {

        throw new RuntimeException(
            "Erro gerado manualmente"
        );

    }

}
```

---

## Resultado

```text
Erro gerado manualmente
```

---

# Quando Utilizar throw?

Quando uma regra do sistema for violada.

Exemplos:

- Idade inválida
- Saldo insuficiente
- Produto inexistente
- Senha incorreta

---

# Exemplo Prático

```java
int idade = -1;

if (idade < 0) {

    throw new IllegalArgumentException(
        "Idade não pode ser negativa"
    );

}
```

---

# O que Acontece?

Se a condição for verdadeira:

```text
Exception lançada
↓
Fluxo interrompido
```

---

# Throw com try/catch

```java
try {

    throw new Exception(
        "Erro de teste"
    );

}
catch (Exception e) {

    System.out.println(
        e.getMessage()
    );

}
```

---

## Resultado

```text
Erro de teste
```

---

# O que é throws?

A palavra-chave:

```java
throws
```

é utilizada para informar que um método pode gerar uma Exception.

---

## Sintaxe

```java
public void metodo()
    throws Exception {

}
```

---

# Diferença Entre throw e throws

## throw

Lança uma Exception.

---

Exemplo:

```java
throw new Exception();
```

---

## throws

Declara que o método pode lançar uma Exception.

---

Exemplo:

```java
public void metodo()
    throws Exception {

}
```

---

# Exemplo com throws

```java
public static void verificarIdade(int idade)
    throws Exception {

    if (idade < 18) {

        throw new Exception(
            "Menor de idade"
        );

    }

}
```

---

# Chamando o Método

```java
try {

    verificarIdade(15);

}
catch (Exception e) {

    System.out.println(
        e.getMessage()
    );

}
```

---

## Resultado

```text
Menor de idade
```

---

# Fluxo

```text
Método
↓
throws
↓
throw
↓
Exception
↓
catch
```

---

# Exemplo Real

Classe Conta:

```java
public class Conta {

    private double saldo;

    public void sacar(double valor)
        throws Exception {

        if (valor > saldo) {

            throw new Exception(
                "Saldo insuficiente"
            );

        }

        saldo -= valor;

    }

}
```

---

## Utilização

```java
try {

    conta.sacar(1000);

}
catch (Exception e) {

    System.out.println(
        e.getMessage()
    );

}
```

---

Resultado:

```text
Saldo insuficiente
```

---

# Exceções Personalizadas

Também podemos criar nossas próprias Exceptions.

---

## Exemplo

```java
public class SaldoInsuficienteException
        extends Exception {

    public SaldoInsuficienteException(
            String mensagem) {

        super(mensagem);

    }

}
```

---

# Utilização

```java
throw new SaldoInsuficienteException(
    "Saldo insuficiente"
);
```

---

# Vantagens

- Regras mais claras
- Código mais organizado
- Mensagens específicas
- Melhor manutenção

---

# Quando Utilizar throw?

Use quando:

- Precisar interromper a execução
- Detectar uma situação inválida
- Aplicar regras de negócio

---

# Quando Utilizar throws?

Use quando:

- Um método pode gerar Exception
- Outro método será responsável pelo tratamento

---

# Erros Comuns

## Erro 1

Confundir:

```java
throw
```

com

```java
throws
```

---

## Erro 2

Lançar Exceptions sem necessidade.

---

## Erro 3

Ignorar Exceptions lançadas.

---

## Erro 4

Criar mensagens de erro pouco informativas.

---

# Resumo

## throw

Lança uma Exception.

Exemplo:

```java
throw new Exception();
```

---

## throws

Declara que o método pode lançar uma Exception.

Exemplo:

```java
public void metodo()
    throws Exception
```

---

## Exception Personalizada

Permite criar erros específicos da aplicação.

---

# Comparação

| Recurso | Função |
|----------|---------|
| throw | Lançar Exception |
| throws | Declarar Exception |
| catch | Tratar Exception |
| finally | Executar sempre |

---

# Revisão Rápida

## O que faz o throw?

Lança uma Exception.

---

## O que faz o throws?

Informa que um método pode lançar uma Exception.

---

## Qual a diferença entre throw e throws?

throw lança.

throws declara.

---

## Podemos criar Exceptions próprias?

Sim.

---

## Quando normalmente usamos throw?

Quando uma regra de negócio é violada.
