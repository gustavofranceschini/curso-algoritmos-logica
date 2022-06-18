#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n,i,fat;

    printf("Digite um numero inteiro: ");
    scanf("%d",&n);



    fat = 1;

    for(i=1;i<=n;i++){
            fat = fat * i;

    };

    printf("SOMA = %d",fat);



    return 0;
}
