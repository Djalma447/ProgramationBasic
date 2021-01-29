#include <iostream>

using namespace std;

int main()
{
    int N, x;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        cout << "Digite um numero: ";
        cin >> x;
        if (x == 0)
        {
            cout << "NULO" << endl;
        }
        else if (x % 2 == 0)
        {
            cout << "PAR ";
            if (x > 0)
            {
                cout << "POSITIVO" << endl;
            }
            else
            {
                cout << "NEGATIVO" << endl;
            }
        }
        else
        {
            cout << "IMPAR ";
            if (x > 0)
            {
                cout << "POSITIVO" << endl;
            }
            else
            {
                cout << "NEGATIVO" <<  endl;
            }
        }
    }

    return 0;
}
