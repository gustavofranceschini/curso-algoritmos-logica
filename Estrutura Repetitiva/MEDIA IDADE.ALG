Algoritmo "MEDIA IDADE"

Var

     idade,soma,cont : inteiro
     media : real

Inicio

      cont <- 0
      soma <- 0

      escreval("Digite as idades")
      leia(idade)
      
      enquanto idade >=0 faca

       soma <- soma+idade
       cont <- cont + 1
       
       leia(idade)
       
      fimenquanto
      
      se cont =0 entao
        escreval("IMPOSSIVEL CALCULAR !!")
      senao
        media <- soma / cont
        escreval("MEDIA = ",media:4:2)
      fimse
      



Fimalgoritmo
