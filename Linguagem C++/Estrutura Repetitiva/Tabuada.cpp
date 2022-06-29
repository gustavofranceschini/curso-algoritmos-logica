#include <iostream>

using namespace std;

int main()
{
    int n,soma;

    cout << "Deseja a tabuada para qual valor? ";
    cin >> n;

    for (int i=1 ; i<=10 ; i++){
        soma = n*i;
        cout << n << " x " << i << " = " << soma << endl;
    };


    return 0;
}
