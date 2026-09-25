# Função usando print:
# Faz a soma dos números e mostra o resultado diretamente na tela.
# O valor não é guardado para ser usado depois.
def soma_numero():
    num1 = float(input("Digite o primeiro número: "))
    num2 = float(input("Digite o segundo número: "))
    soma = num1 + num2
    print("A soma dos números é:", soma)

soma_numero()

# Função usando return:
# Faz a soma dos números e devolve o resultado.
# O valor pode ser guardado em uma variável para ser usado depois.
def soma_numero():
    num1 = float(input("Digite o primeiro número: "))
    num2 = float(input("Digite o segundo número: "))
    soma = num1 + num2
    return soma

resultado = soma_numero()
print("A soma dos números é:", resultado)


#Funcao Enumerate():

lista_resultado = []
def posicoes_iniciais(lista, letra="a"):
    for indice, palavra in enumerate(lista):
        if palavra.startswith(letra):
            lista_resultado.append(indice)
    return lista_resultado

#Fora da funcao:

lista = []
for i in range(5):
    info = input("Digite um nome: ")
    while info == "":
        print("Nome não pode ser vazio")
        info = input("Digite um nome: ")
    else:
        lista.append(info)

print(lista)
print(posicoes_iniciais(lista))