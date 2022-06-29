#include <bits/stdc++.h>

using namespace std;

int main()
{
    double precoUn, dinheiroRecebido,troco,valorTotal;
    int qnt;

    cout << "Preco unitrio do produto: ";
    cin >> precoUn;
    cout << "Quantidade comprada: ";
    cin >> qnt;
    cout << "Dinheiro recebido: ";
    cin >> dinheiroRecebido;

    valorTotal = precoUn * qnt;

    cout << fixed << setprecision(2);
    if (dinheiroRecebido >= valorTotal){
        troco = dinheiroRecebido - valorTotal;
        cout << "TROCO = " << troco << endl;
    }else {
        troco = valorTotal - dinheiroRecebido;
        cout << "DINHEIRO INSUFICIENTE, FALTAM " << troco << " REAIS" << endl;
    };

    return 0;
}
