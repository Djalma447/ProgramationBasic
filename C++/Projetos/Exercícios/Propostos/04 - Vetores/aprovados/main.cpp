#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int N;

    cout << "Quantos alunos serao digitados? ";
    cin >> N;

    string nomes[N];
    double notas1[N], notas2[N];

    for (int i = 0; i < N; i++){
        cout << "Digite nome, primeira e segunda nota do " << i+1 << "o aluno:" << endl;
        cin.ignore(INT_MAX, '\n');
        getline(cin, nomes[i]);
        cin >> notas1[i] >> notas2[i];
    }

    double medias[N];
    for (int i = 0; i < N; i++){
        medias[i] = (notas1[i] + notas2[i]) / 2;
    }

    cout << "Alunos aprovados:" << endl;
    for (int i = 0; i < N; i++){
        if (medias[i] >= 6.0){
            cout << nomes[i] << endl;
        }
    }

    return 0;
}
