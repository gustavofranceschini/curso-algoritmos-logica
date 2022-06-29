#include <iostream>

using namespace std;

int main()
{
    int n,cont;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> n;

    int vet[n];

    // Lendo vetor
    for (int i=0;i<=n-1;i++){
        cout << "Digite um numero: ";
        cin >> vet[i];
    };

    cout << endl;

    // Imprimindo os nuemros pares
    cont =0;
    cout << "NUMEROS PARES:" << endl;
    for (int i=0;i<=n-1;i++){
        if (vet[i]%2==0){
            cout << vet[i] << "  ";
            cont++;
        };
    };
    cout << endl;
    cout << endl;
    cout << "QUANTIDADE DE PARES = " << cont << endl;

    return 0;
}
