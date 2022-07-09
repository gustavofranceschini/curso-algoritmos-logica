qnt = int(input("Digite a quantidade de minutos: "))

if qnt <= 100:
    valorTotal = 50.00
else:
    valorTotal = ((qnt - 100) * 2.00) + 50.00

print(f"Valor a pagar: R$ {valorTotal:.2f}")