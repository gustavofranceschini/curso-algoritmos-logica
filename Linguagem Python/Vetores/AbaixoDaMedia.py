n = int(input("Quantos elementos vai ter o vetor? "))

vet: [int] = [0 for x in range(n)]

for i in range(0,n):
    vet[i] = int(input("Digite um numero: "))

cont = 0
soma = 0
for i in range(0,n):
    if vet[i] % 2 == 0:
        cont = cont + 1
        soma = soma + vet[i]

if cont == 0 :
    print("NENHUM NUMERO PAR")
else:
    media = soma / cont
    print(f"MEDIA DOS PARES = {media:.1f}")