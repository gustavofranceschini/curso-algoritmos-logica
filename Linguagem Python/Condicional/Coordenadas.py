print("Digite as idades:")
idade = int(input())

cont = 0;
soma = 0;
if idade <= 0:
    print("IMPOSSIVEL CALCULAR")
else:
    while idade > 0:
        cont = cont  + 1
        soma = soma + idade
        idade = int(input())
    media = soma / cont
    print(f"MEDIA = {media:.2f}")