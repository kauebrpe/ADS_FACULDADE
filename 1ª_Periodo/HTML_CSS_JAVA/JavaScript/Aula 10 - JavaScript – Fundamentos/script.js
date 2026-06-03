/* Parte 1 */
// Estou criando as variaveis:
let nome;
let idade;
let cidade;
let email;
let senha;

// Pedindo os dados ao usuario:
nome = prompt("Digite seu nome:");
idade = Number(prompt("Digite sua idade:")); // Number = Converte para numero casonão dará nulo
cidade = prompt("Digite sua cidade:");
email = prompt("Digite seu email:");
senha = prompt("Digite sua senha:");

// Mostrando os dados no console:
console.log(nome);
console.log(idade);
console.log(cidade);
console.log(email);
console.log(senha);

/* Parte 2 */
// Verificando se o usuario e maior ou menor:
if (idade >= 18) {

    console.log("Cadastro permitido");

} else {

    console.log("Cadastro nao permitido");

}

/* Parte 3 */
// Verificando a quantidade de caracteres da senha:
if (senha.length >= 6) { // "length conta quantos caracteres existem dentro do texto"

    console.log("Senha valida");

} else {

    console.log("Erro: senha deve possuir no minimo 6 caracteres");

}

/* Parte 4 */
// Verificando a cidade do usuario:
if (cidade == "Recife" || cidade == "Olinda" || cidade == "Jaboatao") { // "||" = OU

    console.log("Cidade atendida");

} else {

    console.log("Servico indisponivel para sua regiao");

}

/* Parte 5 */
// MENU para o usuario escolher o plano:
let plano;

plano = Number(prompt("Escolha um plano:\n1 - Basico\n2 - Profissional\n3 - Premium"));

if (plano == 1) {

    console.log("Plano: Basico");
    console.log("Valor mensal: R$ 29,90");

}
else if (plano == 2) {

    console.log("Plano: Profissional");
    console.log("Valor mensal: R$ 59,90");

}
else if (plano == 3) {

    console.log("Plano: Premium");
    console.log("Valor mensal: R$ 99,90");

}
else {

    console.log("Plano invalido");

}

/* Parte 6 */
// O que e uma funcao: Uma funcao e um bloco de codigo que guarda dados para ser executado quando chamado
// Criando uma funcao "mostrarResumo":
function mostrarResumo() {

    console.log("Nome: " + nome);

    console.log("Cidade: " + cidade);

    if (plano == 1) {

        console.log("Plano escolhido: Basico");

    }
    else if (plano == 2) {

        console.log("Plano escolhido: Profissional");

    }
    else if (plano == 3) {

        console.log("Plano escolhido: Premium");

    }

}
// Chamando a funcao:
mostrarResumo();

/* Parte 7 */
//O que e uma array: e uma lista de valores ou que guarda valores
// Criando array's:
let especialidades = ["Cartao Digital", "Passe Estudantil", "Recarga Online", "Mobilidade Urbana", "Suporte Tecnico"]; // 0, 1, 2, 3, 4

console.log("Especialidades disponiveis:");

// Variavel para o for percorrer e contar:
let i;

// Percorrendo o array inteiro com o FOR:
for (i = 0; i < especialidades.length; i++) {

    console.log(especialidades[i]);

}

/* Parte 8 */
// Desafio Logico:

if (idade >= 18 && (cidade == "Recife" || cidade == "Olinda" || cidade == "Jaboatao") && senha.length >= 6) {

    console.log("Cadastro realizado com sucesso");

} else {

    console.log("Cadastro invalido");

}
