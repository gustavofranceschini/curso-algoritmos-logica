Algoritmo "DADOS PESSOAIS"

Var

     n,i,cont,cont2:inteiro
     altura:vetor[0..9] de real
     genero:vetor[0..9] de caractere
     menor,maior,soma,media:real


Inicio

        escreva("Quantas pessoa ser�o digitadas ? ")
        leia(n)

        para i de 0 ate n-1 faca
            escreva("Altura da",i+1,"a pessoa: ")
            leia(altura[i])
            escreva("G�nero da",i+1,"a pessoa: ")
           leia(genero[i])
             enquanto (genero[i] <> "M") e (genero[i] <> "F") faca
                escreval("G�nero errado!! Escolha 'M' para masculino ou 'F' para feminino")
                escreval("Digite o g�nero novamente: ")
                leia(genero[i])
             fimenquanto
        fimpara

        menor <- altura[0]
        para i de 0 ate n-1 faca
           se menor > altura[i] entao
            menor <- altura[i]
           fimse
        fimpara
        escreval("Menor Altura: ",menor:2:2)

        maior <- altura[0]
        para i de 0 ate n-1 faca
           se maior < altura[i] entao
            maior <- altura[i]
           fimse
        fimpara
        escreval("Menor Altura: ",maior:2:2)

        cont <- 0
        soma <- 0
        para i de 0 ate n-1 faca
           se genero[i] = "F" entao
            soma <-  soma + altura[i]
            cont <- cont + 1
           fimse
        fimpara
        media <- soma / cont
        escreval("M�dia das alturas das mulheres = ",media:2:2)

        para i de 0 ate n-1 faca
          se genero[i] = "M" entao
           cont2 <- cont2 + 1
          fimse
        fimpara
        escreval("Numero de homens = ",cont2)


Fimalgoritmo