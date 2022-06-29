#include <bits/stdc++.h>

using namespace std;

int main()
{
    double n1,n2,media;

    cout << "Digite a primeira nota: ";
    cin >> n1;

    while (n1 <0 || n1 >10){
        cout << "Valor invalido.. Tente novamente: ";
        cin >> n1;
    };

    cout << "Digite a segunda nova: ";
    cin >> n2;

    while (n2 <0 || n2 >10){
        cout << "Valor invalido.. Tente novamente: ";
        cin >> n2;
    };

    media = (n1+n2)/ 2;
    cout << fixed << setprecision(2);
    cout << "MEDIA = " << media << endl;

    return 0;
}
