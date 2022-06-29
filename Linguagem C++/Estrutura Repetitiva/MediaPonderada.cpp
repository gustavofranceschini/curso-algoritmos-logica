#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    double n1,n2,n3,media;

    cout << "Quantos casos voce vai digitar? ";
    cin >> n;

    for (int i=1;i<=n;i++){
        cout << "Digite tres numeros:" << endl;
        cin >> n1;
        cin >> n2;
        cin >> n3;
        media = (n1*2+n2*3+n3*5) / 10;
        cout << fixed << setprecision(1);
        cout << "MEDIA = " << media << endl;
    };

    return 0;
}
