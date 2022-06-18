#include <stdio.h>

int main()
{
    int n,i;
    double n1,n2,n3,media;

    printf("Quantos casos voce vai digitar? ");
    scanf("%d",&n);

    n1 = 0;
    n2 = 0;
    n3 = 0;
    media = 0;

    for(i=1;i<=n;i++){

        printf("Digite tres numeros \n");
        scanf("%lf",&n1);
        scanf("%lf",&n2);
        scanf("%lf",&n3);

        media = ((n1*2)+(n2*3)+(n3*5)) / 10;
        printf("MEDIA = %.1lf\n",media);
    };

    return 0;
}
