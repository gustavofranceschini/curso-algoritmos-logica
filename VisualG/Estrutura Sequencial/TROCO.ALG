Algoritmo "TROCO"

Var
    preco,dinheiro,troco,total:real
    quantidade : inteiro


Inicio
      escreva("Preço unitario do produto: R$ ")
      leia (preco)
      escreva("Quantidade: ")
      leia(quantidade)
      escreva("Dinheiro recebido do cliente: ")
      leia(dinheiro)

      total <- quantidade * preco
      troco <- dinheiro-total
      
      escreval("Total de R$ ",total:8:2)
      escreval("Troco de R$ ",troco:8:2)
      



Fimalgoritmo