#include <stdio.h>
#include <stdlib.h>
void limpar_entrada()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main()
{

    int n,i,qnt,totalSapos,totalCoelhos,totalRatos,totalCobaias ;
    char tipoCobaia;
    double percRatos,percSapos,percCoelhos;

    printf("Quantos casos de testes serao digitados? ");
    scanf("%d",&n);


    totalRatos = 0;
    totalCoelhos = 0;
    totalSapos = 0;
    totalCobaias = 0;
    percRatos = 0;
    percSapos = 0;
    percCoelhos = 0;

    for(i=1; i<=n; i++)
    {
        printf("Quantidade de cobaias: ");
        scanf("%d",&qnt);
        printf("Tipo de cobaia: ");
        limpar_entrada();
        scanf("%c",&tipoCobaia);

        if(tipoCobaia == 'C')
        {
            totalCoelhos = totalCoelhos + qnt;
        }
        else if(tipoCobaia == 'R')
        {
            totalRatos = totalRatos + qnt;

        }
        else if(tipoCobaia == 'S')
        {
            totalSapos = totalSapos + qnt;
        }
        else
        {
            printf("Tipo de cobaia invalido \n");
        }
        ;

    };

    totalCobaias = totalSapos + totalRatos + totalCoelhos;
    percRatos = ((double)totalRatos * 100) / (double)totalCobaias;
    percSapos = ((double)totalSapos * 100) / (double)totalCobaias;
    percCoelhos = ((double)totalCoelhos * 100) / (double)totalCobaias;


    printf("\n");

    printf("RELATORIO FINAL \n");
    printf("Total de cobaias = %d\n",totalCobaias);
    printf("Total de coelhos: %d\n",totalCoelhos);
    printf("Total de ratos: %d\n",totalRatos);
    printf("Total de sapos: %d\n",totalSapos);
    printf("Percentual de coelhos: %.2lf\n",percCoelhos);
    printf("Percentual de ratos: %.2lf\n",percRatos);
    printf("Percentual de sapos: %.2lf\n",percSapos);





    return 0;
}
