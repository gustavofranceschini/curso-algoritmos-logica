#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cout << "Quantos alunos serao digitados? ";
    cin >> n;

    string nomes[n];
    double n1[n];
    double n2[n];
    double media[n];
    double soma[n];

    /// Lendo os vetores
    for (int i=0;i<=n-1;i++){
        cout << "Digite nome, primeira e segunda nota do " << i+1 << "o aluno:" << endl;
        cin.ignore(INT_MAX, '\n');
        getline(cin,nomes[i]);
        cin >> n1[i];
        cin >> n2[i];
    };

    /// Fazendo a média de cada aluno
    soma[n] = 0;
    for (int i=0;i<=n-1;i++){
        soma[i] = n1[i] + n2[i];
        media[i] = soma[i] / 2;
    };

    /// Imprimindo apenas os alunos aprovados (Acima ou igual a 6.0)
    cout << "Alunos aprovados:" << endl;
    for (int i=0;i<=n-1;i++){
        if (media[i] >= 6.00){
            cout << nomes[i] << endl;
        };
    };

    return 0;
}
