#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,posMaior;
    double maior;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> n;

    double vet[n];

    //Lendo o vetor
    for (int i=0;i<=n-1;i++){
        cout << "Digite um numero: ";
        cin >> vet[i];
    };

    cout << endl;
    //Achando o maior valor e sua posição
    maior = vet[0];
    posMaior = 0;
    for (int i=1;i<=n-1;i++){
        if (vet[i] > maior){
            maior = vet[i];
            posMaior = i;
        };
    };

    cout << fixed << setprecision(1);
    cout << "MAIOR VALOR = " << maior << endl;
    cout << "POSICAO DO MAIOR VALOR = " << posMaior << endl;

    return 0;
}
