#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,contF,contM;
    double menor,maior,soma,media;


    cout << "Quantas pessoas serao digitadas? ";
    cin >> n;

    double alturas[n];
    char genero[n];



    /// Lendo o vetor
    for (int i=0;i<=n-1;i++){
        cout << "Altura da " << i+1 << "a pessoa: ";
        cin >> alturas[i];
        cout << "Genero da " << i+1 << "a pessoa: ";
        cin >> genero[i];

        while (genero[i] != 'M' && genero[i] != 'F'){
            cout << "Genero invalido.. Digite 'F' ou 'M': ";
            cin >> genero[i];
        };
    };

    /// Achando a menor altura
    menor = alturas[0];
    for (int i=1;i<=n-1;i++){
        if (alturas[i] < menor ){
            menor = alturas[i];
        };
    };

    /// Achando a maior altura
    maior = alturas[0];
    for (int i=1;i<=n-1;i++){
        if (alturas[i] > maior){
            maior = alturas[i];
        };
    };

    /// Imprimindo a menor e maior altura
    cout << fixed << setprecision(2);
    cout << "Menor altura = " << menor << endl;
    cout << "Maior altura = " << maior << endl;

    /// Fazendo a media de alturas das mulheres
    soma = 0;
    media = 0;
    for (int i=0;i<=n-1;i++){
        if  (genero[i] == 'F'){
                contF++;
                soma = soma + alturas[i];
        };
    };
    media = soma / contF;
    cout << fixed << setprecision(2);
    cout << "MEDIA DAS ALTURAS DAS MULHERES = " << media << endl;

    /// Achando o numero de homens
    contM = 0;
    contM = n - contF;
    cout << "Numero de homens: " << contM << endl;

    return 0;
}
