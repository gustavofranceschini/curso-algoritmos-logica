#include <bits/stdc++.h>

using namespace std;

int main()
{

    int qnt;
    double valorTotal;

    cout << "Digite a quantidade de minutos: ";
    cin >> qnt;

    cout << fixed << setprecision(2);
    if (qnt <= 100){
        valorTotal = 50.00;
    }else {
        valorTotal = ((qnt - 100) * 2.00) + 50.00;
    };
    cout << "Valor a pagar: " << valorTotal << endl;

    return 0;
}
