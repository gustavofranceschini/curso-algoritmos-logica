#include <stdio.h>
#include <stdlib.h>

int main()
{

    double troco,recebido,precoUn,precoTotal = 0;
    int qnt = 0;

    printf("Digite o valor unitario da peca: R$ ");
    scanf("%lf",&precoUn);
    printf("Digite a quantidade comprada: ");
    scanf("%d",&qnt);
    printf("Digite o valor recebido: R$ ");
    scanf("%lf",&recebido);

    precoTotal = precoUn * qnt;

    if (recebido >= precoTotal){
        troco = recebido - precoTotal;
        printf("TROCO = %.2lf",troco);
    }else {
        troco = precoTotal - recebido;
        printf("DINHEIRO INSUFICIENTE. AINDA FALTAM %.2lf REAIS",troco);
    };


    return 0;
}
