#include <stdio.h>
#include <stdlib.h>

int main()
{

    int codigo,qnt = 0;
    double valorTotal = 0;

    printf("Digite o codigo do produto: ");
    scanf("%d",&codigo);
    printf("Digite a quantidade que deseja comprar: ");
    scanf("%d",&qnt);

    if(codigo == 1){
            valorTotal = qnt * 5.00;
    }else if(codigo == 2){
        valorTotal = qnt * 3.50;
    }else if(codigo == 3){
        valorTotal = qnt * 4.80;
    }else if(codigo == 4){
        valorTotal = qnt * 8.90;
    }else if(codigo == 5){
        valorTotal = qnt * 7.32;

    }else{
      printf("Código invalido !!");
    };

    printf("Valor total a pagar: R$ %.2lf",valorTotal);


    return 0;
}
