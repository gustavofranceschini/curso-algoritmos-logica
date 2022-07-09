codigo = int(input("Codigo do produto comprado: "))
qnt = int(input("Quantidade comprada: "))

if codigo == 1:
    valorTotal = qnt * 5.00
elif codigo == 2:
    valorTotal = qnt * 3.50
elif codigo == 3:
    valorTotal = qnt * 4.80
elif codigo == 4:
    valorTotal = qnt * 8.90
elif codigo == 5:
    valorTotal = qnt * 7.32
else:
    print("Código invalido..")

print(f"Valor a pagar: {valorTotal:.2f}")