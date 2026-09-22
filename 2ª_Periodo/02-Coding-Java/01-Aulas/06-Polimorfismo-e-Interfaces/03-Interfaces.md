# Interfaces

## Introdução

Uma Interface é um recurso da Programação Orientada a Objetos utilizado para definir um conjunto de comportamentos que devem ser implementados pelas classes.

Uma Interface funciona como um contrato.

Ela define o que uma classe deve fazer, mas não como fará.

---

# O que é uma Interface?

Uma Interface é uma estrutura que contém declarações de métodos.

Esses métodos deverão ser implementados pelas classes que utilizarem essa Interface.

---

## Exemplo Conceitual

Imagine uma interface:

```text
Controlavel
```

Ela define:

```text
ligar()
desligar()
```

Qualquer classe que implementar essa interface deverá possuir esses métodos.

---

# Por Que Utilizar Interfaces?

As Interfaces permitem:

- Padronização
- Organização
- Flexibilidade
- Reutilização de código
- Polimorfismo

---

# Criando uma Interface

## Sintaxe

```java
public interface Controlavel {

    void ligar();

    void desligar();

}
```

---

## Observação

Os métodos não possuem implementação.

Apenas a definição.

---

# Implementando uma Interface

Utilizamos a palavra-chave:

```java
implements
```

---

## Exemplo

```java
public class Televisao implements Controlavel {

    @Override
    public void ligar() {

        System.out.println("TV ligada");

    }

    @Override
    public void desligar() {

        System.out.println("TV desligada");

    }

}
```

---

# Por Que o @Override?

Porque os métodos definidos na Interface precisam ser implementados pela classe.

---

# Utilizando a Classe

```java
Televisao tv = new Televisao();

tv.ligar();
tv.desligar();
```

---

## Saída

```text
TV ligada
TV desligada
```

---

# Interface Como Contrato

A Interface obriga todas as classes a seguirem uma estrutura.

---

## Exemplo

Interface:

```java
public interface Pagamento {

    void realizarPagamento();

}
```

---

Classe PIX:

```java
public class Pix implements Pagamento {

    @Override
    public void realizarPagamento() {

        System.out.println("Pagamento via PIX");

    }

}
```

---

Classe Cartao:

```java
public class Cartao implements Pagamento {

    @Override
    public void realizarPagamento() {

        System.out.println("Pagamento via Cartão");

    }

}
```

---

# Relação com Polimorfismo

Interfaces trabalham muito bem com Polimorfismo.

---

## Exemplo

```java
Pagamento pagamento;
```

---

Pode apontar para:

```java
new Pix()
```

ou

```java
new Cartao()
```

---

## Exemplo

```java
Pagamento pagamento = new Pix();

pagamento.realizarPagamento();
```

---

Resultado:

```text
Pagamento via PIX
```

---

# Outro Exemplo

```java
Pagamento pagamento = new Cartao();

pagamento.realizarPagamento();
```

---

Resultado:

```text
Pagamento via Cartão
```

---

# Múltiplas Implementações

Uma Interface pode ser implementada por várias classes.

---

## Exemplo

Interface:

```java
Animal
```

Implementações:

```text
Cachorro
Gato
Passaro
```

---

Cada classe implementa os métodos de forma diferente.

---

# Interfaces e Herança

Herança utiliza:

```java
extends
```

---

Interfaces utilizam:

```java
implements
```

---

# Diferença Principal

## Herança

```text
É UM
```

Exemplo:

```text
Aluno é uma Pessoa
```

---

## Interface

```text
É CAPAZ DE FAZER
```

Exemplo:

```text
Impressora é capaz de imprimir
```

---

# Exemplo Completo

Interface:

```java
public interface Imprimivel {

    void imprimir();

}
```

---

Classe:

```java
public class Relatorio implements Imprimivel {

    @Override
    public void imprimir() {

        System.out.println("Relatório impresso");

    }

}
```

---

Uso:

```java
Relatorio relatorio = new Relatorio();

relatorio.imprimir();
```

---

Resultado:

```text
Relatório impresso
```

---

# Vantagens das Interfaces

- Menor acoplamento
- Mais organização
- Maior flexibilidade
- Melhor reutilização
- Polimorfismo mais poderoso

---

# Uso em Frameworks

Frameworks Java utilizam Interfaces constantemente.

Exemplos:

```text
Spring
Hibernate
Jakarta EE
```

---

Por isso compreender Interfaces é fundamental para evoluir em Java.

---

# Erros Comuns

## Erro 1

Confundir Interface com Classe.

---

## Erro 2

Esquecer de implementar os métodos.

---

## Erro 3

Utilizar extends em vez de implements.

---

Errado:

```java
public class Pix extends Pagamento
```

---

Correto:

```java
public class Pix implements Pagamento
```

---

## Erro 4

Pensar que Interfaces possuem implementação completa.

---

# Resumo

Interface:

```text
Contrato
```

---

Palavra-chave:

```java
implements
```

---

Benefícios:

- Organização
- Reutilização
- Padronização
- Polimorfismo

---

# Revisão Rápida

## O que é uma Interface?

Um contrato que define comportamentos.

---

## Qual palavra utilizamos para implementar uma Interface?

```java
implements
```

---

## Interfaces possuem implementação dos métodos?

Não.

Elas definem apenas o contrato.

---

## Qual é a principal relação de uma Interface?

```text
É capaz de fazer
```

---

## Interfaces ajudam qual conceito da POO?

Polimorfismo.
