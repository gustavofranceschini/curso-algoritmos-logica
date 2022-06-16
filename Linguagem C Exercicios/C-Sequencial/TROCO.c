#include <stdio.h>
#include <stdlib.h>

int main()
{

    double precoUn,precoTotal,recebido,troco = 0;
    int qnt = 0;

    printf("Preço unitario do produto: R$ ");
    scanf("%lf",&precoUn);
    printf("Quantidade comprada: ");
    scanf("%d",&qnt);
    printf("Dinheiro recebido: ");
    scanf("%lf",&recebido);

    precoTotal = qnt * precoUn;
    troco = recebido - precoTotal;

    printf("TROCO = %.2lf",troco);

    return 0;
}
