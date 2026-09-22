# Polimorfismo na Prática

## Introdução

No tópico anterior aprendemos o conceito de Polimorfismo.

Agora vamos aplicá-lo em situações mais próximas do desenvolvimento real.

O objetivo é entender como trabalhar com:

- Referências da classe pai
- Objetos das classes filhas
- Métodos sobrescritos
- Reutilização de código

---

# Revisão Rápida

Temos uma classe pai:

```java
public class Animal {

    public void emitirSom() {

        System.out.println("Som genérico");

    }

}
```

---

Uma classe filha:

```java
public class Cachorro extends Animal {

    @Override
    public void emitirSom() {

        System.out.println("Au Au");

    }

}
```

---

Agora podemos escrever:

```java
Animal animal = new Cachorro();
```

Isso é um exemplo de polimorfismo.

---

# Referência da Classe Pai

Observe:

```java
Animal animal = new Cachorro();
```

---

Temos:

```java
Animal
```

↓

Tipo da referência.

---

E:

```java
new Cachorro()
```

↓

Objeto criado.

---

# O Método Executado

```java
animal.emitirSom();
```

Resultado:

```text
Au Au
```

---

Mesmo utilizando:

```java
Animal
```

como referência.

O Java executa o método da classe:

```java
Cachorro
```

---

# Exemplo com Gato

```java
Animal animal = new Gato();

animal.emitirSom();
```

Resultado:

```text
Miau
```

---

# O Que o Java Analisa?

O Java verifica o tipo real do objeto criado.

Não apenas o tipo da variável.

---

# Exemplo do Professor

O exercício mostrou:

```java
Funcionario f = new Professor();

f.apresentarFuncao();
```

Resultado:

```text
Professor ministrando aula.
```

Porque o objeto criado é:

```java
Professor
```

e não apenas:

```java
Funcionario
```

Atividade 4 - heranca_sobrescrita_java_.pdf 【1-4e2f06】

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
Funcionario funcionario = new Professor();

funcionario.apresentarFuncao();
```

---

Resultado:

```text
Professor ministrando aula
```

---

# Polimorfismo com Vários Objetos

```java
Animal a1 = new Cachorro();
Animal a2 = new Gato();
```

---

Executando:

```java
a1.emitirSom();
a2.emitirSom();
```

---

Resultado:

```text
Au Au
Miau
```

---

Mesmo método.

Resultados diferentes.

---

# Benefício

Podemos trabalhar utilizando apenas a classe pai.

---

Exemplo:

```java
Animal
```

---

Sem precisar saber se é:

```text
Cachorro
Gato
Passaro
Leao
```

---

# Exemplo de Lista

Imagine vários animais:

```java
Animal[] animais = {

    new Cachorro(),
    new Gato()

};
```

---

Percorrendo:

```java
for (Animal animal : animais) {

    animal.emitirSom();

}
```

---

Resultado:

```text
Au Au
Miau
```

---

# Vantagem

O código fica preparado para receber novos tipos.

Exemplo:

```java
Passaro
```

---

Basta criar:

```java
Passaro extends Animal
```

---

Sem alterar o código principal.

---

# Exemplo do Mundo Real

Sistema de pagamentos.

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

Cada classe implementa de forma diferente.

Mas o sistema continua utilizando:

```java
Pagamento
```

como referência principal.

---

# Limitação

Utilizando uma referência da classe pai:

```java
Animal animal =
    new Cachorro();
```

---

Podemos acessar apenas os métodos disponíveis na classe:

```java
Animal
```

---

Exemplo:

```java
animal.abanarRabo();
```

---

Resultado:

```text
Erro de compilação
```

---

Porque:

```java
abanarRabo()
```

não existe em:

```java
Animal
```

---

# Boas Práticas

- Utilizar sobrescrita sempre que necessário.
- Programar para a superclasse.
- Evitar verificações excessivas de tipos.
- Aproveitar a flexibilidade do polimorfismo.

---

# Erros Comuns

## Erro 1

Achar que o método executado depende da variável.

---

## Erro 2

Confundir herança com polimorfismo.

---

## Erro 3

Esquecer de sobrescrever métodos.

---

## Erro 4

Tentar acessar métodos que não existem na classe pai.

---

# Resumo

Polimorfismo permite:

```text
Mesmo método
↓
Comportamentos diferentes
```

---

O tipo da referência pode ser:

```java
Animal
```

---

Mas o comportamento será definido pelo objeto criado.

---

Exemplo:

```java
Animal animal =
    new Cachorro();
```

---

# Revisão Rápida

## O que é um objeto polimórfico?

Objeto criado a partir de uma classe filha utilizando referência da classe pai.

---

## Qual método é executado?

O método do objeto criado.

---

## O que acontece aqui?

```java
Animal a =
    new Cachorro();
```

A referência é Animal.

O objeto é Cachorro.

---

## Qual a principal vantagem do polimorfismo?

Flexibilidade e reutilização de código.

---

## Qual conceito normalmente acompanha o polimorfismo?

Sobrescrita de métodos.
