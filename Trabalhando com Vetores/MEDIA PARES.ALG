Algoritmo "MEDIA PARES"

Var
    n,i,cont:inteiro
    mediaPar,somaPar:real
    vet:vetor[0..9] de inteiro

Inicio

     escreva("Quantos elementos vai ter o vetor? ")
     leia(n)

     para i de 0 ate n-1 faca
        escreva("Digite um numero: ")
        leia(vet[i])
     fimpara

     somaPar <- 0
     mediaPar <- 0
     cont <- 0
     para i de 0 ate n-1 faca
        se vet[i]%2=0 entao
         cont <- cont + 1
         somaPar <- somaPar + vet[i]
        fimse
     fimpara
     mediaPar <- somaPar / cont


     se cont = 0 entao
      escreval("NENHUM NUMERO PAR")
     senao
      escreval("MEDIA DOS PARES = ",mediaPar:2:1)
     fimse



Fimalgoritmo