Algoritmo "TEMPERATURA"

Var
    C,F,temperaturaF,temperaturaC : real
    escala : caractere

Inicio

    escreva("Voce vai digitar a temperatura em qual escala (C/F)? ")
    leia(escala)

    se (escala = "F") entao
     escreval("Digite a temperatura em Fahrenheit: ")
     leia(temperaturaF)
     C <- 5/9*(temperaturaF-32)
     escreval("Temperatura equivalente em Celsius: ",C:4:2)
    senao
     se (escala = "C") entao
      escreva("Digite a temperatura em Celsius: ")
      leia(temperaturaC)
      F <- 1.8*temperaturaC + 32
      escreval("Temperatura equivalente em Fahrenheit: ",F:4:2)
      fimse
    fimse

      
Fimalgoritmo