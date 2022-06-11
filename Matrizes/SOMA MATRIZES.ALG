Algoritmo "SOMA MATRIZES"

Var

   m,n,i,j : inteiro
   matA,matB,matC:vetor[0..9,0..9] de inteiro
Inicio

      escreva("Quantas linhas vai ter cada matriz ? ")
      leia(m)
      escreva("Quantas colunas vai ter cada matriz ? ")
      leia(n)
      
      escreval("Digite os valores da matriz A:")
      para i de 0 ate m-1 faca
        para j de 0 ate n-1 faca
           escreva("Elemento [",i,",",j,"]: ")
           leia(matA[i,j])
        fimpara
      fimpara
      
      escreval("Digite os valores da matriz B:")
      para i de 0 ate m-1 faca
        para j de 0 ate n-1 faca
           escreva("Elemento [",i,",",j,"]: ")
           leia(matB[i,j])
        fimpara
      fimpara
      
      matC[i,j] <- 0
      escreval("MATRIZ SOMA:")
      para i de 0 ate m-1 faca
         para j de 0 ate n-1 faca
            matC[i,j] <- matA[i,j] + matB[i,j]
            escreva(matC[i,j])
         fimpara
         escreval
      fimpara

Fimalgoritmo