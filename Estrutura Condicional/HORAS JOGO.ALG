Algoritmo "HORAS JOGO"

Var
     horaInicial,horaFinal,duracao : inteiro

Inicio

       escreva("Digite a hora inicial do jogo: ")
       leia(horaInicial)
       escreva("Digite a hora final do jogo: ")
       leia(horaFinal)
       
       se  (horaInicial < horaFinal) entao
        duracao <- horaFinal - horaInicial
       senao
        duracao <- (24-horaInicial)+horaFinal
       fimse
       
       escreval("Duracao do jogo: ",duracao)

Fimalgoritmo