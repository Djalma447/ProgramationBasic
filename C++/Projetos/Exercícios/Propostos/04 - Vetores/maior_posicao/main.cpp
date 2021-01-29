#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int N, posicaoMaior;
    double maior;

    cout << "Quanto numeros voce vai digitar? ";
    cin >> N;

    double vet[N];

    for (int i = 0; i < N; i++){
        cout << "Digite um numero: ";
        cin >> vet[i];
    }

    maior = vet[0];
    posicaoMaior = 0;
    for (int i = 1; i < N; i++){
        if (vet[i] > maior){
            maior = vet[i];
            posicaoMaior = i;
        }
    }

    cout << fixed << setprecision(1);
    cout << endl << "MAIOR VALOR = " << maior << endl;
    cout << "POSICAO DO MAIOR VALOR = " << posicaoMaior << endl;

    return 0;
}
