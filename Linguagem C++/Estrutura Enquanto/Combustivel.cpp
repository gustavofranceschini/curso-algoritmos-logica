#include <iostream>

using namespace std;

int main()
{
    int codigo,alcool,gasolina,diesel;

    cout << "Informe um codigo (1,2,3) ou 4 para parar: ";
    cin >> codigo;

    alcool = 0;
    gasolina = 0;
    diesel = 0;

    while (codigo != 4){
        switch (codigo){

        case 1:
            alcool++;
            break;
        case 2:
            gasolina++;
            break;
        case 3:
            diesel++;
            break;

        default:
         cout << "Codigo invalido" << endl;

        };
        cout << "Informe um codigo (1,2,3) ou 4 para parar: ";
        cin >> codigo;
    };

    cout << "MUITO OBRIGADO" << endl;
    cout << "ALCOOL = " << alcool << endl;
    cout << "GASOLINA = " << gasolina << endl;
    cout << "DIESEL = " << diesel << endl;

    return 0;
}
