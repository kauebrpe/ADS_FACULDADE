# Interfaces na Prática

## Introdução

No tópico anterior aprendemos que uma Interface funciona como um contrato.

Agora vamos aplicar esse conceito em situações mais próximas da realidade.

O objetivo é entender como Interfaces ajudam a criar sistemas mais organizados, flexíveis e fáceis de manter.

---

# Por Que Interfaces São Importantes?

Imagine que precisamos implementar diferentes formas de pagamento.

Exemplos:

- PIX
- Cartão
- Boleto

Todas realizam um pagamento.

Mas cada uma possui sua própria lógica.

---

# Sem Interface

Teríamos várias classes independentes.

```java
Pix
Cartao
Boleto
```

O sistema precisaria conhecer os detalhes de cada uma.

---

# Com Interface

Criamos um contrato comum.

```java
public interface Pagamento {

    void realizarPagamento();

}
```

---

Todas as classes passam a seguir a mesma estrutura.

---

# Implementação

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

Classe Cartão:

```java
public class Cartao implements Pagamento {

    @Override
    public void realizarPagamento() {

        System.out.println("Pagamento via Cartão");

    }

}
```

---

Classe Boleto:

```java
public class Boleto implements Pagamento {

    @Override
    public void realizarPagamento() {

        System.out.println("Pagamento via Boleto");

    }

}
```

---

# Polimorfismo com Interfaces

Agora podemos trabalhar utilizando apenas:

```java
Pagamento
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

## Outro Exemplo

```java
Pagamento pagamento = new Boleto();

pagamento.realizarPagamento();
```

---

Resultado:

```text
Pagamento via Boleto
```

---

# Benefício

O sistema não precisa saber qual implementação está sendo utilizada.

Ele trabalha apenas com:

```java
Pagamento
```

---

# Exemplo com Relatórios

Interface:

```java
public interface Relatorio {

    void gerar();

}
```

---

Implementação PDF:

```java
public class RelatorioPDF
        implements Relatorio {

    @Override
    public void gerar() {

        System.out.println("Gerando PDF");

    }

}
```

---

Implementação Excel:

```java
public class RelatorioExcel
        implements Relatorio {

    @Override
    public void gerar() {

        System.out.println("Gerando Excel");

    }

}
```

---

# Utilização

```java
Relatorio relatorio =
    new RelatorioPDF();

relatorio.gerar();
```

---

Resultado:

```text
Gerando PDF
```

---

# Exemplo com Login

Interface:

```java
public interface Autenticavel {

    boolean autenticar();

}
```

---

Classe Usuário:

```java
public class Usuario
        implements Autenticavel {

    @Override
    public boolean autenticar() {

        return true;

    }

}
```

---

Classe Administrador:

```java
public class Administrador
        implements Autenticavel {

    @Override
    public boolean autenticar() {

        return true;

    }

}
```

---

# Várias Classes, Mesma Interface

Uma única interface pode ser implementada por dezenas de classes diferentes.

Exemplo:

```text
Pagamento
├── Pix
├── Cartao
├── Boleto
└── Transferencia
```

---

Todas possuem:

```java
realizarPagamento()
```

---

# Interfaces e Organização

Sem Interface:

```text
Cada classe possui regras próprias.
```

---

Com Interface:

```text
Todas seguem o mesmo contrato.
```

---

# Vantagens

## Padronização

As classes seguem a mesma estrutura.

---

## Flexibilidade

Novas implementações podem ser adicionadas facilmente.

---

## Polimorfismo

Permite trabalhar com referências mais genéricas.

---

## Manutenção

Mudanças ficam mais organizadas.

---

# Exemplo do Mundo Real

Sistemas corporativos costumam utilizar Interfaces para:

- Pagamentos
- Autenticação
- Relatórios
- Comunicação com banco de dados
- Integrações externas

---

# Interfaces em Frameworks

Frameworks modernos utilizam Interfaces constantemente.

Exemplos:

```text
Spring
Hibernate
Jakarta EE
```

Grande parte da flexibilidade desses frameworks depende desse conceito.

---

# Boas Práticas

- Criar interfaces com responsabilidade clara.
- Utilizar nomes descritivos.
- Evitar interfaces gigantes.
- Utilizar polimorfismo sempre que fizer sentido.

---

# Erros Comuns

## Erro 1

Criar interfaces sem necessidade.

---

## Erro 2

Não implementar todos os métodos obrigatórios.

---

## Erro 3

Confundir Interface com Classe.

---

## Erro 4

Criar muitas responsabilidades em uma única Interface.

---

# Resumo

Interface:

```text
Contrato
```

---

Implementação:

```java
implements
```

---

Benefícios:

- Organização
- Padronização
- Polimorfismo
- Flexibilidade

---

# Exemplo Clássico

```java
Pagamento pagamento =
    new Pix();
```

---

O sistema trabalha com:

```java
Pagamento
```

mas executa:

```java
Pix
```

---

# Revisão Rápida

## O que é uma Interface?

Um contrato que define comportamentos.

---

## Qual palavra é utilizada para implementar uma Interface?

```java
implements
```

---

## Uma Interface pode ser implementada por várias classes?

Sim.

---

## Qual a principal vantagem das Interfaces?

Padronização e flexibilidade.

---

## Interfaces trabalham bem com qual conceito?

Polimorfismo.

---

## Cite exemplos de uso real de Interfaces.

- Pagamentos
- Relatórios
- Login
- Integrações
