#include <iostream>

using namespace std;

int main()
{
    int n,x,contDentro,contFora;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> n;

    contDentro = 0;
    contFora = 0;
    for (int i=n;i<=x;i++){
        cout << "Digite um numero: ";
        cin >> x;
        if (x>=10 && x<=20){
           contDentro++;
        }else {
           contFora++;
        };
    };

    cout << "DENTRO = " << contDentro << endl;
    cout << "FORA = " << contFora << endl;

    return 0;
}
