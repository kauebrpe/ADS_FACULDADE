# Finally

## Objetivo

Aprender a utilizar o bloco:

```java
finally
```

para executar códigos que precisam acontecer obrigatoriamente, independentemente de erros.

---

# Revisão

No tópico anterior estudamos:

```java
try
```

e

```java
catch
```

Fluxo:

```text
try
↓
Erro
↓
catch
↓
Tratamento
```

---

# O Que é Finally?

O bloco:

```java
finally
```

é executado sempre.

Não importa se:

- ocorreu Exception
- não ocorreu Exception
- o erro foi tratado

O código dentro do finally será executado.

---

# Estrutura Básica

```java
try {

    // código

}
catch (Exception e) {

    // tratamento

}
finally {

    // executa sempre

}
```

---

# Exemplo Simples

```java
public class Principal {

    public static void main(String[] args) {

        try {

            int resultado = 10 / 0;

        }
        catch (ArithmeticException e) {

            System.out.println(
                "Erro matemático."
            );

        }
        finally {

            System.out.println(
                "Fim da execução."
            );

        }

    }

}
```

---

## Resultado

```text
Erro matemático.
Fim da execução.
```

---

# Sem Exception

```java
try {

    System.out.println(
        "Programa executado."
    );

}
catch (Exception e) {

    System.out.println(
        "Erro."
    );

}
finally {

    System.out.println(
        "Finally executado."
    );

}
```

---

## Resultado

```text
Programa executado.
Finally executado.
```

---

Observe:

```text
Não houve erro.
```

Mas o:

```java
finally
```

foi executado.

---

# Quando Utilizar Finally?

Quando alguma tarefa precisa acontecer obrigatoriamente.

Exemplos:

- Fechar Scanner
- Fechar arquivos
- Encerrar conexões
- Liberar recursos

---

# Exemplo com Scanner

```java
Scanner scanner =
    new Scanner(System.in);

try {

    int idade =
        scanner.nextInt();

}
catch (Exception e) {

    System.out.println(
        "Entrada inválida."
    );

}
finally {

    scanner.close();

}
```

---

Mesmo que ocorra erro:

```java
scanner.close();
```

será executado.

---

# Exemplo com Arquivos

Imagine:

```java
arquivo.txt
```

---

Abrindo:

```java
abrir arquivo
```

---

Lendo:

```java
processar dados
```

---

Encerrando:

```java
fechar arquivo
```

---

Essa etapa de fechamento normalmente fica dentro do:

```java
finally
```

---

# Fluxo do Finally

Sem erro:

```text
try
↓
finally
```

---

Com erro:

```text
try
↓
catch
↓
finally
```

---

Resultado:

```text
finally sempre executa
```

---

# Exemplo Completo

```java
public class Principal {

    public static void main(String[] args) {

        try {

            System.out.println(
                "Início"
            );

            int resultado = 10 / 0;

        }
        catch (ArithmeticException e) {

            System.out.println(
                "Erro capturado."
            );

        }
        finally {

            System.out.println(
                "Finalizando recursos."
            );

        }

    }

}
```

---

## Resultado

```text
Início
Erro capturado.
Finalizando recursos.
```

---

# Try Sem Catch

Também é possível.

```java
try {

    // código

}
finally {

    // código

}
```

---

Mas isso é menos comum.

---

# Benefícios do Finally

## Garantia de Execução

O código será executado independentemente do erro.

---

## Limpeza de Recursos

Fechamento de conexões e arquivos.

---

## Organização

Centraliza processos de encerramento.

---

## Segurança

Evita recursos abertos desnecessariamente.

---

# Comparação

## try

Executa o código principal.

---

## catch

Trata o erro.

---

## finally

Executa sempre.

---

# Situações Reais

## Banco de Dados

Fechar conexões.

---

## Arquivos

Fechar arquivos.

---

## Scanner

Fechar entrada de dados.

---

## APIs

Encerrar conexões de rede.

---

# Erros Comuns

## Erro 1

Achar que finally executa apenas quando há erro.

---

## Erro 2

Esquecer de fechar recursos.

---

## Erro 3

Colocar toda a lógica da aplicação dentro do finally.

---

## Erro 4

Confundir catch com finally.

---

# Resumo

O bloco:

```java
finally
```

sempre é executado.

---

Seu principal objetivo é:

```text
Limpeza e encerramento de recursos.
```

---

Fluxos:

```text
try
↓
finally
```

---

ou

```text
try
↓
catch
↓
finally
```

---

# Revisão Rápida

## Para que serve o finally?

Executar código independentemente da ocorrência de erros.

---

## O finally é executado quando não ocorre Exception?

Sim.

---

## O finally é executado quando ocorre Exception?

Sim.

---

## Qual o uso mais comum do finally?

Fechar recursos.

---

## Exemplos de recursos que podem ser fechados?

- Scanner
- Arquivos
- Conexões

---

## Qual a principal diferença entre catch e finally?

catch trata erros.

finally executa sempre.
