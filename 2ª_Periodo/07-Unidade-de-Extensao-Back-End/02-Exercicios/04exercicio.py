import os

nome = "1"
idade = 0
salario = -1


while (len(nome) < 3):
    os.system("cls") # Limpa a tela (funciona em Windows)
    print("O nome deve ter no mínimo 3 caracteres")
    nome = str(input("Digite seu nome: "))

while (idade <= 0) or (idade > 150):
    os.system("cls")
    print("A idade deve ser entre 1 e 150")
    idade = int(input("Informe sua idade: "))

while (salario < 0):
    os.system("cls")
    print("Salário não pode ser negativo")
    salario = float(input("Informe seu salário: "))

os.system("cls")
print("Nome:", nome)
print("Idade:", idade)
print("Salário:", salario)