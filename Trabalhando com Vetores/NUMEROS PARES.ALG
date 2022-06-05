Algoritmo "NUMEROS PARES"

Var
   n,i,cont : inteiro
   vet:vetor[0..9] de inteiro
Inicio

       escreva("Quantos numeros voce vai digitar? ")
       leia(n)
       
       
       para i de 0 ate n-1 faca
           escreva("Digite um numero: ")
           leia(vet[i])
       fimpara
       
       escreval("NUMEROS PARES:")
       
       para i de 0 ate n-1 faca
           se vet[i]%2=0 entao
            escreva(vet[i]," ")
           fimse
       fimpara
       
       escreval
       
       cont <- 0
       para i de 0 ate n-1 faca
           se vet[i]%2=0 entao
            cont <- cont +1
           fimse
       fimpara
       
       escreval("QUANTIDADE DE PARES = ",cont)
      
      
      
Fimalgoritmo