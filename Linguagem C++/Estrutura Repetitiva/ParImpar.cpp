#include <iostream>

using namespace std;

int main()
{
    int n,x;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> n;

    for (int i=1;i<=n;i++){

        cout << "Digite um numero: ";
        cin >> x;

        if (x%2==0 && x>0){
            cout << "PAR POSITIVO" << endl;
        }else if (x%2==0 && x<0){
            cout << "PAR NEGATIVO" << endl;
        }else if(x%2!=0 && x>0){
            cout << "IMPAR POSITIVO" << endl;
        }else if (x%2!=0 && x<0){
            cout << "IMPAR NEGATIVO" << endl;
        }else{
            cout << "NULO" << endl;
        };
    };

    return 0;
}
