# Sobrescrita de Métodos (@Override)

## Introdução

Quando uma classe herda de outra, ela recebe métodos da classe pai.

Entretanto, em alguns casos queremos modificar o comportamento desses métodos.

Para isso utilizamos a sobrescrita de métodos.

Em Java a sobrescrita normalmente é identificada através da annotation:

```java
@Override
```

---

# O que é Sobrescrita?

Sobrescrita ocorre quando uma classe filha cria novamente um método que já existe na classe pai.

O método possui:

- Mesmo nome
- Mesmo retorno
- Mesmos parâmetros

Mas apresenta uma implementação diferente.

---

# Exemplo Simples

Classe pai:

```java
public class Animal {

    public void emitirSom() {

        System.out.println("Som genérico");

    }

}
```

---

Classe filha:

```java
public class Cachorro extends Animal {

    @Override
    public void emitirSom() {

        System.out.println("Au Au");

    }

}
```

---

# Resultado

Ao chamar:

```java
Cachorro cachorro = new Cachorro();

cachorro.emitirSom();
```

Saída:

```text
Au Au
```

---

O método da classe filha substituiu o comportamento da classe pai.

---

# Sem Sobrescrita

Se a classe filha não sobrescrever o método:

```java
public class Cachorro extends Animal {

}
```

---

Resultado:

```java
cachorro.emitirSom();
```

Saída:

```text
Som genérico
```

---

# Por Que Utilizar Sobrescrita?

Para adaptar comportamentos específicos.

A classe pai fornece uma implementação padrão.

A classe filha fornece uma implementação especializada.

---

# Exemplo do Mundo Real

Classe pai:

```java
Funcionario
```

---

Método:

```java
apresentarFuncao()
```

---

Classe filha:

```java
Professor
```

---

Pode sobrescrever:

```java
apresentarFuncao()
```

para exibir uma função específica.

---

# Exemplo

Classe pai:

```java
public class Funcionario {

    public void apresentarFuncao() {

        System.out.println(
            "Funcionário da empresa"
        );

    }

}
```

---

Classe filha:

```java
public class Professor extends Funcionario {

    @Override
    public void apresentarFuncao() {

        System.out.println(
            "Professor ministrando aula"
        );

    }

}
```

---

Resultado:

```text
Professor ministrando aula
```

---

# Exemplo Utilizado em Aula

O professor demonstrou a sobrescrita utilizando:

```java
Titulo
```

e

```java
Serie
```

sobrescrevendo o método:

```java
getDuracaoEmMinutos()
```

para que o cálculo da duração total da série fosse diferente do cálculo padrão herdado da superclasse. 【1-494ece】

---

## Classe Pai

```java
public int getDuracaoEmMinutos() {

    return duracaoEmMinutos;

}
```

---

## Classe Filha

```java
@Override
public int getDuracaoEmMinutos() {

    return temporadas
           * episodiosPorTemporada
           * minutosPorEpisodio;

}
```

---

Agora séries e filmes possuem comportamentos diferentes.

---

# Regras da Sobrescrita

Para ocorrer sobrescrita:

- Mesmo nome
- Mesmo retorno
- Mesmos parâmetros

---

# Exemplo Correto

Classe pai:

```java
public void ligar() {

}
```

---

Classe filha:

```java
@Override
public void ligar() {

}
```

---

# Exemplo Incorreto

Classe pai:

```java
public void ligar() {

}
```

---

Classe filha:

```java
@Override
public void ligar(String nome) {

}
```

---

Não ocorre sobrescrita.

O método possui assinatura diferente.

---

# O Papel do @Override

A annotation:

```java
@Override
```

não é obrigatória.

Mas é altamente recomendada.

---

## Exemplo

```java
@Override
public void emitirSom() {

    System.out.println("Miau");

}
```

---

# Vantagens do @Override

- Facilita leitura
- Evita erros
- A IDE consegue validar a sobrescrita
- Torna o código mais profissional

---

# Benefício Prático

Imagine:

Classe pai:

```java
emitirSom()
```

---

Classe filha:

```java
emitirSono()
```

Erro de digitação.

---

Sem:

```java
@Override
```

o código compila.

---

Com:

```java
@Override
```

a IDE informa o erro imediatamente.

---

# Exemplo Completo

Classe pai:

```java
public class Veiculo {

    public void ligar() {

        System.out.println(
            "Veículo ligado"
        );

    }

}
```

---

Classe filha:

```java
public class Carro extends Veiculo {

    @Override
    public void ligar() {

        System.out.println(
            "Carro ligado"
        );

    }

}
```

---

Resultado:

```text
Carro ligado
```

---

# Sobrescrita x Herança

## Herança

Permite reaproveitar código.

---

## Sobrescrita

Permite alterar comportamentos herdados.

---

# Boas Práticas

Utilizar:

```java
@Override
```

sempre que possível.

---

Manter nomes claros.

---

Evitar sobrescrever métodos sem necessidade.

---

# Erros Comuns

## Erro 1

Alterar parâmetros e achar que houve sobrescrita.

---

## Erro 2

Esquecer o @Override.

---

## Erro 3

Modificar assinatura do método.

---

## Erro 4

Confundir sobrescrita com sobrecarga.

---

# Resumo

Sobrescrita permite alterar métodos herdados.

---

Ela ocorre quando:

- Nome igual
- Retorno igual
- Parâmetros iguais

---

A annotation recomendada é:

```java
@Override
```

---

# Revisão Rápida

## O que é sobrescrita?

Alterar o comportamento de um método herdado.

---

## Qual annotation identifica sobrescrita?

```java
@Override
```

---

## Para existir sobrescrita os parâmetros precisam ser iguais?

Sim.

---

## Qual a vantagem da sobrescrita?

Permitir comportamentos diferentes para cada classe filha.

---

## Qual a diferença entre herança e sobrescrita?

Herança reutiliza código.

Sobrescrita altera comportamentos herdados.
