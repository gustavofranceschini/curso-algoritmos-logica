Algoritmo "MEDIA PONDERADA"


Var
  n,i:inteiro
  n1,n2,n3,mediaA:real


Inicio
       escreva("Quantos casos voce vai digitar: ")
       leia(n)
       
       cont <- 0
       
       para i de 1 ate n faca
       
         escreval("Digite as três notas: ")
         
         leia(n1)
         leia(n2)
         leia(n3)
         
          mediaA <- ((n1*2)+(n2*3)+(n3*5))/ 10
          
         escreval("Media: ",mediaA:2:1)
       
       fimpara


Fimalgoritmo