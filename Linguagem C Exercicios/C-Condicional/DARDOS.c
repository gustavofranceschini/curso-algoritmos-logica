#include <stdio.h>
#include <stdlib.h>
void limpar_entrada() {
 char c;
 while ((c = getchar()) != '\n' && c != EOF) {}
}


int main()
{

    double d1,d2,d3,maior = 0;

    printf("Digite as 3 tres distancias \n");
    printf("DISTANCIA 1: ");
    scanf("%lf",&d1);
    printf("DISTANCIA 2: ");
    scanf("%lf",&d2);
    printf("DISTANCIA 3: ");
    scanf("%lf",&d3);

    if (d1 > d2 > d3){
        maior = d1;
    }else if(d2 > d3){
        maior = d2;
    }else{
        maior = d3;
    }

    printf("MAIOR DISTANCIA = %.2lf",maior);

    return 0;
}
