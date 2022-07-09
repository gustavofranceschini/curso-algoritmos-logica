n = int(input("Quantos valores vai ter cada vetor? "))

vetA: [int] = [0 for x in range(n)]
vetB: [int] = [0 for x in range(n)]
vetC: [int] = [0 for x in range(n)]

print("Digite os valores do vetor A:")
for i in range(0,n):
    vetA[i] = float(input())

print("Digite os valores do vetor B:")
for i in range(0,n):
    vetB[i] = float(input())

for i in range(0,n):
    vetC[i] = vetA[i] + vetB[i]

print("VETOR RESULTANTE:")
for i in range(0,n):
    print(vetC[i])