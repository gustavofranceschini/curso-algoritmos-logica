n = int(input("Qual a ordem da matriz? "))

mat: [[float]]=[[0 for x in range(n)]for x in range(n)]

for i in range(0,n):
    for j in range(0,n):
        mat[i][j] = float(input(f"Elemento [{i},{j}]: "))

print()
soma = 0
for i in range(0,n):
    for j in range(0,n):
        if mat[i][j] > 0:
            soma = soma + mat[i][j]
print(f"SOMA DOS POSITIVOS = {soma:.1f}")
print()

linha = int(input("Escola uma linha: "))
print("LINHA ESCOLHIDA: ",end="")
for j in range(0,n):
    print(f"{mat[linha][j]:.1f} ",end="")

print()
print()

coluna = int(input("Escola uma coluna: "))
print("COLUNA ESCOLHIDA: ",end="")
for i in range(0,n):
    print(f"{mat[i][coluna]:.1f} ",end="")

print()
print()

print("DIAGONAL PRINCIPAL: ",end="")
for i in range(0,n):
    for j in range(0,n):
        if j == i:
            print(f"{mat[i][j]:.1f} ",end="")

print()
print()

for i in range(0,n):
    for j in range(0,n):
        if mat[i][j] < 0:
            mat[i][j] = mat[i][j] ** 2

print("MATRIZ ALTERADA: ")
for i in range(0,n):
    for j in range(0,n):
        print(f"{mat[i][j]:.1f} ",end="")
    print()
