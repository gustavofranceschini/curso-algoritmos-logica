codigo = int(input("Informe um codigo (1,2,3) ou 4 para parar: "))
alcool = 0
gasolina = 0
diesel = 0
while codigo != 4:
    if codigo == 1:
        alcool = alcool + 1
    elif codigo == 2:
        gasolina = gasolina + 1
    elif codigo == 3:
        diesel = diesel + 1
    else:
        print("Código invalido..")
    codigo = int(input("Informe um codigo (1,2,3) ou 4 para parar: "))

print("MUITO OBRIGADO")
print("ALCOOL = ",alcool)
print("GASOLINA = ",gasolina)
print("DIESEL = ",diesel)