#include <stdio.h>

int main()
{
    int m,n;

    printf("Qual a quantidade de linhas da matriz? ");
    scanf("%d",&m);
    printf("Qual a quantidade de colunas da matriz? ");
    scanf("%d",&n);

    int mat[m][n];

    //Lendo a matriz
    for (int i=0;i<=m-1;i++){
        for (int j=0;j<=n-1;j++){
            printf("Elemento [%d,%d]: ",i,j);
            scanf("%d",&mat[i][j]);
        };
    };

    //Imprimindo os valores negativos
    printf("VALORES NEGATIVOS:\n");
    for (int i=0;i<=m-1;i++){
        for (int j=0;j<=n-1;j++){
            if (mat[i][j] < 0){
                printf("%d\n",mat[i][j]);
            };
        };
    };

    return 0;
}
