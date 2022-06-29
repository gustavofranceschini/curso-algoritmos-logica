Algoritmo "APROVADOS"

Var
     n,i:inteiro
     nome:vetor[0..9] de caractere
     n1,n2,media:vetor[0..9] de real

Inicio

    escreva("Quantos alunos serão digitados? ")
    leia(n)

    para i de 0 ate n-1 faca
       escreval("Digite nome, primeira e segunda nota do",i+1,"o aluno:")
       escreva("Nome: ")
       leia(nome[i])
       escreva("Nota 1: ")
       leia(n1[i])
       escreva("Nota 2: ")
       leia(n2[i])
    fimpara

    para i de 0 ate n-1 faca
       media[i] <- (n1[i] + n2[i]) / 2
    fimpara

    escreval
    escreval("Alunos aprovados:")
    para i de 0 ate n-1 faca
       se media[i] >= 6.00 entao
        escreval(nome[i])
       fimse
    fimpara


Fimalgoritmo