n = int(input("Quantas pessoas voce vai digitar? "))

nome: [str] = [0 for x in range(n)]
idade: [int] = [0 for x in range(n)]

for i in range(0,n):
    print(f"Dados da {i+1}a pessoa:")
    nome[i] = input("Nome: ")
    idade[i] = int(input("Idade: "))

maisVelho = idade[0]
posMaior = 0
for i in range(1,n):
    if idade[i] > maisVelho:
        maisVelho = idade[i]
        posMaior = i

print(f"PESSOA MAIS VELHA: {nome[posMaior]}")