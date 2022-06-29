#include <bits/stdc++.h>

using namespace std;

int main()
{
    int horas;
    double valorHora,salario;
    string nome;

    cout << "Nome: ";
    getline(cin,nome);
    cout << "Valor por hora: ";
    cin >> valorHora;
    cout << "Horas trabalhadas: ";
    cin >> horas;

    salario = valorHora * horas;

    cout << fixed << setprecision(2);
    cout << "O pagamento para " << nome << " deve ser " << salario;


    return 0;
}
