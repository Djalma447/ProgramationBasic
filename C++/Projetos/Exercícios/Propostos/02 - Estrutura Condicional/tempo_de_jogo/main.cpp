#include <iostream>

using namespace std;

int main()
{
    int inicio, fim, duracao;

    cout << "Hora inicial: ";
    cin >> inicio;
    cout << "Hora final: ";
    cin >> fim;

    if (inicio < fim){
        duracao = fim - inicio;
    }
    else {
        duracao = 24 - inicio + fim;
    }

    cout << "O JOGO DUROU " << duracao << " HORA(S)" << endl;

    return 0;
}
