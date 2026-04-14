
-- BANCO DE DADOS: REDE DE LIVRARIAS (DER)

CREATE DATABASE Atividade2;
USE Atividade2;

-- 1. AUTOR

CREATE TABLE Autor (
    id_autor INT AUTO_INCREMENT PRIMARY KEY,
    nome VARCHAR(100) NOT NULL,
    nacionalidade VARCHAR(60)
);


-- 2. LIVRO

CREATE TABLE Livro (
    isbn CHAR(13) PRIMARY KEY,
    titulo VARCHAR(100) NOT NULL,
    preco DECIMAL(10,2),
    ano_publi DATE
);


-- 3. FILIAL

CREATE TABLE Filial (
    id_filial INT AUTO_INCREMENT PRIMARY KEY,
    cidade VARCHAR(80) NOT NULL,
    endereco VARCHAR(150)
);


-- 4. CLIENTE

CREATE TABLE Cliente (
    cpf CHAR(11) PRIMARY KEY,
    nome VARCHAR(100) NOT NULL,
    telefone VARCHAR(15)
);


-- 5. VENDA

CREATE TABLE Venda (
    id_venda INT AUTO_INCREMENT PRIMARY KEY,
    data_venda DATE NOT NULL,
    total DECIMAL(10,2),
    cpf_cliente CHAR(11),
    id_filial INT,
    FOREIGN KEY (cpf_cliente) REFERENCES Cliente(cpf),
    FOREIGN KEY (id_filial) REFERENCES Filial(id_filial)
);


-- RELACIONAMENTO N:M (DER)


-- AUTOR escreve LIVRO (N:M)
CREATE TABLE Escreve (
    id_autor INT,
    isbn CHAR(13),
    PRIMARY KEY (id_autor, isbn),
    FOREIGN KEY (id_autor) REFERENCES Autor(id_autor),
    FOREIGN KEY (isbn) REFERENCES Livro(isbn)
);

-- FILIAL possui LIVRO (N:M)
CREATE TABLE Possui (
    id_filial INT,
    isbn CHAR(13),
    quantidade INT DEFAULT 0,
    PRIMARY KEY (id_filial, isbn),
    FOREIGN KEY (id_filial) REFERENCES Filial(id_filial),
    FOREIGN KEY (isbn) REFERENCES Livro(isbn)
);

-- VENDA inclui LIVRO (N:M)
CREATE TABLE Inclui (
    id_venda INT,
    isbn CHAR(13),
    quantidade INT DEFAULT 1,
    preco_unit DECIMAL(10,2),
    PRIMARY KEY (id_venda, isbn),
    FOREIGN KEY (id_venda) REFERENCES Venda(id_venda),
    FOREIGN KEY (isbn) REFERENCES Livro(isbn)
);
