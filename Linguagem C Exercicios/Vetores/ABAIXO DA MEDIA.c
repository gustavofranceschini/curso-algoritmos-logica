#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    double soma,media;

    printf("Quantos elementos vai ter o vetor? ");
    scanf("%d",&n);

    double vet[n];

    //Lendo o vetor
    for(int i=0;i<n;i++){
        printf("Digite um numero: ");
        scanf("%lf",&vet[i]);
    };

    printf("\n");

    //Somatoria e media dos numeros do vetor
    soma = 0;
    media = 0;
    for (int i=0;i<n;i++){
        soma = soma + vet[i];
    };
    media = soma / n;
    printf("MEDIA DOS VETORES = %.3lf\n",media);

    //Imprimir os elementos abaixo da média
    printf("ELEMENTOS ABAIXO DA MEDIA:\n");
    for (int i=0;i<n;i++){
        if (vet[i] < media){
            printf("%.1lf\n",vet[i]);
        };
    };

    return 0;
}
