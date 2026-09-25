import calculadora

print("1 - Soma\n 2 - Subtração\n 3 - Multiplicação\n 4 - Divisão\n 5 - Sair")
opcao = int(input("Escolha uma opção: "))

n1 = float(input("Digite o primeiro número: "))
n2 = float(input("Digite o segundo número: "))

if opcao == 1:
    resultado = calculadora.soma(n1, n2)
    print("O resultado da soma é:", resultado)
elif opcao == 2:
    resultado = calculadora.subtracao(n1, n2)
    print("O resultado da subtração é:", resultado)
elif opcao == 3:
    resultado = calculadora.multiplicacao(n1, n2)
    print("O resultado da multiplicação é:", resultado)
elif opcao == 4:
    resultado = calculadora.divisao(n1, n2)
    print("O resultado da divisão é:", resultado)
elif opcao == 5:
    print("Saindo...")
