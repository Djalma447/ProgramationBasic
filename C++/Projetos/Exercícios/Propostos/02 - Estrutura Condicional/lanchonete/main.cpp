#include <bits/stdc++.h>

using namespace std;

int main()
{
    int codigo, quantidade;
    double valor;

    cout << "Codigo do produto comprado: ";
    cin >> codigo;
    cout << "Quantidade comprada: ";
    cin >> quantidade;

    if (codigo == 1){
        valor = quantidade * 5.0;
    }
    else if (codigo == 2){
        valor = quantidade * 3.5;
    }
    else if (codigo == 3){
        valor = quantidade * 4.8;
    }
    else if (codigo == 4){
        valor = quantidade * 8.9;
    }
    else {
        valor = quantidade * 7.32;
    }

    cout << fixed << setprecision(2);
    cout << "Valor a pagar: R$ " << valor << endl;

    return 0;
}
