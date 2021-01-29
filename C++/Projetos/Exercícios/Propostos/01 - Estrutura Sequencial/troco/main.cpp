#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double precoUnitario, dinheiro, total, troco;
    int quantidade;

    cout << "Preço unitario do produto: ";
    cin >> precoUnitario;
    cout << "Quantidade comprada: ";
    cin >> quantidade;
    cout << "Dinheiro recebido: ";
    cin >> dinheiro;

    total = precoUnitario * quantidade;
    troco = dinheiro - total;

    cout << fixed << setprecision(2);
    cout << "TROCO = " << troco << endl;

    return 0;
}
