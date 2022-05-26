Algoritmo "PAGAMENTO"

Var
     nome : caractere
     salarioHora : real
     horas : inteiro
     salarioTotal :real

Inicio

         escreva("Nome funcionario: ")
         leia(nome)
         escreva("Salario por hora: ")
         leia(salarioHora)
         escreva("Horas trabalhadas: ")
         leia(horas)
         
         salarioTotal <- salarioHora*horas
         
         escreval("O salario de ",nome," deve ser R$ ",salarioTotal:8:2)



Fimalgoritmo