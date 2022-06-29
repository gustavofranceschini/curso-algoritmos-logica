#include <bits/stdc++.h>

using namespace std;

int main()
{
    int idades,soma,cont;
    double media;

    cout << "Digite as idades:" << endl;
    cin >> idades;

    if (idades <=0){
        cout << "IMPOSSIVEL CALCULAR" << endl;
    }else {
        soma = 0;
        cont = 0;


    while (idades > 0){
        soma = soma + idades;
        cont++;
        cin >> idades;
     };


    media = (double)soma / cont;
    cout << fixed << setprecision(2);
    cout << "MEDIA = " << media << endl;

    };


    return 0;
}
