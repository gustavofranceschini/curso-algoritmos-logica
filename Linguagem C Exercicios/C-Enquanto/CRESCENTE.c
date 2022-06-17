#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x,y = 0;

    printf("Digite dois valores \n");
    printf("Valor 1: ");
    scanf("%d",&x);
    printf("Valor 2: ");
    scanf("%d",&y);

    while(x != y)
    {
        if (x > y)
        {
            printf("DECRESCENTE \n");
        }
        else
        {
            printf("CRESCENTE \n");
        };
        printf("Digite outros dois valores \n");
        printf("Valor 1: ");
        scanf("%d",&x);
        printf("Valor 2: ");
        scanf("%d",&y);

    };


    return 0;
}
