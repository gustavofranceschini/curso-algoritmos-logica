n1 = float(input("Digite a primeira nota: "))
n2 = float(input("Digite a segunda nota: "))
notaFinal = n1+n2
print(f"NOTA FINAL = {notaFinal:.1f}")

if notaFinal >= 60.0:
    print("APROVADO")
else:
    print("REPROVADO")