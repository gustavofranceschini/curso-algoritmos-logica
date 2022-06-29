#include <bits/stdc++.h>

using namespace std;

int main()
{

    double a,b,c,areaQuadrado,areaTriangulo,areaTrapezio;

    cout << "Digite a medida A: ";
    cin >> a;
    cout << "Digite a medida B: ";
    cin >> b;
    cout << "Digite a medida C: ";
    cin >> c;

    areaQuadrado = pow(a,2);
    areaTriangulo = (a*b) / 2;
    areaTrapezio = ((a+b)*c) / 2;

    cout << fixed << setprecision(4);
    cout << "AREA DO QUADRADO: " << areaQuadrado << endl;
    cout << "AREA DO TRIANGULO: " << areaTriangulo << endl;
    cout << "AREA DO TRAPEZIO: " << areaTrapezio << endl;


    return 0;
}
