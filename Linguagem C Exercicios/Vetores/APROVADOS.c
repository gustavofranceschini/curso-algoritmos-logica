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
    int n;

    printf("Quantos alunos serao digitados? ");
    scanf("%d",&n);

    char nomes[n][50];
    double n1[n];
    double n2[n];
    double soma[n];
    double media[n];

    //Lendo os vetores
    for (int i=0;i<n;i++){
        printf("Digite nome, primeira e segunda nota do %do aluno:\n",i+1);
        limpar_entrada();
        ler_texto(nomes[i],50);
        scanf("%lf",&n1[i]);
        scanf("%lf",&n2[i]);
    };


    //Fazendo a somatória das notas de cada aluno
    for (int i=0;i<n;i++){
        soma[i] = n1[i] + n2[i];
    };
    //Fazendo a media de cada aluno
    for (int i=0;i<n;i++){
         media[i] = soma[i] / 2;
    };

    //Alunos aprovados
    printf("Alunos aprovados:\n");
    for (int i=0;i<n;i++){
        if (media[i] >= 6.00){
            printf("%s\n",nomes[i]);
        };
    };

    return 0;
}
