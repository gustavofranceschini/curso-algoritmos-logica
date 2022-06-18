#include <stdio.h>

int main()
{
    int n,i,x;

    printf("Quantos numeros você vai digitar? ");
    scanf("%d",&n);

    for (i=1;i<=n;i++){
        printf("Digite um numero: ");
        scanf("%d",&x);

        if(x%2==0 && x>0){
            printf("PAR POSITIVO \n");
        }else if(x%2==0 && x<0){
            printf("PAR NEGATIVO \n");
        }else if(x%2!=0 && x>0){
            printf("IMPAR POSITIVO \n");
        }else if(x%2!=0 && x<0){
            printf("IMPAR NEGATIVO \n");
        }else{
            printf("NULO \n");
        };
    };


    return 0;
}
