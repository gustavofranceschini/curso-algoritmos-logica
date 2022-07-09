n = int(input("Quantos numeros voce vai digitar? "))

vet: [int] = [0 for x in range(n)]

for i in range (0,n):
    vet[i] = int(input("Digite um numero: "))

print()
print("NUMEROS DIGITADOS:")
for i in range(0,n):
    print(vet[i])