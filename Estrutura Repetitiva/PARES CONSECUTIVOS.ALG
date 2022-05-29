Algoritmo "PARES CONSECUTIVOS"

Var

    x : inteiro



Inicio

       escreva("Digite um numero inteiro: ")
       leia(x)
       
       enquanto x<>0 faca
       
         se x % 2 <> 0 entao
           x <- x+1
           x <- (x)+(x+2)+(x+4)+(x+6)+(x+8)
           escreval(x)
         senao
           x <- (x)+(x+2)+(x+4)+(x+6)+(x+8)
           escreval(x)
         fimse
         
         escreva("Digite um numero inteiro: ")
         leia(x)
         
        fimenquanto


Fimalgoritmo