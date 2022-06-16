#include <stdio.h>
#include <stdlib.h>

int main()
{

    double km,combustivel,consumoMedio = 0 ;

    printf("Distancia percorrida: ");
    scanf("%lf",&km);
    printf("Combustivel gasto: ");
    scanf("%lf",&combustivel);

    consumoMedio = km / combustivel;

    printf("Consumo medio: %.3lf",consumoMedio);

    return 0;
}
