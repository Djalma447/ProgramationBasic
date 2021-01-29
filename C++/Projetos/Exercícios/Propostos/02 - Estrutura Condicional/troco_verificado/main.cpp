#include <bits/stdc++.h>

using namespace std;

int main()
{
    double precoUnitario, dinheiro, total, troco, resto;
    int quantidade;

    cout << "Preço unitario do produto: ";
    cin >> precoUnitario;
    cout << "Quantidade comprada: ";
    cin >> quantidade;
    cout << "Dinheiro recebido: ";
    cin >> dinheiro;

    total = precoUnitario * quantidade;

    cout << fixed << setprecision(2);

    if (dinheiro < total){
        resto = total - dinheiro;
        cout << "DINHEIRO INSUFICIENTE. FALTAM " << resto << " REAIS" << endl;
    }
    else{
        troco = dinheiro - total;
        cout << "TROCO = " << troco << endl;
    }

    return 0;
}
