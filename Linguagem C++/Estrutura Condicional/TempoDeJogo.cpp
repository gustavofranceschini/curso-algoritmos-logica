#include <bits/stdc++.h>

using namespace std;

int main()
{
    int horaFinal,horaInicial,duracao;

    cout << "Hora inicial: ";
    cin >> horaInicial;
    cout << "Hora final: ";
    cin >> horaFinal;

    if (horaInicial > horaFinal){
        duracao = (24-horaInicial) + horaFinal;
    }else if (horaInicial < horaFinal) {
        duracao = horaFinal - horaInicial;
    }else {
        duracao = 24;
    };
    cout << "O jogo durou " << duracao << " hora(s)" << endl;


    return 0;
}
