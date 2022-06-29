#include <bits/stdc++.h>

using namespace std;

int main()
{
    double d1,d2,d3,maior;

    cout << "Digite as tres distancias:" << endl;
    cin >> d1;
    cin >> d2;
    cin >> d3;

    maior = 0;
    if (d1 > d2 && d1 > d3){
        maior = d1;
    }else if(d2 > d3){
        maior = d2;
    }else{
        maior = d3;
    };
    cout << fixed << setprecision(2);
    cout << "MAIOR DISTANCIA: " << maior << endl;

    return 0;
}
