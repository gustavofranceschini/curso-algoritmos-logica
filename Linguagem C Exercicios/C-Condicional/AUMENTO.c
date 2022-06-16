#include <stdio.h>
#include <stdlib.h>

int main()
{
    double salario,novoSalario,aumento = 0;
    int porcentagem =0;

    printf("Digite o salario da pessoa: R$ ");
    scanf("%lf",&salario);

    if (salario <= 1000.00){
        porcentagem = 20;
        aumento = (salario * porcentagem) / 100;
        novoSalario = aumento + salario;
    }else if(salario <= 3000.00){
        porcentagem = 15;
        aumento = (salario*porcentagem) / 100;
        novoSalario = aumento + salario;
    }else if(salario <= 8000.00) {
        porcentagem = 10;
        aumento = (salario*porcentagem) / 100;
        novoSalario = aumento + salario;
    }else {
        porcentagem = 5;
        aumento = (salario*porcentagem) / 100;
        novoSalario = aumento + salario;
    };

    printf("Novo salario: R$ %.2lf\n",novoSalario);
    printf("Aumento: R$ %.2lf\n",aumento);
    printf("Porcentagem: %d%\n",porcentagem);


    return 0;
}
