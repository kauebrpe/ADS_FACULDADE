# Jogo da velha = Comentário
# Aula 1 - DDL e DML

# Criação de banco de dados
create database Biblioteca;
use Biblioteca;

# Criação da tabela
create table Livros (
	id int auto_increment primary key,
	titulo varchar(100),
	autor varchar(100),
	genero varchar(30),
	ISBN varchar(14) unique key,
	data_arquivado date,
	data_livro date
);

create table Aluguel(
	nome_cliente varchar(100),
    cpf varchar(11) unique key,
    num_celular varchar(10),
    ISBN_Livro varchar(14),
    data_alugado date,
    data_limite date,
    foreign key Aluguel(ISBN_Livro) references Livros(ISBN)
);

# Alterar Tabela
alter table Livros add column ISBN varchar(14) unique key after genero;


drop table Livros;

insert into Livros values
	(1, 'O Estranho Misterioso', 'Mark Twain', 'Ficção', '978-8585554125', '2026-03-04', '2012-01-01'),
    (2, 'A Divina Comédia - Inferno', 'Dante Alighieri', 'Ficção', '978-6550970321', '2026-03-04', '2020-03-18'),
    (3, 'A Divina Comédia - Purgatório', 'Dante Alighieri', 'Ficção', '978-6550970338', '2026-03-04', '2020-03-23'),
    (4, 'A Divina Comédia - Paraíso', 'Dante Alighieri', 'Ficção', '978-6550970345', '2026-03-04', '2020-03-25'),
    (5, 'O Pequeno Príncipe', 'Antoine de Saint-Exupéry', 'Fábula', '978-6584956247', '2026-04-09', '2013-08-15')
;


insert into Aluguel values 
	('Horácio', '12345678910', '8191234567', '978-8585554125', '2026-04-12', '2026-05-12'),
    ('Gabriela', '14759230401', '8199987733', '978-6584956247', '2026-04-10', '2026-05-10'),
    ('Karla', '01987654321', '8197654321', '978-6550970321', '2026-04-13', '2026-05-13');


# Acessar tabela
select * from Livros;
select * from Aluguel;

select * from Livros where autor = 'Dante Alighieri';
select titulo from Livros;
select nome_cliente, num_celular, cpf from Aluguel;
select id, titulo, ISBN from Livros where genero = 'Ficção';

# Mostra todas as tabelas
show full tables;
