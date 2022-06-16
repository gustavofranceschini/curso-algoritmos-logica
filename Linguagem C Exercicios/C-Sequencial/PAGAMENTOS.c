#include <stdio.h>
#include <stdlib.h>

void ler_texto(char *buffer, int length) {
 fgets(buffer, length, stdin);
 strtok(buffer, "\n");
}

int main()
{

   char nome[50];
   int horas;
   double salario,valorHora;

   printf("Nome do funcionario: ");
   ler_texto(nome,50);
   printf("Valor por hora: R$ ");
   scanf("%lf",&valorHora);
   printf("Horas trabalhadas: ");
   scanf("%d",&horas);

   salario = valorHora * horas;

   printf("O pagamento para %s deve ser %.2lf",nome,salario);

    return 0;
}
