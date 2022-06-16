#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num1,num2 = 0;

    printf("Digite o numero 1: ");
    scanf("%d",&num1);
    printf("Digite o numero 2: ");
    scanf("%d",&num2);

    if (num1%num2==0 || num2%num1==0){
        printf("Sao multiplos");
    }else{
       printf("Nao sao multiplos");
    };


    return 0;
}
