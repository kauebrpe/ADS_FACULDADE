create database bd2_revisao;
use bd2_revisao;

create table EDIFICIO (
PK_COD INT auto_increment PRIMARY KEY,
DT_CONST date,
NUMERO int,
rua varchar(50),
bairro varchar(50),
estado varchar(2)
);

CREATE TABLE CLIENTE (
COD_CLIENTE INT auto_increment primary KEY,
DT_NASC DATE,
NOME varchar(100)
);

create table APARTAMENTO (
PK_NUM INT auto_increment,
PK_EDF INT,
TAMANHO INT,
COD_CLIENTE int,
primary key (PK_NUM, PK_EDF),
foreign key (COD_CLIENTE) references CLIENTE (COD_CLIENTE)
/*foreign key FK_1 (PK_EDF) references EDIFICIO (PK_COD);*/
);

ALTER TABLE APARTAMENTO
ADD foreign key FK_1 (PK_EDF) references EDIFICIO (PK_COD);

CREATE TABLE TELEFONE (
NUM_TEL INT,
COD_CLIENTE INT,
primary key (NUM_TEL, COD_CLIENTE),
foreign key (COD_CLIENTE) references CLIENTE (COD_CLIENTE)
);

create table pessoa_f (
cod_cliente int,
cpf int(14),
sexo char(1),
foreign key (cod_cliente) references cliente (cod_cliente)
);

create table pessoa_j (
cod_cliente int,
cnpj varchar(14),
primary key (cod_cliente, cnpj),
foreign key (cod_cliente) references cliente(cod_cliente)
);

/*2 inserts em edificio
11 inserts clientes
10 inserts em apartamento (5 em cada edificio)
2 inserts telefone
5 clientes pf
6 clientes pj*/
/* =======================
   INSERTS EDIFICIO (2)
   ======================= */

INSERT INTO EDIFICIO (DT_CONST, NUMERO, rua, bairro, estado)
VALUES
('2010-05-20', 404, 'Rua dos Bugs', 'Centro', 'PE'),
('2015-09-15', 777, 'Avenida dos Gnomos', 'Boa Vista', 'PE');

SELECT * FROM EDIFICIO;

DELETE FROM EDIFICIO
WHERE PK_COD IN (3,4);

/* =======================
   INSERTS CLIENTE (11)
   ======================= */

INSERT INTO CLIENTE (DT_NASC, NOME)
VALUES
('1990-01-10', 'Batata Espacial'),
('1985-03-22', 'Jurema das Galaxias'),
('2001-07-30', 'Robson WiFi'),
('1998-12-05', 'Creusa do Pix'),
('1975-08-17', 'Tonho Java'),
('1993-11-02', 'Empresa Pato Feliz LTDA'),
('2000-06-18', 'Industria Macarrao Quente SA'),
('1988-09-09', 'Mercadinho Tio Drone'),
('1995-04-14', 'Startup Abobora Tech'),
('1982-02-28', 'Clube dos Programadores Anonimos'),
('1999-10-10', 'Sorveteria Gelo Nuclear');


/* =======================
   INSERTS APARTAMENTO (10)
   5 NO EDIFICIO 1
   5 NO EDIFICIO 2
   ======================= */

INSERT INTO APARTAMENTO (PK_NUM, PK_EDF, TAMANHO, COD_CLIENTE)
VALUES
(101, 1, 60, 1),
(102, 1, 75, 2),
(103, 1, 80, 3),
(104, 1, 55, 4),
(105, 1, 90, 5),

(201, 2, 65, 6),
(202, 2, 70, 7),
(203, 2, 85, 8),
(204, 2, 95, 9),
(205, 2, 120, 10);


/* =======================
   INSERTS TELEFONE (2)
   ======================= */

INSERT INTO TELEFONE (NUM_TEL, COD_CLIENTE)
VALUES
(999991111, 1),
(988882222, 6);


/* =======================
   PESSOA_F (5 CLIENTES)
   CLIENTES 1 A 5
   ======================= */

INSERT INTO PESSOA_F (COD_CLIENTE, CPF, SEXO)
VALUES
(1, 11111111111, 'M'),
(2, 22222222222, 'F'),
(3, 33333333333, 'M'),
(4, 44444444444, 'F'),
(5, 55555555555, 'M');


/* =======================
   PESSOA_J (6 CLIENTES)
   CLIENTES 6 A 11
   ======================= */

INSERT INTO PESSOA_J (COD_CLIENTE, CNPJ)
VALUES
(6, '11111111000111'),
(7, '22222222000122'),
(8, '33333333000133'),
(9, '44444444000144'),
(10, '55555555000155'),
(11, '66666666000166');
