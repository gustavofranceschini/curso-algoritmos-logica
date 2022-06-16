#include <stdio.h>
#include <stdlib.h>

int main()
{

    double n1,n2,soma = 0;

    printf("Digite a primeira nota: ");
    scanf("%lf",&n1);
    printf("Digite a segunda nota: ");
    scanf("%lf",&n2);

    soma = n1 + n2 ;
    printf("NOTA FINAL = %.1lf\n",soma);

    if (soma >= 60)
    {

        printf("APROVADO !!");
    }
    else
    {
        printf("REPROVADO");
    };


    return 0;
}
