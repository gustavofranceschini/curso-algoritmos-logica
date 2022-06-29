#include <bits/stdc++.h>


using namespace std;

int main()
{

    int n,cont;
    double soma,media,porcentagem;

    cout << "Quantas pessoas serao digitadas? ";
    cin >> n;

    int idades[n];
    string nomes[n];
    double alturas[n];

    for (int i=0;i<n;i++){
        cout << "Dados da " << i+1 << "a pessoa:" << endl;
        cout << "Nome: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin,nomes[i]);
        cout << "Idade: ";
        cin >> idades[i];
        cout << "Altura: ";
        cin >> alturas[i];
    };



    // Achando a altura médoa
    soma = 0;
    for (int i=0;i<n;i++){
        soma = soma + alturas[i];
    };
    media = soma / n;

    cout << fixed << setprecision(2);
    cout << "\nAltura media = " << media << endl;

    // Pessoas com menos de 16 anos
    cont = 0;
    for (int i=0;i<n;i++){
        if (idades[i] < 16){
            cont++;
        };
    };
    porcentagem = (cont * 100.0) / n;
    cout << fixed << setprecision(2);
    cout << "Porcentagem de pessoas com menos de 16 anos: "
    << porcentagem << "%" << endl;

    // Imprimindo o nome das pessoas com menos de 16 anos
    for (int i=0;i<n;i++){
        if (idades[i] < 16){
            cout << nomes[i] << endl;
        };
    };

    return 0;
}
