#include <stdio.h>
#include <stdlib.h>

int main()
{

    double base,altura,area,perimetro,diagonal = 0;


    printf("Base do retangulo: ");
    scanf("%lf",&base);
    printf("Altura do retangulo: ");
    scanf("%lf",&altura);

    area = base * altura;
    perimetro = (base*2)+(altura*2);
    printf("Area do retangulo: %.4lf\n",area);
    printf("Perimetro do retangulo: %.4lf\n",perimetro);

    diagonal = sqrt((base*base) + (altura*altura));
    printf("Diagonal do retangulo: %.4lf",diagonal);


    return 0;
}
