#include <stdio.h>
#include <stdlib.h>

int main()
{

    int senha = 0;

    printf("Digite a senha: ");
    scanf("%d",&senha);

    while(senha != 2002){
        printf("Senha invalida.. Digite novamente: ");
        scanf("%d",&senha);
    }
    printf("Acesso permitido..");


    return 0;
}
