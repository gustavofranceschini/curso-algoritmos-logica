Algoritmo "COMBUSTIVEL"

Var

    alcool,gasolina,diesel,opcao : inteiro
    

Inicio

     escreval("Avalia��o de combustivel")
     escreval("Digite 1 - Alcool")
     escreval("Digite 2 - Gasolina")
     escreval("Digite 3 - Diesel")
     escreval("Digite 4 - Nenhuma das op��es")
     escreval
     
     escreva("Qual op�ao deseja: ")
     leia(opcao)
     
     enquanto opcao <> 4 faca
       se opcao = 1 entao
        alcool <- alcool + 1
       senao
        se opcao = 2 entao
         gasolina <- gasolina + 1
        senao
         se opcao = 3 entao
          diesel <- diesel + 1
          fimse
        fimse
       fimse
       
       escreva("Qual op�ao deseja: ")
       leia(opcao)
      
     fimenquanto
     
     escreval("Alcool: ",alcool)
     escreval("Gasolina: ",gasolina)
     escreval("Diesel: ",diesel)
     escreval
     escreval("Muito Obrigado")


Fimalgoritmo