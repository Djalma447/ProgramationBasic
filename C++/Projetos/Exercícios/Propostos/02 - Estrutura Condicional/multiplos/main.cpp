#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout << "Digite dois numeros inteiros:" << endl;
    cin >> a >> b;

    if (a % b == 0 || b % a == 0){
        cout << "Sao multiplos" << endl;
    }
    else {
        cout << "Nao sao multiplos" << endl;
    }

    return 0;
}
