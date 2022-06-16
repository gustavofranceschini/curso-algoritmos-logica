#include <stdio.h>
#include <stdlib.h>

int main()
{

    double largura,comprimento,area,valorMetro,valorTerreno = 0;

    printf("Digite a largura do terreno: ");
    scanf("%lf",&largura);
    printf("Digite o comprimento do terreno: ");
    scanf("%lf",&comprimento);
    printf("Preco por metro quadrado: R$ ");
    scanf("%lf",&valorMetro);

    area = largura*comprimento;
    printf("A area desse terreno e de: %.2lfm\n",area);

    valorTerreno = area * valorMetro;
    printf("O valor desse terreno e de: R$ %.2lf",valorTerreno);

    return 0;
}
