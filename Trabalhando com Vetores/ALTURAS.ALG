Algoritmo "ALTURAS"

Var
   n,i,cont : inteiro
   nome:vetor[0..5] de caractere
   idade:vetor[0..5] de inteiro
   altura:vetor[0..5] de real
   soma,media,porcentagem: real
Inicio

      escreva("Quantas pessoas serao digitadas? ")
      leia(n)
      
      para i de 0 ate n-1 faca
        escreval("Dados da ",i+1,"a pessoa")
        escreva("Nome: ")
        leia(nome[i])
        escreva("Idade: ")
        leia(idade[i])
        escreva("Altura: ")
        leia(altura[i])
      fimpara
      
      soma <- 0
      para i de 0 ate n-1 faca
        soma <- soma + altura[i]
      fimpara
      media <- soma / n
      escreval
      escreval("Altura média: ",media:2:2)

      
      cont <- 0
      para i de 0 ate n-1 faca
         se idade[i] < 16 entao
           cont <- cont +1
         fimse
      fimpara
      
      porcentagem <- (cont * 100) / n
      escreval("Pessoas com menos de 16 anos: ",porcentagem:2:1,"%")

      
      para i de 0 ate n-1 faca
         se idade[1] < 16 entao
           escreval(nome[i])
         fimse
      fimpara
      
      
      
Fimalgoritmo