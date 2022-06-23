#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n,x;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d",&n);

    int vet[n];

    for (int i = 0;i< n;i++){
        printf("Digite um numero: ");
        scanf("%d",&vet[i]);
    };

    printf("NUMEROS NEGATIVOS:\n");

    for(int i=0;i<n;i++){
        if (vet[i] % 2 != 0){
            printf("%d\n",vet[i]);
        };
    };

    return 0;
}
