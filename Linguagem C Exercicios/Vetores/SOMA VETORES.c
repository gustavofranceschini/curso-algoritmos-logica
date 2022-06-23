#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;
    double media,soma;

    printf("Quantos numeros você vai digitar? ");
    scanf("%d",&n);

    double vet[n];

    for (int i=0;i<n;i++){
      printf("Digite um numero: ");
      scanf("%lf",&vet[i]);
    };


    printf("\nVALORES: ");

    for (int i = 0;i<n;i++){
        printf("%.1lf ",vet[i]);
    };
    printf("\n");

    soma = 0;
    media = 0;

    for (int i=0;i<n;i++){
        soma = soma + vet[i];
    };

    media = soma / n;

    printf("SOMA = %.2lf\n",soma);
    printf("MEDIA = %.2lf\n",media);


    return 0;
}
