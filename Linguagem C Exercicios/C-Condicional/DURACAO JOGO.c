#include <stdio.h>
#include <stdlib.h>

int main()
{
    int horaInicial,horaFinal,duracao = 0;

    printf("Digite a hora inicial: ");
    scanf("%d",&horaInicial);
    printf("Digite a hora final: ");
    scanf("%d",&horaFinal);

    if (horaInicial > horaFinal){
        duracao = (24 - horaInicial) + horaFinal;
    }else {
        duracao = horaFinal - horaInicial;
    };

    printf("O JOGO DUROU %d HORAS",duracao);

    return 0;
}
