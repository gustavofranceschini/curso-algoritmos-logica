n = int(input("Quantos casos de teste serao digitados? "))

totalCoelho = 0
totalRato = 0
totalSapo = 0
totalCobaia = 0
for i in range(1,n+1):
    qnt = int(input("Quantidade de cobaias: "))
    tipoCobaia = input("Tipo de cobaia: ")
    while tipoCobaia != 'C' and tipoCobaia != 'S' and tipoCobaia != 'R':
        print()
        print("Tipo de cobaia incorreta")
        tipoCobaia = input("Digite (C/R/S): ")
    if tipoCobaia == 'C':
        totalCoelho = qnt + totalCoelho
    elif tipoCobaia == 'R':
        totalRato= qnt + totalRato
    else:
        totalSapo = qnt + totalSapo

print()
totalCobaia = totalRato + totalSapo + totalCoelho
porcCoelho = (totalCoelho / totalCobaia) * 100
porcRato = (totalRato / totalCobaia) * 100
porcSapo = (totalSapo / totalCobaia) * 100
print("RELATORIO FINAL:")
print(f"TOTAL: {totalCobaia} cobaias")
print(f"Total de coelhos: {totalCoelho}")
print(f"Total de ratos: {totalRato}")
print(f"Total de sapos: {totalSapo}")
print(f"Percentual de coelhos: {porcCoelho:.2f}%")
print(f"Percentual de ratos: {porcRato:.2f}%")
print(f"Percentual de sapos: {porcSapo:.2f}%")
