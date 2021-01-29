#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    double soma, media;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> N;

    double vet[N];

    for (int i = 0; i < N; i++){
        cout << "Digite um numero: ";
        cin >> vet[i];
    }

    cout << fixed << setprecision(1);
    cout << endl << "Valores = ";
    for (int i = 0; i < N; i++){
        cout << vet[i] << " ";
    }

    soma = 0;
    for (int i = 0; i < N; i++){
        soma = soma + vet[i];
    }
    cout << fixed << setprecision(2);
    cout << endl << "SOMA = " << soma << endl;
    media = soma / N;
    cout << "MEDIA = " << media << endl;

    return 0;
}
