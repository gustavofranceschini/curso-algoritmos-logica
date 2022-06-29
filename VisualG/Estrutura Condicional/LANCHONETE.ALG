Algoritmo "LANCHONETE"

Var

     codigo,quantidade : inteiro
     preco : real

Inicio

      escreva("Digite o código do produto: ")
      leia(codigo)
      escreva("Digite a quantiade comprada: ")
      leia(quantidade)
      
      escolha codigo
      caso 1
      preco <- quantidade * 5.00
      caso 2
      preco <- quantidade * 3.50
      caso 3
      preco <- quantidade * 4.80
      caso 4
      preco <- quantidade * 8.90
      caso 5
      preco <- quantidade * 7.32
      fimescolha
      
      escreval("Preço total: R$ ",preco:4:2)


      
Fimalgoritmo