#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> n;

    int vet[n];

    //Lendo o vetor
    for (int i=0;i<=n-1;i++){
        cout << "Digite um numero: ";
        cin >> vet[i];
    };

    //Imprimindo os numeros negativos
    cout << "NUMEROS NEGATIVOS:" << endl;
    for (int i=0;i<=n-1;i++){
        if (vet[i]<0){
            cout << vet[i] << endl;
        };
    };

    return 0;
}
