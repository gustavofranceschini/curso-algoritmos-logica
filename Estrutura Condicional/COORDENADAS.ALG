Algoritmo "COORDENADAS"

Var
     x,y:real

Inicio

        escreval("Leia as coordenadas X e Y")
        escreva("X: ")
        leia(x)
        escreva("Y: ")
        leia(y)
        escreval
        
        se (x>0) e (y>0) entao
         escreval("Quadrante 1")
        senao
         se (x<0) e (y>0) entao
          escreval("Quadrante 2")
         senao
          se (x<0) e (x<0) entao
           escreval("Quadrante 3")
          senao
           se (x>0) e (y<0) entao
            escreval("Quadrante 4")
           senao
            se (x=0) e (y=0) entao
             escreval("Origem")
            senao
             se (x=0) e (y>0) ou (y<0) entao
              escreval("Eixo Y")
             senao
              se (y=0) e (x>0) ou (x<0) entao
               escreval("Eixo X")
              fimse
             fimse
            fimse
           fimse
          fimse
         fimse
        fimse
        

Fimalgoritmo