#include <stdio.h>

int main()
{
    int n,i,soma = 0;

    printf("Deseja a tabuada para qual valor? ");
    scanf("%d",&n);

    for(i = 1;i <= 10;i++){
        soma = i*n;
        printf("%d x %d = %d\n",n,i,soma);
    };

    return 0;
}
