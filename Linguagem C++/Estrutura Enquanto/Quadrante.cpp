#include <iostream>

using namespace std;

int main()
{

    double x,y;

    cout << "Digite os valores das coordenadas X e Y:" << endl;
    cin >> x;
    cin >> y;

    while (x != 0 && y != 0){
        if (x>0 && y>0){
            cout << "Quadrante 1" << endl;
        }else if (x<0 && y>0){
            cout << "Quadrante 2" << endl;
        }else if (x<0 && y<0){
            cout << "Quadrante 3" << endl;
        }else {
            cout << "Quadrante 4" << endl;
        };


        cout << "Digite os valores das coordenadas X e Y:" << endl;
        cin >> x;
        cin >> y;
    };

    return 0;
}
