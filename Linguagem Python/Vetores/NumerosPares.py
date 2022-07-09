n = int(input("Quantos numeros voce vai digitar? "))

vet: [float] = [0 for x in range(n)]

for i in range(0,n):
    vet[i] = float(input("Digite um numero: "))

print()
maiorValor = vet[0]
posMaior = 0
for i in range(1,n):
    if vet[i] > maiorValor:
        maiorValor = vet[i]
        posMaior = i

print(f"MAIOR VALOR = {maiorValor:.1f}")
print(f"POSICAO DO MAIOR VALOR = {posMaior}")