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
    int n,maisVelho,posMaior;

    printf("Quantas pessoas voce vai digitar? ");
    scanf("%d",&n);

    int idades[n];
    char nomes[n][50];

    //Lendo os vetores
    for (int i=0;i<n;i++){
        printf("Dados da %da pessoa:\n",i+1);
        printf("Nome: ");
        limpar_entrada();
        ler_texto(nomes[i],50);
        printf("Idade:  ");
        scanf("%d",&idades[i]);
    };

    //Achando a pessoa mais velha
    maisVelho = idades[0];
    posMaior = 0;
    for (int i=1;i<n;i++){
        if (idades[i] > maisVelho){
            maisVelho = idades[i];
            posMaior = i;
        };
    };
    printf("PESSOA MAIS VELHA = %s\n",nomes[posMaior]);

    return 0;
}
