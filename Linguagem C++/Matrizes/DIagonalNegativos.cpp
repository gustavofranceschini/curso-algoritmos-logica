#include <iostream>

using namespace std;

int main()
{

    int n,cont;

    cout << "Qual a ordem da matriz? ";
    cin >> n;

    int mat[n][n];

    for (int i=0;i<=n-1;i++){
        for (int j=0;j<=n-1;j++){
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];
        };
    };

    cout << "DIAGONAL PRINCIPAL:" << endl;

    for (int i=0;i<=n-1;i++){
        for (int j=0;j<=n-1;j++){
            if (i == j){
                cout << mat[i][j] << " ";
            };
        };
    };
    cout << endl;

    // Quantidade de negativos
    cont = 0;
    for (int i=0;i<=n-1;i++){
        for (int j=0;j<=n-1;j++){
            if (mat[i][j] < 0){
                cont++;
            };
        };
    };
    cout << "QUANTIDADE DE NEGATIVOS: " << cont << endl;


    return 0;
}
