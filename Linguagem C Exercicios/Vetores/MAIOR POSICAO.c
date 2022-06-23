#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,posMaior;
    double maior;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d",&n);

    double vet[n];

    //Lendo os vetores
    for (int i = 0; i<n ; i++){
        printf("Digite um numero: ");
        scanf("%lf",&vet[i]);
    };

    //Achando o maior valor e sua posição
    posMaior = 0;
    maior = vet[0];
    for (int i=1;i<n;i++){
        if (vet[i] > maior){
            maior = vet[i];
            posMaior = i;
        };
    };

    printf("\n");

    printf("MAIOR VALOR = %.1lf\n",maior);
    printf("POSICAO MAIOR = %d",posMaior);

    return 0;
}
