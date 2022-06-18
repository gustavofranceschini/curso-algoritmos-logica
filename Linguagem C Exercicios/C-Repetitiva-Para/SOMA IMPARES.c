#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x,y,n,i,soma,troca;

    x = 0;
    y = 0;


    printf("Digite dois numeros \n");
    scanf("%d",&x);
    scanf("%d",&y);

    soma = 0;
    troca = 0;

    if (x > y){
        troca = x;
        x = y;
        y = troca;
    };


    for (i = x+1 ; i<y-1 ; i++){
        if(i%2!=0){
            soma = soma + i;
        };


    };

    printf("SOMA = %d",soma);





    return 0;
}
