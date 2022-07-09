print("Digite dois numeros:")
x = int(input())
y = int(input())

while x != y:
    if x < y:
        print("CRESCENTE!")
    else:
        print("DESCRESCENTE!")
    print("DIGITE OUTROS DOIS NUMEROS:")
    x = int(input())
    y = int(input())