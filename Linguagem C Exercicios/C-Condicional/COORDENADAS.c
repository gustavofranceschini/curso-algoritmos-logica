#include <stdio.h>
#include <stdlib.h>

int main()
{

    double x,y =0;

    printf("Digite as coordenadas X e Y \n");
    printf("X: ");
    scanf("%lf",&x);
    printf("Y: ");
    scanf("%lf",&y);

    if (x>0 && y >00){
        printf("Quadrante 1");
    }else if(x<0 && y>0){
        printf("Quadrante 2");
    }else if(x<0 && y<0){
        printf("Quadrante 3");
    }else if(x>0 && y<0){
        printf("Quadrante 4");
    }else if(x>0 || x<0 && y ==0){
        printf("Eixo X");
    }else if(x==0 && y>0 || y <0 ){
        printf("Eixo Y");
    }else{
        printf("Origem");
    };

    return 0;
}
