
#include <bits/stdc++.h>

using namespace std;

int main()
{

    double larg,comp,valorMetro,valorTotal,area;

    cout << "Digite a largura do terreno: ";
    cin >> larg;
    cout << "Digite o comprimento do terreno: ";
    cin >> comp;
    cout << "Digite o valor do metro quadrado: ";
    cin >> valorMetro;

    area = larg * comp;
    valorTotal = area * valorMetro;

    cout << fixed << setprecision(2);
    cout << "Area do terreno = " << area << endl;
    cout << "Preco do terreno = " << valorTotal << endl;

    return 0;
}
