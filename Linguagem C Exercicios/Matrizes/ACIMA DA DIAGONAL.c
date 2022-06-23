#include <stdio.h>

int main()
{

    int n,soma;

    printf ("Qual a ordem da matriz? ");
    scanf("%d",&n);

    int mat[n][n];


    //Lendo a matriz
    for (int i=0;i<=n-1;i++){
        for (int j=0;j<=n-1;j++){
            printf("Elementos [%d,%d]: ",i,j);
            scanf("%d",&mat[i][j]);
        };
    };

    // Lendo os elementos acima da diagonal principal
    printf("ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL: ");
    soma = 0;
    for (int i=0;i<=n-1;i++){
        for (int j=0;j<=n-1;j++){
            if (j > i){
                soma = soma + mat[i][j];
            };
        };
    };
    printf("%d\n",soma);


    return 0;
}
