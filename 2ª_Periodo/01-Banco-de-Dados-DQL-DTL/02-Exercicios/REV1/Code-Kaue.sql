create database revisao1;
use revisao1;
create table edificio (
	pk_cod int unique primary key,
    dt_const date,
    rua varchar(50),
    numero int,
    bairro varchar(50),
    estado varchar(50)
);

create table apartamento (
	pk_num int unique primary key,
    pk_edf int unique not null,
    tamanho varchar(50),
    cod_cliente int unique,
    foreign key apartamento(pk_edf) references edificio(pk_cod),
    foreign key apartamento(cod_cliente) references cliente(cod_cliente)
);

create table cliente (
	cod_cliente int unique primary key,
    nome varchar(50),
    dt_nasc date
);

create table telefone (
	num varchar(7),
    cod_cliente int unique,
    foreign key telefone(cod_cliente) references cliente(cod_cliente)
);

create table pessoa_f(
	cpf int unique,
    cod_cliente int unique primary key,
    sexo char(1),
    foreign key pessoa_f(cod_cliente) references cliente(cod_cliente)
);

create table pessoa_j (
	cnpj int unique,
    cod_cliente int unique primary key,
    foreign key pessoa_j(cod_cliente) references cliente(cod_cliente)
);
