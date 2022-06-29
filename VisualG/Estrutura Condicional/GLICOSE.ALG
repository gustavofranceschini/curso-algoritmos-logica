Algoritmo "GLICOSE"

Var
    quantidade : real
    classificacao1,classificacao2,classificacao3 : caractere

Inicio

      escreva("Digite a quantidade de glicose: ")
      leia(quantidade)
      
      se (quantidade <= 100) entao
        classificacao1 <- "Normal"
         escreval(classificacao1)
      senao
        se (quantidade > 100) e (quantidade <= 140) entao
         classificacao2 <- "Elevado"
          escreval(classificacao2)
        senao
          classificacao3 <- "Diabetes"
           escreval(classificacao3)
        fimse
      fimse
      
      
Fimalgoritmo