# Triggers

## Objetivo

Aprender o que são Triggers e como utilizá-las para automatizar ações dentro do banco de dados.

Ao final deste tópico você será capaz de:

- Criar Triggers
- Entender eventos automáticos
- Utilizar BEFORE e AFTER
- Utilizar NEW e OLD
- Consultar Triggers existentes
- Remover Triggers

---

## O Que é uma Trigger?

Uma Trigger é uma rotina automática executada quando um evento ocorre em uma tabela.

Você não precisa chamar a Trigger manualmente.

O próprio banco executa a Trigger quando o evento acontece.

---

## Tradução Literal

```text
Trigger = Gatilho
```

Sempre que um evento acontece:

```text
INSERT
UPDATE
DELETE
```

a Trigger pode ser executada.

---

## Exemplo do Mundo Real

Imagine um sistema bancário.

Quando uma transferência é realizada:

```text
Transferência realizada
↓
Trigger executada
↓
Registro gerado na tabela de auditoria
```

Tudo acontece automaticamente.

---

## Eventos Mais Utilizados

### INSERT

Disparada quando um registro é inserido.

---

### UPDATE

Disparada quando um registro é atualizado.

---

### DELETE

Disparada quando um registro é removido.

---

## BEFORE e AFTER

Uma Trigger pode executar antes ou depois do evento.

---

### BEFORE

Executa antes da operação.

Exemplo:

```text
BEFORE INSERT
```

---

### AFTER

Executa depois da operação.

Exemplo:

```text
AFTER INSERT
```

---

## Estrutura Básica

```sql
CREATE TRIGGER nome_trigger
AFTER INSERT
ON clientes
FOR EACH ROW

BEGIN

    comandos SQL;

END;
```

---

# Exemplo Prático

Tabela CLIENTES

```sql
CREATE TABLE clientes (
    id_cliente INT PRIMARY KEY,
    nome VARCHAR(100)
);
```

---

Tabela LOG_CLIENTES

```sql
CREATE TABLE log_clientes (
    id_log INT PRIMARY KEY,
    acao VARCHAR(20),
    data_hora DATETIME
);
```

---

## Trigger

```sql
CREATE TRIGGER trg_log_cliente

AFTER INSERT
ON clientes

FOR EACH ROW

BEGIN

    INSERT INTO log_clientes (
        id_log,
        acao,
        data_hora
    )

    VALUES (
        1,
        'INSERT',
        NOW()
    );

END;
```

---

## O Que Acontece?

Quando executamos:

```sql
INSERT INTO clientes
VALUES (1,'João');
```

a Trigger é executada automaticamente.

---

Resultado:

```text
CLIENTE inserido
↓
TRIGGER executada
↓
LOG gerado
```

---

# FOR EACH ROW

Significa:

```text
Executar para cada linha afetada.
```

Se inserirmos:

```text
10 registros
```

a Trigger será executada:

```text
10 vezes
```

---

# NEW

NEW representa os novos valores.

Muito utilizado em INSERT e UPDATE.

---

## Exemplo

```sql
NEW.nome
```

Representa o nome recém inserido.

---

## Exemplo Prático

```sql
CREATE TRIGGER trg_log_cliente

AFTER INSERT
ON clientes

FOR EACH ROW

BEGIN

    INSERT INTO log_clientes (
        nome_cliente
    )

    VALUES (
        NEW.nome
    );

END;
```

---

# OLD

OLD representa os valores antigos.

Muito utilizado em UPDATE e DELETE.

---

## Exemplo

```sql
OLD.nome
```

Representa o valor anterior.

---

# Exemplo de UPDATE

Antes:

```text
João
```

Depois:

```text
João Silva
```

Durante a Trigger:

```text
OLD.nome = João

NEW.nome = João Silva
```

---

# Trigger BEFORE UPDATE

```sql
CREATE TRIGGER trg_validacao

BEFORE UPDATE
ON clientes

FOR EACH ROW

BEGIN

    -- validações

END;
```

---

# Trigger AFTER UPDATE

```sql
CREATE TRIGGER trg_log_update

AFTER UPDATE
ON clientes

FOR EACH ROW

BEGIN

    -- auditoria

END;
```

---

# Trigger BEFORE DELETE

```sql
CREATE TRIGGER trg_backup

BEFORE DELETE
ON clientes

FOR EACH ROW

BEGIN

    -- salvar dados antes da exclusão

END;
```

---

# Consultando Triggers

Para listar as Triggers existentes:

```sql
SHOW TRIGGERS;
```

---

# Removendo uma Trigger

## Sintaxe

```sql
DROP TRIGGER nome_trigger;
```

---

## Exemplo

```sql
DROP TRIGGER trg_log_cliente;
```

---

# Exemplo Completo de Auditoria

Quando um cliente é inserido:

```text
Cliente cadastrado
↓
Trigger executada
↓
Registro salvo na tabela de log
```

Esse é um dos usos mais comuns das Triggers.

---

# Vantagens das Triggers

- Automatização
- Auditoria
- Segurança
- Integridade dos dados
- Padronização

---

# Quando Utilizar?

### Auditoria

Registrar alterações no banco.

---

### Logs

Guardar histórico de operações.

---

### Validações

Verificar regras antes de salvar dados.

---

### Controle de Segurança

Bloquear operações não permitidas.

---

# Cuidados

Triggers executam automaticamente.

Por isso:

- Devem ser bem planejadas
- Devem ser documentadas
- Não devem conter lógica excessivamente complexa

---

# Erros Comuns

## Erro 1

Esquecer FOR EACH ROW.

---

## Erro 2

Confundir NEW com OLD.

---

## Erro 3

Criar muitas Triggers para a mesma tabela.

---

## Erro 4

Esquecer que a Trigger é executada automaticamente.

---

# Resumo

- Trigger é um gatilho automático
- Pode executar antes ou depois de eventos
- Trabalha com INSERT, UPDATE e DELETE
- NEW representa valores novos
- OLD representa valores antigos
- SHOW TRIGGERS lista as Triggers
- DROP TRIGGER remove uma Trigger

---

# Tabela Resumo

| Conceito | Significado |
|-----------|-------------|
| Trigger | Automação |
| BEFORE | Antes do evento |
| AFTER | Depois do evento |
| NEW | Valor novo |
| OLD | Valor antigo |
| SHOW TRIGGERS | Listar Triggers |
| DROP TRIGGER | Remover Trigger |

---

# Cola para Prova

- Trigger = gatilho automático
- BEFORE = antes
- AFTER = depois
- NEW = valor novo
- OLD = valor antigo
- FOR EACH ROW = para cada registro
- SHOW TRIGGERS = listar triggers
- DROP TRIGGER = remover trigger

---

# Questões de Revisão

## 1. O que é uma Trigger?

Resposta:

Uma rotina automática executada após ou antes de um evento.

---

## 2. Quais eventos podem disparar uma Trigger?

Resposta:

INSERT, UPDATE e DELETE.

---

## 3. Qual a diferença entre BEFORE e AFTER?

Resposta:

BEFORE executa antes do evento.

AFTER executa depois do evento.

---

## 4. O que significa NEW?

Resposta:

Representa os novos valores.

---

## 5. O que significa OLD?

Resposta:

Representa os valores anteriores.

---

## 6. Qual comando lista as Triggers existentes?

Resposta:

```sql
SHOW TRIGGERS;
```

---

## 7. Qual comando remove uma Trigger?

Resposta:

```sql
DROP TRIGGER;
```
