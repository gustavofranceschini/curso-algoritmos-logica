v1 = int(input("Primeiro valor: "))
v2 = int(input("Segundo valor: "))
v3 = int(input("Terceiro valor: "))

if v1 < v2 and v1 < v3:
    menor = v1
elif v2 < v3:
    menor = v2
else:
    menor = v3
print("MENOR = ",menor)