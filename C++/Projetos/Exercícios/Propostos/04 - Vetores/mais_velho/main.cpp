#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int N, maisVelho;

    cout << "Quantas pessoas voce vai digitar? ";
    cin >> N;

    string nomes[N];
    int idades[N];

    for (int i = 0 ; i < N; i++){
        cout << "Dados da " << i+1 << "a pessoa:" << endl;
        cout << "Nome: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin, nomes[i]);
        cout << "Idade: ";
        cin >> idades[i];
    }

    maisVelho = 0;
    for (int i = 0; i < N; i++){
        if (idades[i] > idades[maisVelho]){
            maisVelho = i;
        }
    }

    cout << "PESSOA MAIS VELHA: " << nomes[maisVelho] << endl;

    return 0;
}
