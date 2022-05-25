Algoritmo "MEDIDAS"

Var
     a,b,c,areaTriangulo,areaTrapezio,areaQuadrado :real


Inicio

    escreva ("Digite a medide do lado A: ")
    leia(a)
    escreva ("Digite a medide do lado B: ")
    leia(b)
    escreva ("Digite a medide do lado C: ")
    leia(c)
    
    areaQuadrado <- a*a
    areaTriangulo <- (a*b)/2.0
    areaTrapezio <- (a+b)*c/2
    
    escreval("Area quadrado: ",areaQuadrado:8:4)
    escreval("Area triangulo: ",areaTriangulo:8:4)
    escreval("Area trapézio: ",areaTrapezio:8:4)


Fimalgoritmo