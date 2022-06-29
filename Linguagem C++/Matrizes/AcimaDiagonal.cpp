#include <iostream>

using namespace std;

int main()
{
    int n,soma;

    cout << "Qual a ordem da matriz? ";
    cin >> n;

    int mat[n][n];

    /// Lendo a matriz
    for (int i=0;i<=n-1;i++){
        for (int j=0;j<=n-1;j++){
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];
        };
    };

    /// Fazendo a soma dos elementos acima da diagonal principal
    soma = 0;
    for (int i=0;i<=n-1;i++){
        for (int j=0;j<=n-1;j++){
            if (j > i){
                soma = soma + mat[i][j];
            };
        };
    };
    cout << "SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = " << soma << endl;

    return 0;
}
