n = int(input("Quantos alunos serao digitados? "))

nome: [int] = [0 for x in range(n)]
n1: [float] = [0 for x in range(n)]
n2: [float] = [0 for x in range(n)]
soma: [float] = [0 for x in range(n)]
media: [float] = [0 for x in range(n)]

for i in range(0,n):
    print(f"Digite o nome, a primeira e a segunda nota do {i+1}o aluno:")
    nome[i] = input()
    n1[i] = float(input())
    n2[i] = float(input())


for i in range(0,n):
    soma[i] = n1[i] + n2[i]
    media[i] = soma[i] / 2

print("Alunos aprovados:")
for i in range(0,n):
    if media[i] >= 6.0:
        print(nome[i])
