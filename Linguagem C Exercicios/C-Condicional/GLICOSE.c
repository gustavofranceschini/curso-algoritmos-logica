#include <stdio.h>
#include <stdlib.h>

int main()
{
    double glicose = 0;


    printf("Digite a quantidade de glicose: ");
    scanf("%lf",&glicose);

    if(glicose <=100){
        printf("Classificacao: Normal");
    }else if(glicose <=140){
        printf("Classificacao: Elevado");
    }else{
        printf("Classificacao: Diabetes");
    };


    return 0;
}
