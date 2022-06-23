#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Quantos valores vai ter cada vetor? ");
    scanf("%d",&n);

    int vetA[n];
    int vetB[n];
    int vetC[n];

    //Lendo o vetor A
    printf("Digite os valores do vetor A:\n");
    for (int i=0;i<n;i++) {
        scanf("%d",&vetA[i]);
    };

    //Lendo o vetor B
    printf("Digite os valores do vetor B:\n");
    for (int i=0;i<n;i++) {
        scanf("%d",&vetB[i]);
    };

    //Fazendo a somatoria dos vetores A e B, resultando no vetor C
    for (int i=0;i<n;i++){
        vetC[i] = vetA[i] + vetB[i];
    };

    //Imprimindo o vetor C
    printf("VETOR GERADO:\n");
    for (int i=0;i<n;i++) {
        printf("%d\n",vetC[i]);
    };

    return 0;
}
