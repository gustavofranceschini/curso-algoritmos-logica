#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,soma,cont;
    double media;

    cout << "Quantos elementos vai ter o vetor? ";
    cin >> n;

    int vet[n];

    //Lendo o vetor
    for (int i=0;i<=n-1;i++){
        cout << "Digite um numero: ";
        cin >> vet[i];
    };

    ///Media dos pares
    cont = 0;
    soma = 0;
    for (int i=0;i<=n-1;i++){
        if (vet[i]%2==0){
            soma = soma + vet[i];
            cont++;
        };
    };

        if (cont > 0){
            media = (double)soma / cont;
             cout << fixed << setprecision(1);
             cout << "MEDIA DOS PARES = " << media << endl;
        }else{
            cout << "NENHUM NUMERO PAR" << endl;

        };

    return 0;
}
