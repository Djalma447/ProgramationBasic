#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, soma, quantidade;
    double media;

    cout << "Digite as idades:" << endl;
    cin >> x;

    soma = 0;
    quantidade = 0;

    while (x > 0){
        soma = soma + x;
        quantidade++;
        cin >> x;
    }

    if (quantidade == 0){
        cout << "IMPOSSIVEL CALCULAR" << endl;
    }
    else{
        media = (double)soma / quantidade;
        cout << fixed << setprecision(2);
        cout << "MEDIA = " << media << endl;
    }

    return 0;
}
