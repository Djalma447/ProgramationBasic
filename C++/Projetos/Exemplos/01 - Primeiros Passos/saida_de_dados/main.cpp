#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "Bom dia";
    cout << "Boa noite";

    cout << "Bom dia" << endl;
    cout << "Boa noite" << endl;

    int x, y;
    x = 10;
    y = 20;
    cout << x << endl;
    cout << y << endl;

    double a;
    x = 2.3456;
    cout << fixed << setprecision(2) << a << endl;

    int idade;
    double salario;
    string nome;
    char sexo;

    idade = 32;
    salario = 4560.9;
    nome = "Maria Silva";
    sexo = 'F';

    cout << "A funcionaria " << nome << ", sexo " << sexo
         << ", ganha " << salario << " e tem " << idade << " anos." << endl;

    return 0;
}
