#include <bits/stdc++.h>

using namespace std;

int main()
{
    char temperatura;
    double f,c;

    cout << "Voce vai digitar a temperatura em qual escala (C/F)? ";
    cin >> temperatura;

    c = 0;
    f = 0;
    cout << fixed << setprecision(2);
    if (temperatura == 'C'){
        cout << "Digite a temperatura em Celsius: ";
        cin >> c;
        f = c * 9/5 + 32;
        cout << "Temperatura equivalente em Fahrenheit: " << f << endl;
    }else {
        cout << "Digite a temperatura em Fahrenheit: ";
        cin >> f;
        c = (f-32) * 5/9;
        cout << "Temperatura equivalente em Celsius: " << c << endl;
    };

    return 0;
}
