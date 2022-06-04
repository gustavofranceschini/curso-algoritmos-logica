Algoritmo "DIVISAO"

Var
      n,i : inteiro
      divisao,num,den : real


Inicio


     escreva("Quantos casos voce vai digitar: ")
     leia(n)
     
     para i de 1 ate n faca
     
      escreva("Entre com o numerador: ")
      leia(num)
      escreva("Entre com o denominador: ")
      leia(den)
      
      se den=0 entao
       escreval("Divisão impossivel")
      senao
      divisao <- num/den
       escreval("DIVISÃO: ",divisao:2:2)
      fimse
     
     fimpara


Fimalgoritmo