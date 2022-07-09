precoUn = float(input("Preco unitario do produto: "))
qnt = int(input("Quantidade comprada: "))
dinheiroRecebido = float(input("Dinheiro recebido: "))

valorTotal = precoUn * qnt

if dinheiroRecebido > valorTotal:
    troco = dinheiroRecebido - valorTotal
    print(f"TROCO = {troco:.2f}")
else:
    troco = valorTotal - dinheiroRecebido
    print(f"Dinheiro insuficiente.. Faltam {troco:.2f} reais")