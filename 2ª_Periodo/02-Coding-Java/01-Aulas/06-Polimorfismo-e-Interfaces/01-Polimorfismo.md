# Polimorfismo

## Introdução

Polimorfismo é um dos pilares da Programação Orientada a Objetos.

A palavra vem do grego e significa:

```text
Muitas formas
```

Na prática, o polimorfismo permite que diferentes objetos respondam de maneiras diferentes ao mesmo método.

---

# O que é Polimorfismo?

Polimorfismo é a capacidade de um objeto assumir comportamentos diferentes mesmo compartilhando a mesma estrutura básica.

Ele trabalha em conjunto com:

- Herança
- Sobrescrita de métodos
- Classes pai e filha

---

# Exemplo Conceitual

Classe pai:

```text
Animal
```

Classes filhas:

```text
Cachorro
Gato
```

Todos possuem o método:

```java
emitirSom()
```

Mas cada um produz um resultado diferente.

---

# Exemplo

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

Classe filha:

```java
public class Gato extends Animal {

    @Override
    public void emitirSom() {

        System.out.println("Miau");

    }

}
```

---

# Resultado

```java
Cachorro cachorro = new Cachorro();

cachorro.emitirSom();
```

Saída:

```text
Au Au
```

---

```java
Gato gato = new Gato();

gato.emitirSom();
```

Saída:

```text
Miau
```

---

# Onde Está o Polimorfismo?

O método é o mesmo:

```java
emitirSom()
```

Mas o comportamento muda conforme o objeto.

---

# Exemplo da Aula

O professor utilizou um exemplo semelhante com:

```java
Funcionario f = new Professor();
```

e:

```java
f.apresentarFuncao();
```

Nesse caso, mesmo a variável sendo do tipo:

```java
Funcionario
```

o método executado foi o da classe:

```java
Professor
```

【1-aa9264】

---

# Objeto Polimórfico

Um dos conceitos mais importantes.

---

## Exemplo

```java
Animal animal = new Cachorro();
```

---

Observe:

```java
Animal
```

é a referência.

---

Já:

```java
new Cachorro()
```

é o objeto criado.

---

# Chamando o Método

```java
animal.emitirSom();
```

Resultado:

```text
Au Au
```

---

Apesar da variável ser:

```java
Animal
```

o comportamento executado é o do:

```java
Cachorro
```

---

# Outro Exemplo

```java
Animal animal = new Gato();
```

---

Executando:

```java
animal.emitirSom();
```

Resultado:

```text
Miau
```

---

# Vantagem

Podemos trabalhar utilizando:

```java
Animal
```

sem precisar saber exatamente qual objeto está sendo utilizado.

---

# Exemplo Completo

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

Uso:

```java
Funcionario f = new Professor();

f.apresentarFuncao();
```

---

Saída:

```text
Professor ministrando aula
```

---

# Como o Java Decide?

Durante a execução o Java verifica qual objeto foi criado.

Não importa o tipo da variável.

Importa o tipo real do objeto.

---

# Benefícios do Polimorfismo

## Flexibilidade

O código fica mais reutilizável.

---

## Organização

Menos verificações desnecessárias.

---

## Reutilização

Permite trabalhar com classes mais genéricas.

---

## Expansão

Novas classes podem ser adicionadas facilmente.

---

# Exemplo do Mundo Real

Classe pai:

```text
Pagamento
```

---

Classes filhas:

```text
Pix
Cartao
Boleto
```

---

Método:

```java
processarPagamento()
```

---

Cada classe implementa sua própria lógica.

---

# Relação com Herança

O polimorfismo normalmente depende de:

```text
Herança
```

---

Fluxo:

```text
Classe Pai
↓
Classe Filha
↓
Sobrescrita
↓
Polimorfismo
```

---

# Boas Práticas

- Utilizar herança quando houver relação lógica.
- Utilizar @Override.
- Programar para a superclasse quando possível.
- Evitar verificações desnecessárias de tipos.

---

# Erros Comuns

## Erro 1

Confundir herança com polimorfismo.

---

## Erro 2

Achar que polimorfismo funciona sem sobrescrita.

---

## Erro 3

Pensar que o método executado depende do tipo da variável.

---

## Erro 4

Criar hierarquias sem necessidade.

---

# Resumo

Polimorfismo significa:

```text
Muitas formas
```

---

Permite que:

```java
Mesmo método
```

produza:

```text
Comportamentos diferentes
```

---

Funciona em conjunto com:

- Herança
- Sobrescrita
- Classes Pai e Filha

---

# Revisão Rápida

## O que significa Polimorfismo?

Capacidade de apresentar múltiplos comportamentos.

---

## O polimorfismo depende de qual conceito?

Herança.

---

## O que normalmente acompanha o polimorfismo?

Sobrescrita.

---

## O método executado depende do tipo da variável?

Não.

Depende do objeto criado.

---

## O que acontece aqui?

```java
Animal animal = new Cachorro();
```

A variável é Animal.

O objeto criado é Cachorro.

---

## Qual comportamento será executado?

O comportamento do objeto criado.
