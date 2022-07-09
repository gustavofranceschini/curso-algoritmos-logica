n = int(input("Quantos casos voce vai digitar? "))

for i in range(1,n+1):
    num = float(input("Ente com o numerador: "))
    den = float(input("Entre com o denominador: "))
    if den == 0:
        print("DIVISAO IMPOSSIVEL")
    else:
        divisao = num / den
        print(f"DIVISAO = {divisao:.2f}")