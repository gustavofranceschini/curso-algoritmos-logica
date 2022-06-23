#include <stdio.h>

int main()
{

    int m,n;

    printf("Quantas linhas vai ter cada matriz? ");
    scanf("%d",&m);
    printf("Quantas colunas vai ter cada matriz? ");
    scanf("%d",&n);

    int matA[m][n];
    int matB[m][n];
    int soma[m][n];

    // Lendo a matriz A
    printf("Digite os valores da matriz A:\n");
    for (int i=0;i<=m-1;i++){
        for (int j=0;j<=n-1;j++){
            printf("Elemento [%d,%d]: ",i,j);
            scanf("%d",&matA[i][j]);
        };
    };

    // Lendo a matriz B
    printf("Digite os valores da matriz B:\n");
    for (int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            printf("Elemento [%d,%d]: ",i,j);
            scanf("%d",&matB[i][j]);
        };
    };

    // SOMA DOS ELEMENTOS DAS MATRIZES
    for (int i=0;i<=m-1;i++){
        for (int j=0;j<=n-1;j++){
            soma[i][j] = matA[i][j] + matB[i][j];
        };
    };

    // Imprimindo a soma dos elementos das matrizes
    printf("MATRIZ SOMA:\n");
    for (int i=0;i<=m-1;i++){
        for (int j=0;j<=n-1;j++){
            printf("%d ",soma[i][j]);
        };
        printf("\n");
    };


    return 0;
}
