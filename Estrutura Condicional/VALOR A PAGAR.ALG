Algoritmo "VALOR A PAGAR"

Var
    valor : real
    qntMin : inteiro
    

Inicio

      escreva("Digite a quantidade de minutos: ")
      leia(qntMin)
      
      se qntMin <=100 entao
        valor <- 50.00
      senao
        valor <- ((qntMin-100)*2) + 50.00
      fimse
     
      escreval("Valor a pagar: R$ ",valor:4:2)

Fimalgoritmo