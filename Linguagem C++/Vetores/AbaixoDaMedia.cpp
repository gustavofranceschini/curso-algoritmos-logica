#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    double soma,media;

    cout << "Quantos elementos vai ter o vetor? ";
    cin >> n;

    double vet[n];

    // Lendo o vetor
    for (int i=0;i<=n-1;i++){
        cout << "Digite um numero: ";
        cin >> vet[i];
    };

    cout << endl;
    //Fazendo a soma e a media do vetor
    for (int i=0;i<=n-1;i++){
        soma = soma + vet[i];
    };
    media = soma / n;
    cout << fixed << setprecision(3);
    cout << "MEDIA DO VETOR = " << media << endl;

    //Imprimindo os elemento abaixo da média
    cout << "ELEMENTOS ABAIXO DA MEDIA:" << endl;
    for (int i=0;i<=n-1;i++){
        if (vet[i] < media){
            cout << fixed << setprecision(1);
            cout << vet[i] << endl;
        };
    };

    return 0;
}
