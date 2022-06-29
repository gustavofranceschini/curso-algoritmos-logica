#include <bits/stdc++.h>

using namespace std;

int main()
{
    double salarioAtual,salarioNovo,aumento;
    int porcentagem;

    cout << "Digite o salario da pessoa: ";
    cin >> salarioAtual;

    if (salarioAtual <=1000){
        porcentagem = 20;
    }else if(salarioAtual <= 3000){
        porcentagem = 15;
    }else if(salarioAtual <= 8000){
        porcentagem = 10;
    }else {
        porcentagem = 5;
    };

    aumento = (salarioAtual / 100) * porcentagem;
    salarioNovo = salarioAtual + aumento;

    cout << fixed << setprecision(2);
    cout << "Novo salario = " << salarioNovo << endl;
    cout << "Aumento = " << aumento << endl;
    cout << "Porcentagem = " << porcentagem << "%" << endl;

    return 0;
}
