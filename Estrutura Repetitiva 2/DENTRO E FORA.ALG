Algoritmo "DENTRO E FORA"


Var
   x,i,n,cont1,cont2 : inteiro


Inicio

      escreva("Quantos numeros voce vai digitar: ")
      leia(n)
      
      cont1 <- 0
      cont2 <- 0
      
      para i de 1 ate n faca
      
        escreva("Digite um numero: ")
        leia(x)
        
        se (x >=10) e (x <= 20) entao
          cont1 <- cont1 + 1
        senao
          cont2 <- cont2 + 1
        fimse
        
      fimpara
      
      escreval("ESTÃO DENTRO: ",cont1)
      escreval("ESTÃO FORA: ",cont2)

Fimalgoritmo