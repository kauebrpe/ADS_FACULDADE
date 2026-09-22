# Modificadores de Acesso

## Introdução

Em Java, os modificadores de acesso definem quem pode acessar:

- Classes
- Atributos
- Métodos

Eles são fundamentais para o encapsulamento e para a segurança das informações dentro do sistema.

---

# O Que São Modificadores de Acesso?

São palavras-chave utilizadas para controlar a visibilidade dos elementos de uma classe.

Os principais são:

```java
public
private
default
```

---

# Por Que Utilizar?

Imagine uma classe bancária:

```java
public class Conta {

    double saldo;

}
```

Qualquer parte do programa poderia fazer:

```java
conta.saldo = -5000;
```

Isso não é seguro.

Os modificadores ajudam a evitar esse tipo de problema.

---

# Public

## Conceito

O modificador:

```java
public
```

é o mais permissivo.

Tudo que é declarado como public pode ser acessado por qualquer classe.

---

## Exemplo

```java
public class Conta {

    public double saldo;

}
```

---

Uso:

```java
Conta conta = new Conta();

conta.saldo = 500;
```

---

Resultado:

```text
Permitido
```

---

# Public em Métodos

```java
public void sacar(double valor) {

}
```

O método pode ser acessado de qualquer lugar da aplicação.

---

# Private

## Conceito

O modificador:

```java
private
```

é o mais restritivo.

Elementos privados só podem ser acessados dentro da própria classe.

---

## Exemplo

```java
public class Conta {

    private double saldo;

}
```

---

Tentativa:

```java
Conta conta = new Conta();

conta.saldo = 500;
```

---

Resultado:

```text
Erro de compilação
```

---

# Exemplo Com Getter

```java
private double saldo;

public double getSaldo() {

    return saldo;

}
```

Agora a leitura é permitida de forma controlada.

---

# Exemplo Com Setter

```java
private double saldo;

public void setSaldo(double saldo) {

    this.saldo = saldo;

}
```

Agora a alteração também é controlada.

---

# Default

## Conceito

É o modificador sem palavra-chave.

Também é conhecido como:

```text
Package Private
```

---

## Exemplo

```java
class Conta {

    double saldo;

}
```

Observe:

```java
double saldo;
```

Sem:

```java
public
private
```

---

# Funcionamento

O acesso é permitido apenas dentro do mesmo pacote.

---

## Exemplo

Mesmo pacote:

```text
Permitido
```

---

Pacote diferente:

```text
Não permitido
```

---

# Comparação

## Public

Visível para qualquer classe.

---

## Private

Visível apenas dentro da própria classe.

---

## Default

Visível apenas dentro do mesmo pacote.

---

# Exemplo Completo

```java
public class Pessoa {

    private String nome;

    public String getNome() {

        return nome;

    }

    public void setNome(String nome) {

        this.nome = nome;

    }

}
```

---

# Qual Modificador Utilizar?

## Atributos

Normalmente:

```java
private
```

---

## Métodos de Acesso

Normalmente:

```java
public
```

---

## Exemplo

```java
private String nome;

public String getNome() {

    return nome;

}

public void setNome(String nome) {

    this.nome = nome;

}
```

---

# Relação com Encapsulamento

O encapsulamento funciona principalmente através de:

```java
private
```

+

```java
getters
```

+

```java
setters
```

---

# Exemplo da Aula

O professor mostrou que atributos privados não podem ser acessados diretamente por outras classes.

Para acessá-los corretamente utilizamos métodos públicos como:

```java
getTotalDeAvaliacoes()
```

e

```java
setTotalDeAvaliacoes()
```

【1-812412】

---

# Boas Práticas

## Atributos

Preferencialmente:

```java
private
```

---

## Métodos de acesso

Preferencialmente:

```java
public
```

---

## Evitar

```java
public String nome;
```

em aplicações reais.

---

# Erros Comuns

## Erro 1

Deixar todos os atributos públicos.

---

## Erro 2

Esquecer de criar Getters e Setters.

---

## Erro 3

Confundir private com default.

---

## Erro 4

Achar que private significa "não existe".

O atributo continua existindo.

Apenas não pode ser acessado diretamente.

---

# Resumo

## Public

Acesso livre.

---

## Private

Acesso apenas na própria classe.

---

## Default

Acesso apenas dentro do mesmo pacote.

---

# Tabela Resumo

| Modificador | Acesso |
|------------|---------|
| public | Qualquer classe |
| private | Apenas a própria classe |
| default | Mesmo pacote |

---

# Revisão Rápida

## Qual modificador é o mais permissivo?

```java
public
```

---

## Qual modificador é o mais restritivo?

```java
private
```

---

## O que significa default?

Acesso apenas dentro do mesmo pacote.

---

## Qual modificador normalmente utilizamos nos atributos?

```java
private
```

---

## Qual modificador normalmente utilizamos nos getters e setters?

```java
public
```

---

## Qual conceito é fortalecido pelos modificadores de acesso?

```text
Encapsulamento
```
