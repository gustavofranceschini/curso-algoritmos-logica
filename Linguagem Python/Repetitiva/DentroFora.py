n = int(input("Quantos numeros voce vai digitar? "))
n = int(input("Quantos numeros voce vai digitar? "))

for i in range(1,n+1):
    x = int(input("Digite um numero: "))
    if x % 2 == 0 and x > 0:
        print("PAR POSITIVO")
    elif x % 2 == 0 and x < 0:
        print("PAR NEGATIVO")
    elif x % 2 != 0 and x > 0:
        print("IMPAR POSITiVO")
    elif x % 2 != 0 and x < 0:
        print("IMPAR NEGATIVO")
    else:
        print("NULO")