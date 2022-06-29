#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a,b,c,x1,x2,delta;

    cout << "Coeficiente A: ";
    cin >> a;
    cout << "Coeficiente B: ";
    cin >> b;
    cout << "Coeficiente C: ";
    cin >> c;

    delta = pow(b,2) - (4*a*c);

    cout << fixed << setprecision(4);
    if (delta > 0 && a != 0){
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        cout << "X1 = " << x1 << endl;
        cout << "X2 = " << x2 << endl;
    }else {
        cout << "Esta equacao nao possui raizes reais" << endl;
    };

    return 0;
}
