horaInicial = int(input("Hora inicial: "))
horaFinal = int(input("Hora final: "))

if horaInicial > horaFinal:
    duracao = (24 - horaInicial) + horaFinal
elif horaFinal > horaInicial:
    duracao = horaFinal - horaInicial
else:
    duracao = 24

print(f"O jogo durou {duracao} horas(s)")