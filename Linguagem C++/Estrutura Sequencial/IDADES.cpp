#include <bits/stdc++.h>


using namespace std;

int main()
{
    int idade1,idade2;
    string nome1,nome2;
    double media;

    cout << "Dados da primeira pessoa:" << endl;
    cout << "Nome 1: ";
    getline(cin,nome1);
    cout << "Idade 1: ";
    cin >> idade1;

    cout << "Dados da segunda pessoa:" << endl;
    cout << "Nome 2: ";
    cin.ignore(INT_MAX, '\n');
    getline(cin,nome2);
    cout << "Idade 2: ";
    cin >> idade2;

    media  = (idade1 + idade2) / 2.00;
    cout << "A media de idade entre " << nome1 <<
     " e " << nome2 << " e de " << media <<
      " anos." << endl;


    return 0;
}
