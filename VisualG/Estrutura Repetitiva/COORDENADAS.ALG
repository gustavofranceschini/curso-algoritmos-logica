Algoritmo "COORDENADAS"

Var
     x,y : real


Inicio

      escreval("Digite as coordenadas X e Y")
      escreva("X: ")
      leia(x)
      escreva("Y: ")
      leia(y)

      enquanto (X<>0)e(Y<>0)faca
      
        se (x>0)e(y>0) entao
          escreval("Q1")
        senao
         se (x<0) e (y>0) entao
          escreval("Q2")
         senao
          se (x<0) e (y<0) entao
           escreval("Q3")
          senao
           se (x>0) e (y<0) entao
           escreval("Q4")
           senao
           fimse
          fimse
         fimse
        fimse
        
        escreval("Digite as coordenadas X e Y novamente")
        escreva("X: ")
        leia(x)
        escreva("Y: ")
        leia(y)
        
      fimenquanto
      
      escreval("Coordenadas nulas !!")

Fimalgoritmo