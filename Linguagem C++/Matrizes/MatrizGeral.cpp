#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,linha,coluna;
    double soma;

    cout << "Qual a ordem da matriz? ";
    cin >> n;

    double mat[n][n];

    /// Lendo a matriz
    for (int i=0;i<=n-1;i++){
        for (int j=0;j<=n-1;j++){
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];
        };
    };

    /// Soma dos positivos
    soma = 0;
    for (int i=0;i<=n-1;i++){
        for (int j=0;j<=n-1;j++){
            if (mat[i][j] > 0){
                soma = soma + mat[i][j];
            };
        };
    };

    cout << endl;

    cout << fixed << setprecision(1);
    cout << "SOMA DOS POSITIVOS: " << soma << endl;

    cout << endl;

    /// Imprimindo a linha escolha
    cout << "Escolha uma linha: ";
    cin >> linha;
    cout << "LINHA ESCOLHIDA: ";
    for (int j=0;j<=n-1;j++){
        cout << mat[linha][j] << "  ";
    };

    cout << endl << endl;

    /// Imprimindo a coluna escolha
    cout << "Escolha uma coluna: ";
    cin >> coluna;
    cout << "LINHA ESCOLHIDA: ";
    for (int i=0;i<=n-1;i++){
        cout << mat[i][coluna] << "  ";
    };

    cout << endl << endl;

    /// Imprimindo a diagonal principal
    cout << "DIAGONAL PRINCIPAL: ";
    for (int i=0;i<=n-1;i++){
        for (int j=0;j<=n-1;j++){
            if (j == i){
                cout << mat[i][j] << "  ";
            };
        };
    };

    cout << endl << endl;

    /// Elevando ao quadrado os elementos negativos da matriz
    for (int i=0;i<=n-1;i++){
        for (int j=0;j<=n-1;j++){
            if (mat[i][j] < 0){
                mat[i][j] = pow (mat[i][j],2);
            };
        };
    };

    /// Imprimindo a matriz altera
    cout << "MATRIZ ALTERADA:" << endl;
    for (int i=0;i<=n-1;i++){
        for (int j=0;j<=n-1;j++){
            cout << mat[i][j] << "  ";
        };
        cout << endl;
    };

    return 0;
}
