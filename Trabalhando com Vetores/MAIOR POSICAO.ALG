Algoritmo "MAIOR POSICAO"

Var
    n,i,posMaior:inteiro
    vet:vetor[0..9] de real
    maior:real
Inicio

      escreva("Quanto numeros voce vai digitar? ")
      leia(n)

      para i de 0 ate n-1 faca
         escreva("Digite um numero: ")
         leia(vet[i])
      fimpara

      maior <- 0
      posMaior <- 0

      para i de 0 ate n-1 faca
         se maior < vet[i] entao
         maior <- vet[i]
         posMaior <- i
         fimse
      fimpara

      escreval("MAIOR = ",maior:2:1)
      escreval("POSICAO DO MAIOR VALOR = ",posMaior)

Fimalgoritmo