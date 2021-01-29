#include <iostream>

using namespace std;

int main()
{
    int N, pares;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> N;

    int vet[N];

    for (int i = 0; i < N; i++){
        cout << "Digite um numero: ";
        cin >> vet[i];
    }

    cout << endl << "NUMEROS PARES:" << endl;
    for (int i = 0; i < N; i++){
        if (vet[i] % 2 == 0){
            cout << vet[i] << " ";
        }
    }

    pares = 0;
    for (int i = 0 ; i < N; i++){
        if (vet[i] % 2 == 0){
            pares++;
        }
    }

    cout << endl << endl << "QUANTIDADE DE PARES = " << pares << endl;

    return 0;
}
