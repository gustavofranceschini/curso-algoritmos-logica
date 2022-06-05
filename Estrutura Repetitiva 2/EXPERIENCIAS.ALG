Algoritmo "EXPERIENCIAS"

Var
   n,qnt,i,totalCoelho,totalSapo,totalRato,totalCobaia : inteiro
   tipoCobaia : caractere
   totalCoelhoP,totalRatoP,totalSapoP : real


Inicio

     escreva("Quantos casos de teste serao digitados: ")
     leia(n)
     
     totalSapo <- 0
     totalCoelho <- 0
     totalRato <- 0
     
     para i de 1 ate n faca
     
       Escreva("Qual tipo de cobaia: ")
       leia(tipoCobaia)
       escreva("Quantidade de Cobaia: ")
       leia(qnt)
       
       se tipoCobaia = "R" entao
        tipoCobaia <- "RATO"
        totalRato <- totalRato + qnt
       senao
        se tipoCobaia = "S" entao
         tipoCobaia <- "SAPO"
         totalSapo <- totalSapo + qnt
        senao
         se tipoCobaia = "C" entao
          tipoCobaia <- "COELHO"
          totalCoelho <- totalCoelho + qnt
          fimse
        fimse
       fimse

       totalCobaia <- totalCoelho + totalRato + totalSapo

     fimpara
     escreval("RESULTADO FINAL")
     escreval("Total de Cobaias: ",totalCobaia)
     escreval("Total Coelho: ",totalCoelho)
     escreval("Total Sapo: ",totalSapo)
     escreval("Total Rato: ",totalRato)
     
     totalCoelhoP <- (totalCoelho * 100) / totalCobaia
     totalRatoP <- (totalRato * 100) / totalCobaia
     totalSapoP <- (totalSapo * 100) / totalCobaia
     
     escreval("Percentual de Coelho: ",totalCoelhoP:2:2,"%")
     escreval("Percentual de Rato: ",totalRatoP:2:2,"%")
     escreval("Percentual de Rato: ",totalSapoP:2:2,"%")
     
Fimalgoritmo