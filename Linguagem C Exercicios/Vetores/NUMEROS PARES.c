#include <stdio.h>
#include <stdlib.h>

int main()
{

   int n,cont;

   printf("Quantos numeros voce vai digitar? ");
   scanf("%d",&n);

   int vet[n];

   // Leitura dos vetores
   for(int i=0;i<n;i++){
    printf("Digite um numero: ");
    scanf("%d",&vet[i]);
   };

   //Numeros pares do vetor
   cont = 0;
   printf("\nNUMEROS PARES: \n");
   for (int i=0;i<n;i++){
    if(vet[i] % 2 == 0){
        printf("%d ",vet[i]);
        cont++;
    };
   };
   printf("\n\nQUANTIDADE DE PARES = %d",cont);



    return 0;
}
