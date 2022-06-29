#include <iostream>

using namespace std;

int main()
{
    int x,soma;

    cout << "Digite um numero inteiro: ";
    cin >> x;
    if (x % 2 != 0){
        x = x+1;
    };

    while (x != 0){
        soma = 5*x + 20;
        cout << "SOMA = " << soma << endl;
        cout << "Digite um numero inteiro: ";
        cin >> x;
    };

    return 0;
}
