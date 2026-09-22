# Anotações (Annotations)

## Introdução

As Annotations são recursos utilizados para adicionar informações extras ao código Java.

Elas não fazem parte da lógica principal do programa, mas fornecem instruções importantes para:

- Compilador
- IDE
- Frameworks
- Ferramentas de desenvolvimento

---

# O que é uma Annotation?

Uma Annotation é representada pelo símbolo:

```java
@
```

seguido do nome da anotação.

Exemplo:

```java
@Override
```

---

## Exemplos

```java
@Override
```

```java
@Deprecated
```

---

```java
@SuppressWarnings
```

---

# Para Que Servem?

As annotations ajudam a:

- Melhorar a legibilidade
- Evitar erros
- Documentar intenções
- Integrar bibliotecas e frameworks

---

# @Override

É a annotation mais utilizada por iniciantes.

Ela indica que um método está sobrescrevendo um método herdado.

---

## Exemplo

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

# Benefício do @Override

A IDE consegue verificar se a sobrescrita está correta.

---

## Exemplo de Erro

Classe pai:

```java
public void emitirSom() {

}
```

---

Classe filha:

```java
@Override
public void emitirSoom() {

}
```

---

Resultado:

```text
Erro detectado pela IDE.
```

O nome do método foi escrito incorretamente.

---

# @Deprecated

Utilizada para indicar que um método ou classe não deve mais ser utilizado.

---

## Exemplo

```java
@Deprecated
public void metodoAntigo() {

}
```

---

## Significado

```text
Evite utilizar este método.
```

Normalmente existe uma versão mais recente disponível.

---

# Exemplo de Uso

```java
@Deprecated
public void imprimirRelatorioAntigo() {

    System.out.println("Relatório antigo");

}
```

---

Ao chamar esse método, a IDE poderá exibir um aviso.

---

# @SuppressWarnings

Utilizada para ocultar determinados avisos do compilador.

---

## Exemplo

```java
@SuppressWarnings("unused")
```

---

Isso informa ao compilador que determinados avisos podem ser ignorados.

---

# Exemplo

```java
@SuppressWarnings("unused")
String nome = "João";
```

---

# Annotations na Aula

O professor apresentou principalmente:

```java
@Override
```

para indicar a sobrescrita correta de métodos nas subclasses. 【1-8740a8】

---

# Utilização em Frameworks

Muitos frameworks Java trabalham intensamente com annotations.

Exemplos:

- Spring
- Hibernate
- Jakarta EE

---

Exemplos comuns:

```java
@Controller
```

```java
@Service
```

```java
@Repository
```

```java
@Entity
```

---

Por enquanto o mais importante é compreender o conceito.

---

# Exemplo Completo

```java
public class Veiculo {

    public void ligar() {

        System.out.println("Veículo ligado");

    }

}
```

---

```java
public class Carro extends Veiculo {

    @Override
    public void ligar() {

        System.out.println("Carro ligado");

    }

}
```

---

Resultado:

```text
Carro ligado
```

---

# Vantagens das Annotations

- Melhor documentação
- Menos erros
- Integração com frameworks
- Código mais organizado

---

# Boas Práticas

## Utilizar @Override

Sempre que houver sobrescrita.

---

## Utilizar @Deprecated

Quando um recurso não deve mais ser utilizado.

---

## Não ignorar avisos do compilador sem necessidade

Evite utilizar:

```java
@SuppressWarnings
```

sem entender o motivo.

---

# Erros Comuns

## Erro 1

Esquecer o @Override em métodos sobrescritos.

---

## Erro 2

Achar que annotations executam código.

Elas fornecem informações extras.

---

## Erro 3

Ignorar avisos importantes do compilador.

---

## Erro 4

Utilizar @Deprecated sem documentação.

---

# Resumo

Annotations são metadados adicionados ao código.

---

As mais importantes neste momento são:

```java
@Override
@Deprecated
```

---

Objetivos:

- Melhorar o código
- Evitar erros
- Facilitar manutenção

---

# Tabela Resumo

| Annotation | Finalidade |
|------------|------------|
| @Override | Sobrescrita de método |
| @Deprecated | Recurso obsoleto |
| @SuppressWarnings | Ocultar avisos |

---

# Revisão Rápida

## O que identifica uma Annotation?

O símbolo:

```java
@
```

---

## Qual annotation indica sobrescrita?

```java
@Override
```

---

## Qual annotation indica que um método está obsoleto?

```java
@Deprecated
```

---

## As annotations fazem parte da lógica principal?

Não.

Elas fornecem informações adicionais ao código.

---

## Qual a principal annotation estudada neste módulo?

```java
@Override
```
