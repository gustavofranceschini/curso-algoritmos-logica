Algoritmo "ABAIXO DA MEDIA"

Var
    n,i:inteiro
    media,soma:real
    vet:vetor[0..9] de real
Inicio

        escreva("Quantos elementos vai ter o vetor? ")
        leia(n)


        para i de 0 ate n-1 faca
           escreva("Digite um numero: ")
           leia(vet[i])
        fimpara

        escreval
        soma <- 0
        media <- 0
        para i de 0 ate n-1 faca
           soma <- soma + vet[i]
        fimpara
        media <- soma / n
        escreval("MEDIA DO VETOR = ",media:2:3)

        escreval("ELEMENTOS ABAIXO DA MEDIA:")
        para i de 0 ate n-1 faca
         se vet[i] < media entao
          escreval(vet[i])
         fimse
        fimpara

Fimalgoritmo