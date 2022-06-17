#include <stdio.h>
#include <stdlib.h>

int main()
{

    double x,y = 0;

    printf("Digite as coordenadas X e Y \n");
    printf("X: ");
    scanf("%lf",&x);
    printf("Y: ");
    scanf("%lf",&y);


    while(x != 0 && y != 0){
        if (x>0 && y>0){
            printf("QUADRANTE 1 \n");
        }else if(x<0 && y>0){
            printf("QUADRANTE 2 \n");
        }else if(x<0 && y<0){
            printf("QUADRANTE 3 \n");
        }else{
            printf("QUADRANTE 4 \n");
        };

        printf("Digite as coordenadas novamente \n");
        printf("X: ");
        scanf("%lf",&x);
        printf("Y: ");
        scanf("%lf",&y);
    };

    return 0;
}
