x = int(input("Digite um numero inteiro: "))

soma = 0;
while x != 0:
    if x % 2 != 0:
        x = x + 1
    soma = 5*x + 20
    print("SOMA = ",soma)
    x = int(input("Digite um numero inteiro: "))