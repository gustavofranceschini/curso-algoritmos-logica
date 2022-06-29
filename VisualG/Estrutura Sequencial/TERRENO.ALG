Algoritmo "Terreno"

Var
      largura,comprimento,area,preco,precoTerreno: real


Inicio
        escreva("Largura do terreno: ")
        leia(largura)
        escreva("Comprimento do terreno: ")
        leia(comprimento)
        escreva("Preço por m²: ")
        leia(preco)
        
        area <- largura*comprimento
        precoTerreno <- preco*area

        escreval
        escreval("AREA: ",area:8:2)
        escreval("PREÇO TERRENO: ",precoTerreno:8:2)


Fimalgoritmo