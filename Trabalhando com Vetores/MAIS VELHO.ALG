Algoritmo "MAIS VELHO"

Var
    n,i,maior:inteiro
    nome:vetor[0..9] de caractere
    idade:vetor[0..9] de inteiro
    posIdade:caractere
Inicio

       escreva("Quantas pessoas voce vai digitar? ")
       leia(n)

       para i de 0 ate n-1 faca
          escreval("Dados da",i+1,"a pessoa")
          escreva("Nome: ")
          leia(nome[i])
          escreva("Idade: ")
          leia(idade[i])
       fimpara

       maior <- 0
       para i de 0 ate n-1 faca
          se maior < idade[i] entao
           maior <- idade[i]
           posIdade <- nome[i]
          fimse
       fimpara
           escreval("PESSOA MAIS VELHA: ",posIdade)

Fimalgoritmo