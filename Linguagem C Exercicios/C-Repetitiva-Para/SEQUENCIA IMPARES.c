#include <stdio.h>

int main()
{
    int x,i = 0;

    printf("Digite o valor de X: ");
    scanf("%d",&x);

    for(i=1;i<=8;i++){
        if(i%2!=0){
            printf("%d\n",i);
        };
    };


    return 0;
}
