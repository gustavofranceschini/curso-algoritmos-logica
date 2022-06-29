#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Quantos valores vai ter cada vetor? ";
    cin >> n;

    int vetA[n];
    int vetB[n];
    int vetC[n];

    // Lendo o vetor A
    cout << "Digite os valores do vetor A:" << endl;
    for (int i=0;i<=n-1;i++){
        cin >> vetA[i];
    };

    // Lendo o vetor B
    cout << "Digite os valores do vetor B:" << endl;
    for (int i=0;i<=n-1;i++){
        cin >> vetB[i];
    };

    // Somando os vetores A e B
    for (int i=0;i<=n-1;i++){
        vetC[i] = vetA[i] + vetB[i];
    };

    // Imprimindo o vetor C
    cout << "VETOR RESULTANTE:" << endl;
    for (int i=0;i<=n-1;i++){
        cout << vetC[i] << endl;
    };

    return 0;
}
