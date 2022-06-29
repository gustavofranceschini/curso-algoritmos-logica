Algoritmo "TROCO"

Var
      precoUn,troco,dinheiroRecebido,valor : real
      quantidade : inteiro
    

Inicio
         escreva("Preco unitario do produto: R$ ")
         leia(precoUn)
         escreva("Quantidade comprada: ")
         leia(quantidade)
         escreva("Dinheiro recebido: R$")
         leia(dinheiroRecebido)
         
         valor <- precoUn * quantidade
         
         se (dinheiroRecebido < valor) entao
           valor <- (valor - dinheiroRecebido)
           escreval("DINHEIRO INSUFICIENTE, FALTAM: R$ ",valor:4:2)
         senao
           troco <- (dinheiroRecebido - valor)
           escreval("TROCO : R$ ",troco:4:2)
         fimse

Fimalgoritmo