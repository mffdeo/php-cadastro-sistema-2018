# 🚀 Sistema de Cadastro em PHP

Aplicação web desenvolvida em PHP com persistência em MySQL, utilizando um fluxo de cadastro em múltiplas etapas.
Projeto originalmente criado em 2018 e **refatorado em 2026** com melhorias de segurança, organização e boas práticas modernas.

---

## 📸 Demonstração

> Sistema de cadastro dividido em 3 etapas com armazenamento em banco de dados.

---

## 🧠 Sobre o projeto

Este projeto simula um sistema real de cadastro de usuários, com:

* Coleta de dados em múltiplas etapas
* Persistência em banco de dados relacional
* Tratamento e validação de dados
* Criptografia de senha com `password_hash`
* Separação de configurações sensíveis

---

## 🛠️ Tecnologias utilizadas

* **PHP 8**
* **MySQL**
* **HTML5**
* **CSS3**

---

## 🔐 Segurança aplicada

* Senhas armazenadas com hash (`password_hash`)
* Arquivo de configuração isolado (`config.php`)
* Uso de `.gitignore` para proteger credenciais
* Sanitização básica de entradas (`htmlspecialchars`)

---

## 📂 Estrutura do projeto

```
.
├── cadastra.php
├── cadastro.sql
├── cadastro_etapa1.php
├── cadastro_etapa1.inc
├── cadastro_etapa2.php
├── cadastro_etapa2.inc
├── cadastro_etapa3.php
├── cadastro_etapa3.inc
├── conecta_mysql.inc
├── config.example.php
├── contato.php
├── contato.inc
├── processa_dados_contato.php
├── index.php
├── menu.inc
├── rodape.inc
├── conteudo.inc
├── funcoes_aux.inc
├── produtos.php
├── quem_somos.php
├── style.css
├── figura.jpg
```

---

## ⚙️ Como executar o projeto

### 1. Clone o repositório

```
git clone <seu-repositorio>
cd php-cadastro-sistema
```

---

### 2. Configure o banco de dados

Acesse o MySQL e execute:

```
CREATE DATABASE cadastro;
USE cadastro;
SOURCE cadastro.sql;
```

---

### 3. Configure as credenciais

Copie o arquivo de exemplo:

```
cp config.example.php config.php
```

Edite o arquivo `config.php` com suas credenciais:

```php
define('DB_HOST', 'localhost');
define('DB_USER', 'root');
define('DB_PASS', 'SUA_SENHA');
define('DB_NAME', 'cadastro');
```

---

### 4. Inicie o servidor local

```
php -S localhost:8000
```

---

### 5. Acesse no navegador

```
http://localhost:8000
```

---

## 📈 Melhorias realizadas (refatoração 2026)

* Atualização de `mysql_*` para `mysqli`
* Implementação de hash de senha
* Correção de tipos de dados (DATE, VARCHAR)
* Separação de configuração sensível
* Limpeza de dados antigos do banco
* Ajustes de compatibilidade com PHP 8+

---

## 🚧 Melhorias futuras

* Sistema de login com `password_verify`
* Uso de prepared statements (prevenção de SQL Injection)
* Validação de formulário mais robusta
* Interface responsiva
* Deploy em ambiente online

---

## 👨‍💻 Autor

Desenvolvido e modernizado por **Marcos Oliveira**.

---

## ⭐ Objetivo

Este projeto faz parte da evolução prática em desenvolvimento backend, com foco em:

* Consolidação de fundamentos
* Boas práticas de segurança
* Estruturação de aplicações reais

---
