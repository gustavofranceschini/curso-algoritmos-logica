#include <stdio.h>
#include <stdlib.h>

void ler_texto(char *buffer, int length) {
 fgets(buffer, length, stdin);
 strtok(buffer, "\n");
}
void limpar_entrada() {
 char c;
 while ((c = getchar()) != '\n' && c != EOF) {}
}

int main()
{
    char tipoTemp;
    double c,f = 0;


    printf("Qual temperatura voce vai digitar? C ou F: ");
    scanf("%c",&tipoTemp);

    if(tipoTemp == 'F'){
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%lf",&f);
        c = (f-32) * 5/9;
        printf("Temperatura equivalente em Celsius: %.2lf",c);
    }else if(tipoTemp == 'C'){
        printf("Digite a temperatura em Celsius: ");
        scanf("%lf",&c);
        f = (c*9/5) + 32;
        printf("Temperatura equivalente em Fahrenheit: %.2lf",f);
    }else {
        printf("Tipo de temperatura errada !!");
    };


    return 0;
}
