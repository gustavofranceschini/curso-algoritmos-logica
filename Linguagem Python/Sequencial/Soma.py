precoUn = float(input("Preco unitario do produto: "))
qnt = int(input("Quantidade comprada: "))
dinheiroRecebido = float(input("Dinheiro recebido: "))

precoTotal = precoUn * qnt
troco = dinheiroRecebido - precoTotal
print(f"TROCO = {troco:.2f}")