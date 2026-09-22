# Stored Procedures e Functions

## Objetivo

Aprender como criar rotinas dentro do banco de dados utilizando:

- Functions
- Stored Procedures
- Parâmetros
- Variáveis
- CALL
- RETURN

Esses recursos permitem executar lógica diretamente no banco de dados.

---

# Programação Dentro do Banco

Até agora utilizamos SQL para:

- Criar tabelas
- Inserir dados
- Atualizar dados
- Consultar dados

Agora vamos criar código dentro do próprio banco.

---

# O que é uma Function?

Uma Function é uma rotina que recebe valores, executa uma lógica e retorna um resultado.

Ela funciona de forma parecida com funções em linguagens de programação.

---

## Características

- Recebe parâmetros
- Possui retorno
- Pode ser utilizada em consultas SQL
- Retorna apenas um valor

---

# Sintaxe Básica

```sql
CREATE FUNCTION nome_funcao()
RETURNS tipo
BEGIN

    lógica

    RETURN valor;

END;
```

---

# Exemplo Simples

```sql
DELIMITER $$

CREATE FUNCTION dobro(numero INT)
RETURNS INT
DETERMINISTIC

BEGIN

    RETURN numero * 2;

END $$

DELIMITER ;
```

---

# Utilizando a Function

```sql
SELECT dobro(10);
```

Resultado:

```text
20
```

---

# Exemplo do Tipo Visto em Aula

Obter o próximo id disponível.

```sql
CREATE FUNCTION obter_proximo_id()
RETURNS INTEGER
```

A função calcula o próximo valor utilizando o maior id existente.

---

# Variáveis em Functions

Uma variável armazena valores temporários.

---

## Exemplo

```sql
DECLARE total INT;
```

---

## Atribuindo Valor

```sql
SET total = 10;
```

---

# Função com Variável

```sql
DELIMITER $$

CREATE FUNCTION triplo(numero INT)
RETURNS INT
DETERMINISTIC

BEGIN

    DECLARE resultado INT;

    SET resultado = numero * 3;

    RETURN resultado;

END $$

DELIMITER ;
```

---

# O que é uma Stored Procedure?

Uma Procedure é uma rotina armazenada dentro do banco.

Diferente da Function:

- Pode executar vários comandos
- Pode inserir dados
- Pode atualizar dados
- Pode excluir dados
- Não precisa retornar um valor

---

# Sintaxe Básica

```sql
CREATE PROCEDURE nome_procedure()
BEGIN

    comandos SQL;

END;
```

---

# Exemplo Simples

```sql
DELIMITER $$

CREATE PROCEDURE listar_clientes()

BEGIN

    SELECT *
    FROM clientes;

END $$

DELIMITER ;
```

---

# Executando uma Procedure

Utilizamos:

```sql
CALL
```

---

## Exemplo

```sql
CALL listar_clientes();
```

---

# Procedure com Parâmetros

Podemos receber informações.

---

## Exemplo

```sql
DELIMITER $$

CREATE PROCEDURE buscar_cliente(
    IN p_id INT
)

BEGIN

    SELECT *
    FROM clientes
    WHERE id_cliente = p_id;

END $$

DELIMITER ;
```

---

## Executando

```sql
CALL buscar_cliente(1);
```

---

# Parâmetros

Existem três tipos principais.

---

## IN

Recebe valores de entrada.

```sql
IN nome_parametro INT
```

---

## OUT

Retorna valores.

```sql
OUT total INT
```

---

## INOUT

Recebe e devolve valores.

```sql
INOUT contador INT
```

---

# Exemplo de Procedure para Inserção

```sql
DELIMITER $$

CREATE PROCEDURE inserir_cliente(
    IN p_nome VARCHAR(100),
    IN p_email VARCHAR(100)
)

BEGIN

    INSERT INTO clientes(
        nome,
        email
    )
    VALUES(
        p_nome,
        p_email
    );

END $$

DELIMITER ;
```

---

# Executando

```sql
CALL inserir_cliente(
    'João',
    'joao@email.com'
);
```

---

# Function x Procedure

## Function

- Retorna valor
- Pode ser usada em SELECT
- Menor foco em alteração de dados

Exemplo:

```sql
SELECT minha_funcao();
```

---

## Procedure

- Executa processos completos
- Pode inserir, atualizar e excluir
- Executada com CALL

Exemplo:

```sql
CALL minha_procedure();
```

---

# Comparação

| Recurso | Function | Procedure |
|----------|----------|----------|
| Retorna valor | Sim | Opcional |
| Usada em SELECT | Sim | Não |
| Executa processos | Limitado | Sim |
| Chamada | SELECT | CALL |

---

# Quando Utilizar Functions?

- Cálculos
- Regras simples
- Conversões
- Valores derivados

Exemplos:

- Média
- Desconto
- Próximo código

---

# Quando Utilizar Procedures?

- Cadastro de clientes
- Processamento de pedidos
- Rotinas automáticas
- Processos administrativos

---

# Relação com Triggers

No próximo tópico veremos:

```text
Triggers
```

Triggers costumam chamar:

- Functions
- Procedures

para executar tarefas automaticamente.

---

# Boas Práticas

- Utilizar nomes claros
- Documentar parâmetros
- Evitar código excessivamente complexo
- Testar antes de utilizar em produção

---

# Erros Comuns

## Erro 1

Esquecer o RETURN em Functions.

---

## Erro 2

Confundir Function com Procedure.

---

## Erro 3

Esquecer o DELIMITER.

---

## Erro 4

Tentar executar Procedure com SELECT.

---

## Errado

```sql
SELECT listar_clientes();
```

---

## Correto

```sql
CALL listar_clientes();
```

---

# Resumo

- Function retorna valor
- Procedure executa processos
- CALL executa Procedures
- RETURN devolve resultados
- Functions podem ser usadas em SELECT

---

# Cola para Prova

- CREATE FUNCTION cria funções
- CREATE PROCEDURE cria procedures
- CALL executa procedures
- RETURN retorna valores
- DELIMITER altera delimitadores
- Function retorna valor
- Procedure executa rotinas

---

# Questões de Revisão

## 1. O que é uma Function?

Resposta:

Uma rotina que executa uma lógica e retorna um valor.

---

## 2. O que é uma Procedure?

Resposta:

Uma rotina armazenada que executa um conjunto de comandos.

---

## 3. Qual comando executa uma Procedure?

Resposta:

```sql
CALL
```

---

## 4. Qual comando retorna um valor em uma Function?

Resposta:

```sql
RETURN
```

---

## 5. Qual a principal diferença entre Function e Procedure?

Resposta:

Functions retornam valores.

Procedures executam processos.
