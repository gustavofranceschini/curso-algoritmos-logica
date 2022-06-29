#include <iostream>

using namespace std;

int main()
{
    int n,maior;

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

    /// Imprimindo o maior elemento de cada linha
    maior = 0;
    cout << "Maior elemento de cada linha:" << endl;
    for (int i=0;i<=n-1;i++){
        maior=0;
        for (int j=0;j<=n-1;j++){
            if (mat[i][j] > maior){
                maior = mat[i][j];
            };
        };
        cout << maior << endl;
    };

    return 0;
}
