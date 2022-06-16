#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,soma = 0;

    printf("Digite o numero 1: ");
    scanf("%d",&num1);
    printf("Digite o numero 2: ");
    scanf("%d",&num2);

    soma = num1 + num2;

    printf("SOMA = %d",soma);

    return 0;
}
