#include <stdio.h>
#include <stdlib.h>

int main()
{

    int qntMin = 0;
    double valorTotal = 0;

    printf("Digite a quantidade de minutos: ");
    scanf("%d",&qntMin);

    if (qntMin <= 100){
        valorTotal = 50.00;
    }else{
        valorTotal = ((qntMin - 100) *2.00) + 50.00;
    };

    printf("Valor total a ser pago: R$ %.2lf",valorTotal);

    return 0;
}
