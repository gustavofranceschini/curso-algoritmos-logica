#include <bits/stdc++.h>

using namespace std;

int main()
{

    double precoUn,precoTotal,dinheiroRecebido,troco;
    int qnt;

    cout << "Preco unitario do produto: ";
    cin >> precoUn;
    cout << "Quantidade comprada: ";
    cin >> qnt;
    cout << "Dinheiro recebido: ";
    cin >> dinheiroRecebido;

    precoTotal = precoUn * qnt;
    troco = dinheiroRecebido - precoTotal;

    cout << fixed << setprecision(2);
    cout << "TROCO = " << troco << endl;

    return 0;
}
