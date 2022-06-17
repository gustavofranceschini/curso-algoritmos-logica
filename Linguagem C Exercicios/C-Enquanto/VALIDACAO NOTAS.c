#include <stdio.h>
#include <stdlib.h>

int main()
{

    double n1,n2,soma,media = 0;

    printf("Digite a primeira nota: ");
    scanf("%lf",&n1);

    while (n1 <0 || n1 >10){
        printf("Nota invalida.. Digite outra nota: ");
        scanf("%lf",&n1);
    };

    printf("Digite a segunda nota: ");
    scanf("%lf",&n2);


    while(n2 <0 || n2 > 10){
        printf("Nota invalida.. Digite outra nota: ");
        scanf("%lf",&n2);
    };

    soma = n1 + n2;
    media = soma / 2;
    printf("MEDIA FINAL = %.1lf",media);

    return 0;
}
