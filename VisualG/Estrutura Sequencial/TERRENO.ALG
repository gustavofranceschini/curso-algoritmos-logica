Algoritmo "Terreno"

Var
      largura,comprimento,area,preco,precoTerreno: real


Inicio
        escreva("Largura do terreno: ")
        leia(largura)
        escreva("Comprimento do terreno: ")
        leia(comprimento)
        escreva("Pre�o por m�: ")
        leia(preco)
        
        area <- largura*comprimento
        precoTerreno <- preco*area

        escreval
        escreval("AREA: ",area:8:2)
        escreval("PRE�O TERRENO: ",precoTerreno:8:2)


Fimalgoritmo