#include <bits/stdc++.h>

using namespace std;

int main()
{
    int distancia;
    double combustivel, consumo;

    cout << "Distancia percorrida: ";
    cin >> distancia;
    cout << "Combustível gasto: ";
    cin >> combustivel;

    consumo = distancia / combustivel;

    cout << fixed << setprecision(3);
    cout << "Consumo medio = " << consumo << endl;

    return 0;
}
