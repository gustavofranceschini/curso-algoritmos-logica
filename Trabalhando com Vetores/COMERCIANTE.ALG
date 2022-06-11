Algoritmo "COMERCIANTE"

Var
    n,i,cont1,cont2,cont3:inteiro
    produto:vetor[0..9] de caractere
    pCompra,pVenda,lucro:vetor[0..9] de real
    somaVenda,somaCompra,lucroTotal:real

Inicio

       escreva("Serao digitados dados de quantos produtos? ")
       leia(n)

       para i de 0 ate n-1 faca
          escreval("Produto ",i+1,":")
          escreva("Nome: ")
          leia(produto[i])
          escreva("Preço de compra: ")
          leia(pCompra[i])
          escreva("Preço de venda: ")
          leia(pVenda[i])
       fimpara

       lucro[i] <- 0
       cont1 <- 0
       cont2 <- 0
       cont3 <- 0
       para i de 0 ate n-1 faca
          lucro[i] <- ((pVenda[i] * 100) / pCompra[i]) - 100
           se lucro[i] < 10 entao
            cont1 <- cont1 +1
           senao
            se lucro[i] <= 20 entao
             cont2 <- cont2 + 1
            senao
              cont3 <- cont3 +1
            fimse
           fimse
       fimpara

       escreval
       escreval("RELATÓRIO:")
       escreval("Lucro abaixo de 10%: ",cont1)
       escreval("Lucro entre 10% e 20%: ",cont2)
       escreval("Lucro acima de 20%: ",cont3)

       somaCompra <-0
       para i de 0 ate n-1 faca
            somaCompra <- somaCompra + pCompra[i]
            somaVenda <- somaVenda + pVenda[i]
       fimpara
       lucroTotal <- somaVenda - somaCompra

       escreval("Valor total de compra: ",somaCompra:2:2)
       escreval("Valor total de venda: ",somaVenda:2:2)
       escreval("Lucro total: ",lucroTotal:2:2)

Fimalgoritmo