#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    double soma,media;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> n;

    double vet[n];

    // Lendo o vetor
    for (int i=0;i<=n-1;i++){
        cout << "Digite um numero: ";
        cin >> vet[i];
    };

    // Imprimindo o vetor
    cout << "VALORES = ";
    for (int i=0;i<=n-1;i++){
        cout << fixed << setprecision(1);
        cout << vet[i] << "  ";
    };
    cout << endl;

    // Soma e media dos vetores
    soma = 0;
    media = 0;
    for (int i=0;i<=n-1;i++){
        soma = soma + vet[i];
    };

    media = soma / n;
    cout << fixed << setprecision(2);
    cout << "SOMA = " << soma << endl;
    cout << "MEDIA = " << media << endl;


    return 0;
}
