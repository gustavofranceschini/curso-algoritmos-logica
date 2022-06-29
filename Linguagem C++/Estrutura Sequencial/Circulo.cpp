#include <bits/stdc++.h>

using namespace std;

int main()
{

    double raio,area;
    double pi = 3.14159;

    cout << "Digite o valor do raio do circulo: ";
    cin >> raio;

    area = pi*(pow(raio,2));

    cout << fixed << setprecision(3);
    cout << "AREA = " << area << endl;

    return 0;
}
