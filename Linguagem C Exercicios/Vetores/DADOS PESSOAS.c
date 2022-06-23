#include <stdio.h>
#include <string.h>

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
    int n,contM,contF;
    double maiorAltura,menorAltura,alturaMedia,somaAlturaF;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d",&n);

    double altura[n];
    char genero[n];

    //Lendo os vetores
    for (int i=0;i<n;i++){
        printf("Altura da %da pessoa: ",i+1);
        scanf("%lf",&altura[i]);
        printf("Genero da %da pessoa: ",i+1);
        limpar_entrada();
        scanf("%c",&genero[i]);

        //Condição para se caso o genero digitado for diferente de 'F' ou 'M'
        while (genero[i] != 'F' && genero[i] != 'M'){
            printf("Genero invalido.. Digite 'F' ou 'M': ");
            limpar_entrada();
            scanf("%c",&genero[i]);
        };
    };

    //Achando a menor altura
    menorAltura = altura[0];
    for (int i=1;i<n;i++){
        if (altura[i] < menorAltura){
            menorAltura = altura[i];
        };
    };
    printf("Menor Altura = %.2lf\n",menorAltura);

    //Achando a maior altura
    maiorAltura = altura[0];
    for(int i=1;i<n;i++){
        if(altura[i] > maiorAltura){
            maiorAltura = altura[i];
        };
    };
    printf("Maior Altura = %.2lf\n",maiorAltura);

    //Contando numero de mulheres e encontrando a altura média delas
    contF = 0;
    for(int i=0;i<n;i++){
        if (genero[i] == 'F'){
            somaAlturaF = somaAlturaF + altura[i];
            contF = contF + 1;
        };
    };
    alturaMedia = somaAlturaF / contF;
    printf("Media das alturas das mulheres = %.2lf\n",alturaMedia);

    //Numero de homens
    contM = 0;
    contM = n - contF;
    printf("Numero de homens = %d",contM);


    return 0;
}
