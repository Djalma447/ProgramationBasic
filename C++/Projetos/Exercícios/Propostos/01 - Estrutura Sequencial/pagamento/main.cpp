#include <bits/stdc++.h>

using namespace std;

int main()
{
    string nome;
    double valor, total;
    int horas;

    cout << "Nome: ";
    getline(cin, nome);
    cout << "Valor por hora: ";
    cin >> valor;
    cout << "Horas trabalhadas: ";
    cin >> horas;

    total = valor * horas;

    cout << fixed << setprecision(2);
    cout << "O pagamento para " << nome << " deve ser " << total << endl;

    return 0;
}
