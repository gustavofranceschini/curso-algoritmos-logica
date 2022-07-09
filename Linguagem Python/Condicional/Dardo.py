temperatura = input("Voce vai digitar a temperatura em qual escala (C/F)? ")

if temperatura == 'C':
    c = float(input("Digite a temperatura em Celsius: "))
    f = (c * 9/5) + 32
    print(f"Temperatura equivalente em Fahrenheit: {f:.2f}")
else:
    f = float(input("Digite a temperatura em Fahrenheit: "))
    c = (f -32) * 5/9
    print(f"Temperatura equivalente em Celsius: {c:.2f}")