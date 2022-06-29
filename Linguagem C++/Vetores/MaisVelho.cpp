#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,maior,posMaior;

    cout << "Quantas pessoas voce vai digitar? ";
    cin >> n;

    int idades[n];
    string nomes[n];

    /// Lendo o vetor
    for (int i=0;i<=n-1;i++){
        cout << "Dados da " << i+1 << "a pessoa:" << endl;
        cout << "Nome: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin,nomes[i]);
        cout << "Idade: ";
        cin >> idades[i];
    };

    ///Achando a pessoa mais velha
    posMaior = 0;
    maior = idades[0];
    for (int i=1;i<=n-1;i++){
        if (idades[i] > maior){
            maior = idades[i];
            posMaior = i;
        };
    };

    // Imprimindo a pessoa mais velha
    cout << "PESSOA MAIS VELHA: " << nomes[posMaior] << endl;

    return 0;
}
