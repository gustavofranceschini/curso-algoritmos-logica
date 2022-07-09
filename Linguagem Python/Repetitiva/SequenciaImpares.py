n = int(input("Quantos numeros voce vai digitar? "))

contDentro = 0
contFora = 0
for i in range(1, n + 1):
    x = int(input("Digite um numero: "))
    if x >= 10 and x <= 20:
        contDentro = contDentro + 1
    else:
        contFora = contFora + 1

print(f"{contDentro} DENTRO")
print(f"{contFora} FORA")