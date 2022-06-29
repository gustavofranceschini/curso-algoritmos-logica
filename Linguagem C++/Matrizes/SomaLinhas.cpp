#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m,n;

    cout << "Qual a quantidade de linhas da matriz? ";
    cin >> m;
    cout << "Qual a quantidade de colunas da matriz? ";
    cin >> n;

    double mat[m][n];

    /// Lendo a matriz
    for (int i=0;i<=m-1;i++){
        cout << "Digite os elementos da " << i+1 << "a. linha: " << endl;
        for (int j=0;j<=n-1;j++){
            cin >> mat[i][j];
        };
    };

    /// Somando as linhas e gerando o vetor
    double vet[n];

    cout << "VETOR GERADO:" << endl;
    for (int i=0;i<=m-1;i++){
        vet[i] = 0;
        for (int j=0;j<=n-1;j++){
            vet[i] = vet[i] + mat[i][j];
        };
        cout << fixed << setprecision(1);
        cout << vet[i] << endl;
    };

    return 0;
}
