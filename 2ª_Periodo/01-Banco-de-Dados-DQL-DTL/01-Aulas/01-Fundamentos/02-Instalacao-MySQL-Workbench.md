# Instalação do MySQL e Configuração do MySQL Workbench

## Objetivo

Aprender o que é o MySQL, instalar o ambiente de desenvolvimento e realizar os primeiros testes utilizando o MySQL Workbench.

---

# O que é o MySQL?

O MySQL é um Sistema Gerenciador de Banco de Dados (SGBD).

Sua função é armazenar, organizar, consultar e gerenciar informações.

Exemplos de uso:

- Sistema escolar
- Loja virtual
- Sistema hospitalar
- Aplicativos móveis
- Sistemas bancários

---

# O que é o MySQL Workbench?

O MySQL Workbench é a ferramenta gráfica oficial do MySQL.

Com ela podemos:

- Criar bancos de dados
- Criar tabelas
- Executar comandos SQL
- Gerenciar usuários
- Modelar bancos de dados
- Fazer consultas

---

# Como o Ambiente Funciona?

```text
Usuário
   ↓
MySQL Workbench
   ↓
MySQL Server
   ↓
Banco de Dados
```

---

# Instalação do MySQL

## Passo 1

Baixar o MySQL Community Server.

Durante a instalação:

```text
Next
Next
Next
Install
```

---

## Passo 2

Configurar o usuário administrador.

Usuário padrão:

```text
root
```

Definir uma senha segura.

Exemplo:

```text
root
Senha: ********
```

⚠️ Guarde a senha.

---

## Passo 3

Finalizar a instalação.

Após isso o serviço do MySQL ficará disponível no computador.

---

# Instalação do MySQL Workbench

Instalar o MySQL Workbench.

Ao abrir pela primeira vez aparecerá a tela de conexões.

---

# Criando uma Nova Conexão

Clique em:

```text
MySQL Connections
+
```

---

## Configuração Recomendada

### Connection Name

```text
MySQL Local
```

### Hostname

```text
localhost
```

### Port

```text
3306
```

### Username

```text
root
```

### Password

Senha criada anteriormente.

---

# Testando a Conexão

Clique em:

```text
Test Connection
```

Se estiver correto aparecer:

```text
Successfully made the MySQL connection
```

---

# Primeiro Teste

Abra uma nova aba SQL.

Digite:

```sql
SELECT 1;
```

Execute.

Resultado esperado:

```text
1
```

Isso confirma que o servidor está funcionando.

---

# Primeiro Banco de Dados

Criando um banco:

```sql
CREATE DATABASE escola;
```

---

# Selecionando o Banco

```sql
USE escola;
```

---

# Criando uma Tabela

```sql
CREATE TABLE alunos (
    id INT PRIMARY KEY,
    nome VARCHAR(100)
);
```

---

# Inserindo Registros

```sql
INSERT INTO alunos
VALUES (1, 'João');
```

---

# Consultando os Dados

```sql
SELECT *
FROM alunos;
```

Resultado:

```text
1 | João
```

---

# Comandos de Verificação

## Listar Bancos

```sql
SHOW DATABASES;
```

---

## Listar Tabelas

```sql
SHOW TABLES;
```

---

## Ver Estrutura da Tabela

```sql
DESCRIBE alunos;
```

ou

```sql
DESC alunos;
```

---

# Problemas Comuns

## Access Denied

Erro:

```text
Access denied
```

Causa:

Senha incorreta.

---

## Can't Connect

Erro:

```text
Can't connect to MySQL server
```

Causa:

Servidor MySQL não está iniciado.

---

## Porta Incorreta

Porta padrão:

```text
3306
```

---

# Boas Práticas

✅ Utilizar senhas fortes

✅ Fazer backup dos bancos

✅ Não compartilhar senha do root

✅ Documentar bancos e tabelas

✅ Manter nomes padronizados

---

# Resumo

## MySQL

SGBD responsável por armazenar e gerenciar os dados.

---

## Workbench

Ferramenta gráfica para trabalhar com o MySQL.

---

## Usuário padrão

```text
root
```

---

## Porta padrão

```text
3306
```

---

# Cola para Prova

```text
MySQL = SGBD

Workbench = Interface gráfica

localhost = própria máquina

Porta padrão = 3306

SHOW DATABASES = listar bancos

SHOW TABLES = listar tabelas

DESC = mostrar estrutura
```

---

# Questões de Revisão

## 1. O que é MySQL?

Resposta:

Um Sistema Gerenciador de Banco de Dados.

---

## 2. O que é MySQL Workbench?

Resposta:

Uma ferramenta gráfica para administrar o MySQL.

---

## 3. Qual a porta padrão do MySQL?

Resposta:

3306.

---

## 4. Qual o usuário padrão criado na instalação?

Resposta:

root.

---

## 5. Qual comando lista todos os bancos?

Resposta:

```sql
SHOW DATABASES;
```
