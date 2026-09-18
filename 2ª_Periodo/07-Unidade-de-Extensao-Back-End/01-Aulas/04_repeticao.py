# Bloco = Precisa ter instrucoes dentro da sua estrutura = (While, For, If, Funcoes) = Sao blocos
# Para + variavel + no + alcance + (0,10,2) + faca

for i in range (1, 10, 2): # Inicio, Final, Incremento
    print(i)

#Estrurura de repeticao = While Loop Infinito

while True:
    calcular = input("1 - somar ou 2 - subtrair ")
    if calcular == "1":
        n1= int(input("Informe o primeiro numero: "))
        n2= int(input("Informe o segundo numero: "))
        print(f"A soma de {n1} e {n2} é {n1 + n2}")
        break
    elif calcular == "2":
        n1= int(input("Informe o primeiro numero: "))
        n2= int(input("Informe o segundo numero: "))
        print(f"A subtracao de {n1} e {n2} é {n1 - n2}")
        break
    else:
        print("Opcao invalida, tente novamente.")
        break

#Manipulacao de Strings
texto = '''
        Oi Oi, tudo bem?
        Oi Oi, tudo bem?
        Oi Oi, tudo bem?
        Oi Oi, tudo bem?
        '''

texto = 'texto exemplo'
