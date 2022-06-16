#include <stdio.h>
#include <stdlib.h>

int main()
{

    double a,b,c,areaTriangulo,areaQuadrado,areaTrapezio = 0;

    printf("Digite o valor de A: ");
    scanf("%lf",&a);
    printf("Digite o valor de B: ");
    scanf("%lf",&b);
    printf("Digite o valor de C: ");
    scanf("%lf",&c);

    areaQuadrado = a*a;
    areaTriangulo = (a*b) / 2.00;
    areaTrapezio = ((a+b)*c) / 2.00;

    printf("Area do Quadrado: %.4lf\n",areaQuadrado);
    printf("Area do Triangulo: %.4lf\n",areaTriangulo);
    printf("Area do Trapezio: %.4lf",areaTrapezio);

    return 0;
}
