#include <stdio.h>

int main()
{
    int n,i,x,contDentro,contFora ;

    printf("Quantos numeros você vai digitar? ");
    scanf("%d",&n);

    contDentro = 0;
    contFora = 0;

    for (i = 1;i<=n;i++){

        printf("Digite um numero: ");
        scanf("%d",&x);

        if(x >= 10 && x <= 20){
            contDentro = contDentro + 1;
        }else {
            contFora = contFora + 1;
        };
    };

    printf("%d DENTRO \n",contDentro);
    printf("%d FORA",contFora);

    return 0;
}
