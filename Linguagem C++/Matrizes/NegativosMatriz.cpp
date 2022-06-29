#include <iostream>

using namespace std;

int main()
{
    int m,n;

    cout << "Qual a quantidade de linhas da matriz? ";
    cin >> m;
    cout << "Qual a quantidade de colunas da matriz? ";
    cin >> n;

    int mat[m][n];

    /// Lendo a matriz
    for (int i=0;i<=m-1;i++){
        for (int j=0;j<=n-1;j++){
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];
        };
    };

    /// Imprimindo os valores negativos
    cout << "Valores Negativos:" << endl;
    for (int i=0;i<=m-1;i++){
        for (int j=0;j<=n-1;j++){
            if (mat[i][j] < 0){
                cout << mat[i][j] << endl;
            };
        };
    };

    return 0;
}
