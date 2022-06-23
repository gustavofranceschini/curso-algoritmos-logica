#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n,linha,coluna;
    double soma;

    printf("Qual a ordem da matriz? ");
    scanf("%d",&n);

    double mat[n][n];

    //Lendo a matriz
    for (int i=0;i<=n-1;i++){
        for (int j=0;j<=n-1;j++){
            printf("Elemento [%d,%d]: ",i,j);
            scanf("%lf",&mat[i][j]);
        };
    };

    //Fazer a soma dos positivos
    soma = 0;
    for (int i=0;i<=n-1;i++){
        for (int j=0;j<=n-1;j++){
            if (mat[i][j] > 0){
              soma = soma + mat[i][j];
            };
        };
    };
    printf("\n");

    printf("SOMA DOS POSITIVOS = %.1lf\n",soma);


    printf("\n");

    //Escolhendo a linha
    printf("Escolha uma linha: ");
    scanf("%d",&linha);
    printf("LINHA ESCOLHIHA: ");
    for (int j=0;j<=n-1;j++){
        printf("%.1lf ",mat[linha][j]);
    };

    printf ("\n\n");

    //Escolhendo a coluna
    printf("Escolha uma coluna: ");
    scanf("%d",&coluna);
    printf("COLUNA ESCOLHA: ");
    for (int i=0;i<=n-1;i++){
        printf("%.1lf ",mat[i][coluna]);
    };

    printf ("\n\n");

    //Imprimindo a diagonal principal
    printf("DIAGONAL PRINCIPAL: ");
    for(int i=0;i<=n-1;i++){
        for (int j=0;j<=n-1;j++){
            if (i == j){
                printf("%.1lf ",mat[i][j]);
            };
        };
    };

    printf ("\n\n");


    //Gerando a Matriz Alterada
    for (int i=0;i<=n-1;i++){
        for (int j=0;j<=n-1;j++){
            if (mat[i][j] < 0){
                mat[i][j] = (mat[i][j]*mat[i][j]);
            };
        };
    };

    // Imprimindo a Matriz Alterada
    for (int i=0;i<=n-1;i++){
        for (int j=0;j<=n-1;j++){
            printf("%.1lf ",mat[i][j]);
        };
        printf("\n");
    };



















    return 0;
}
