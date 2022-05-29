Algoritmo "NOTAS VALIDAS"

Var

  nota1,nota2,media : real


Inicio


      escreva("Digite a primeira nota: ")
      leia(nota1)
      
      enquanto (nota1 <0) ou (nota1 >10) faca
        escreva("Valor invalido!! Digite a primeira nota novamente: ")
        leia(nota1)
      fimenquanto
      
      
      escreva("Digite a segunda nota: ")
      leia(nota2)
      
      enquanto (nota2 <0) ou (nota2 >10) faca
        escreva("Valor invalido!! Digite a segunda nota novamente: ")
        leia(nota2)
      fimenquanto
      
      media <- (nota1 + nota2) / 2.00
      
      escreval("MEDIA = ",media:4:2)
      


Fimalgoritmo