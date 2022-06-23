#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n,cont;
    double alturaMedia,soma,porcentagem;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d",&n);

    char nomes[n][50];
    int idades[n];
    double alturas[n];


    for (int i=0;i<n;i++){
        printf("Dados da %da pessoa:\n",i+1);
        printf("Nome: ");
        fseek(stdin,0,SEEK_END);
        gets(nomes[i]);
        printf("Idades: ");
        scanf("%d",&idades[i]);
        printf("Altura: ");
        scanf("%lf",&alturas[i]);
        printf("\n");
    };

    soma = 0;
    alturaMedia = 0;

    for (int i = 0;i<n;i++){
        soma = soma + alturas[i];
    };
    alturaMedia = soma / n;
    printf("Altura Media: %.2lf\n",alturaMedia);

    cont =0;

    for (int i =0;i<n;i++){
        if (idades[i] < 16){
            cont = cont + 1;
        };
    };

    porcentagem = (cont * 100.0) / n;
    printf("Percentual de menores de 16 anos: %.1lf %%\n",porcentagem);

    for (int i =0;i<n;i++){
        if (idades[i] < 16){
            printf("%s\n",nomes[i]);
        };
    };


    return 0;
}
