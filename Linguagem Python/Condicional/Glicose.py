print("Digite as tres distancias: ")
d1 = float(input())
d2 = float(input())
d3 = float(input())

if d1 > d2 and d1 > d3:
    maior = d1
elif d2 > d3:
    maior = d2
else:
    maior = d3

print(f"MAIOR DISTANCIA = {maior:.2f}")