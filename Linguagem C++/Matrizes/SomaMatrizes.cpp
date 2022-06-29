#include <iostream>

using namespace std;

int main()
{
    int m,n;

    cout << "Quantas linhas vai ter cada matriz? ";
    cin >> m;
    cout << "Quantas colunas vai ter cada matriz? ";
    cin >> n;

    int matA[m][n];
    int matB[m][n];
    int matSoma[m][n];

    /// Lendo a matriaz A
    cout << "Digite os valores da matriz A:" << endl;
    for (int i=0;i<=m-1;i++){
        for (int j=0;j<=n-1;j++){
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> matA[i][j];
        };
    };

    /// Lendo a matriaz B
    cout << "Digite os valores da matriz B:" << endl;
    for (int i=0;i<=m-1;i++){
        for (int j=0;j<=n-1;j++){
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> matB[i][j];
        };
    };

    /// Fazendo a soma dos elementos da matriz
    for (int i=0;i<=m-1;i++){
        for (int j=0;j<=n-1;j++){
            matSoma[i][j] = matA[i][j] + matB[i][j];
        };
    };

    /// Imprimindo a soma dos elementos da matriz
    cout << "MATRIZ SOMA:" << endl;
    for (int i=0;i<=m-1;i++){
        for (int j=0;j<=n-1;j++){
            cout << matSoma[i][j] << " ";
        };
        cout << endl;
    };

    return 0;
}
