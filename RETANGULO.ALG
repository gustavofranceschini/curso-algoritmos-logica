Algoritmo "Retangulo"

Var
      base,altura,area,perimetro,diagonal,expBase,expAltura : real


Inicio

       escreva("A base do retangulo: ")
       leia(base)
       escreva("A altura do retangulo: ")
       leia(altura)

       area <- base*altura
       perimetro <- (2*base)+(2*altura)
       expBase <- exp(base,2)
       expAltura <- exp(altura,2)
       diagonal <-raizq(expBase+expAltura)

       escreval("A area do retangulo é igual a: ",area:8:4)
       escreval("O perimetro do retangulo é igual a: ",perimetro:8:4)
       escreval("A diagonal do retangulo é igual a: ",diagonal:8:4)

Fimalgoritmo