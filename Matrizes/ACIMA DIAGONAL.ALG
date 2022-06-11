Algoritmo "ACIMA DIAGONAL"

Var

   n,i,j,soma:inteiro
   matA,matB:vetor[0..9,0..9] de inteiro
   
Inicio

   escreva("Qual a ordem da matriz? ")
   leia(n)
   
   para i de 0 ate n-1 faca
      para j de 0 ate n-1 faca
         escreva("Elemento [",i,",",j,"]: ")
         leia(matA[i,j])
      fimpara
   fimpara
   
   soma <- 0
   para i de 0 ate n-1 faca
     para j de 0 ate n-1 faca
       se j > i entao
        soma <- soma + matA[i,j]
       fimse
     fimpara
   fimpara
   
   escreval("SOMA = ",soma)

Fimalgoritmo