#include <bits/stdc++.h>

using namespace std;

int main()
{
    int codigo,qnt;
    double valorTotal;

    cout << "Codigo do produto comprado: ";
    cin >> codigo;
    cout << "Quantidade comprada: ";
    cin >> qnt;

    switch (codigo){

        case 1 :
        valorTotal = qnt * 5.00;
        break;

        case 2 :
        valorTotal = qnt * 3.50;
        break;

        case 3 :
        valorTotal = qnt * 4.80;
        break;

        case 4 :
        valorTotal = qnt * 8.90;
        break;

        case 5 :
        valorTotal = qnt * 7.32;
        break;

        default :
        cout << "Codigo invalido" << endl;
    };

    cout << fixed << setprecision(2);
    cout << "Valor a pagar: " << valorTotal << endl;

    return 0;
}
