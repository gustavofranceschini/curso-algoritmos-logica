Algoritmo "AUMENTO"

Var
     salario,novoSalario,aumento : real
     porcentagem : inteiro

Inicio

        escreva("Digite o salario: R$ ")
        leia(salario)


        se salario <= 1000 entao
          aumento <- (salario/100)*20
          novoSalario <- salario+aumento
          porcentagem <- 20
        senao
         se (salario > 1000) e (salario <= 3000) entao
          aumento <- (salario/100)*15
          novoSalario <- salario+aumento
          porcentagem <- 15
         senao
          se (salario > 3000) e (salario <= 8000) entao
           aumento <- (salario/100)*10
           novoSalario <- salario+aumento
           porcentagem <- 10
          senao
            aumento <- (salario/100)*5
            novoSalario <- salario+aumento
            porcentagem <- 5
          fimse
         fimse
        fimse
        escreval("Novo salario: R$ ",novoSalario:4:2)
        escreval("Aumento: R$ ",aumento:4:2)
        escreval("Porcentagem: ",porcentagem,"%")

Fimalgoritmo