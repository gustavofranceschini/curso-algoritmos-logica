#include <bits/stdc++.h>

using namespace std;

int main()
{

    double km,combustivelGasto,consumo;

    cout << "Ditancia percorrida: ";
    cin >> km;
    cout << "Combustivel gasto: ";
    cin >> combustivelGasto;

    consumo = km / combustivelGasto;
    cout << fixed << setprecision(3);
    cout << "Consumo medio = " << consumo << endl;


    return 0;
}
