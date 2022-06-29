#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double base,altura,area, perimetro, diagonal;

    cout << "Base do retangulo: " ;
    cin >> base;
    cout << "Altura do retangulo: ";
    cin >> altura;

    area = altura * base;
    perimetro = (2 * base) + (2 * altura);
    diagonal  = sqrt(pow(base,2) + pow(altura,2));

    cout << fixed << setprecision(4) << endl;
    cout << "Area = " << area << endl;
    cout << "Perimetro = " << perimetro << endl;
    cout << "Diagonal = " << diagonal << endl;

    return 0;
}
