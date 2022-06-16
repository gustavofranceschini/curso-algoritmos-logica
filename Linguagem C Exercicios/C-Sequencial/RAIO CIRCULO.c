#include <stdio.h>
#include <stdlib.h>

int main()
{

    double raio,area = 0;
    double pi = 3.14159;

    printf("Digite o valor do raio do circulo: ");
    scanf("%lf",&raio);

    area = (raio*raio)*pi;

    printf("AREA = %.3lf",area);

    return 0;
}
