#include <bits/stdc++.h>

using namespace std;

int main()
{
    double glicose;

    cout << "Digite a quantidade de glicose: ";
    cin >> glicose;

    if (glicose >=0 && glicose <=100){
        cout << "Normal" << endl;
    }else if (glicose <=140){
        cout << "Elevado" << endl;
    }else {
        cout << "Diabetes" << endl;
    };

    return 0;
}
