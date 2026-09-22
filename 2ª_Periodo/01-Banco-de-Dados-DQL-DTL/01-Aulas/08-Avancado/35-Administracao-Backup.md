# Administração de Banco de Dados: Backup, Replicação, Tuning e Segurança

## Objetivo

Aprender conceitos básicos de administração de banco de dados.

Ao final deste tópico você será capaz de compreender:

- Backup
- Recuperação de dados
- Replicação
- Segurança
- Tuning administrativo

---

# O Que é Administração de Banco de Dados?

Administração de banco de dados é o conjunto de atividades responsáveis por manter o banco funcionando corretamente.

Normalmente essa função é realizada por um profissional chamado:

```text
DBA
(Database Administrator)
```

---

# Responsabilidades de um DBA

Algumas das principais tarefas são:

- Realizar backups
- Recuperar dados
- Gerenciar usuários
- Controlar permissões
- Monitorar desempenho
- Aplicar atualizações
- Garantir segurança

---

# Backup

Backup é uma cópia de segurança dos dados.

O objetivo é permitir recuperação em caso de problemas.

---

# Por Que Fazer Backup?

Problemas podem acontecer:

- Falha de hardware
- Erro humano
- Exclusão acidental
- Ataques
- Corrupção de dados

---

# Exemplo

Imagine que uma tabela importante foi apagada.

```sql
DROP TABLE clientes;
```

Sem backup:

```text
Dados perdidos.
```

Com backup:

```text
Dados podem ser restaurados.
```

---

# Tipos de Backup

## Backup Completo

Copia todo o banco de dados.

Vantagem:

```text
Recuperação simples.
```

Desvantagem:

```text
Maior espaço em disco.
```

---

## Backup Incremental

Copia apenas alterações desde o último backup.

Vantagem:

```text
Menor tamanho.
```

Desvantagem:

```text
Recuperação mais complexa.
```

---

# Recuperação

A recuperação é o processo de restaurar os dados após alguma falha.

Fluxo:

```text
Backup
↓
Falha
↓
Restauração
↓
Sistema volta a funcionar
```

---

# Replicação

Replicação é a cópia automática de dados entre servidores.

---

# Objetivo

Melhorar:

- Disponibilidade
- Segurança
- Escalabilidade

---

# Exemplo

```text
Servidor Principal
↓
Servidor Secundário
```

Os dados são copiados automaticamente.

---

# Vantagens da Replicação

- Alta disponibilidade
- Maior tolerância a falhas
- Distribuição de carga

---

# Segurança

A segurança protege os dados contra acessos indevidos.

---

# Boas Práticas de Segurança

- Criar senhas fortes
- Utilizar permissões adequadas
- Evitar usuários compartilhados
- Fazer backup regularmente
- Monitorar atividades suspeitas

---

# Controle de Acesso

Exemplo:

Administrador

```text
Acesso total
```

---

Usuário comum

```text
Apenas consultas
```

---

# Atualizações

SGBDs recebem atualizações periodicamente.

Objetivos:

- Corrigir falhas
- Melhorar desempenho
- Corrigir vulnerabilidades

---

# O Que é Tuning Administrativo?

Tuning é o processo de melhorar o desempenho do banco.

---

# Exemplos

- Ajustar configurações
- Melhorar consultas
- Criar índices
- Revisar estrutura

---

# Situação

Problema:

```text
Consulta muito lenta
```

---

Solução:

```text
Analisar índices
Aplicar melhorias
Testar novamente
```

---

# Monitoramento

O administrador também monitora:

- CPU
- Memória
- Disco
- Consultas lentas
- Crescimento das tabelas

---

# Alta Disponibilidade

Alta disponibilidade significa manter o sistema acessível pelo maior tempo possível.

Exemplo:

```text
Servidor principal falha
↓
Servidor secundário assume
```

---

# Plano de Recuperação

Empresas normalmente definem:

```text
Como recuperar
Quem recupera
Quanto tempo levará
```

em caso de desastre.

---

# Situações Reais

## Banco Digital

Precisa de:

- Backup constante
- Segurança elevada
- Replicação

---

## Loja Virtual

Precisa de:

- Disponibilidade
- Desempenho
- Recuperação rápida

---

## Sistema Escolar

Precisa de:

- Backups periódicos
- Controle de usuários
- Segurança

---

# Erros Comuns

## Erro 1

Achar que nunca será necessário recuperar dados.

---

## Erro 2

Fazer backup sem testar restauração.

---

## Erro 3

Conceder permissões excessivas.

---

## Erro 4

Ignorar monitoramento do banco.

---

# Resumo

- Backup cria cópias de segurança.
- Recuperação restaura dados.
- Replicação copia dados entre servidores.
- Segurança protege informações.
- Tuning melhora desempenho.
- Administração garante estabilidade.

---

# Tabela Resumo

| Conceito | Finalidade |
|----------|------------|
| Backup | Copiar dados |
| Recuperação | Restaurar dados |
| Replicação | Duplicar dados |
| Segurança | Proteger dados |
| Tuning | Melhorar desempenho |
| Monitoramento | Detectar problemas |

---

# Cola para Prova

- Backup = cópia de segurança
- Recuperação = restauração dos dados
- Replicação = cópia entre servidores
- Segurança = proteção dos dados
- Tuning = otimização
- DBA = administrador do banco

---

# Questões de Revisão

## 1. O que é backup?

Resposta:

Uma cópia de segurança dos dados.

---

## 2. O que é recuperação?

Resposta:

O processo de restaurar dados após uma falha.

---

## 3. O que é replicação?

Resposta:

A cópia automática dos dados para outro servidor.

---

## 4. O que significa DBA?

Resposta:

Database Administrator.

---

## 5. Qual o objetivo do tuning?

Resposta:

Melhorar o desempenho do banco de dados.
