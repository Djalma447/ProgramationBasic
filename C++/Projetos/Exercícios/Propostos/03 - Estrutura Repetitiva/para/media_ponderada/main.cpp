#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    double nota1, nota2, nota3, media;

    cout << "Quantos casos voce vai digitar? ";
    cin >> N;

    for (int i = 1; i <= N; i++){
        cout << "Digite tres numeros:" << endl;
        cin >> nota1 >> nota2 >> nota3;
        media = (nota1 * 2 + nota2 * 3 + nota3 * 5) / 10;
        cout << fixed << setprecision(1);
        cout << "MEDIA = " << media << endl;
    }

    return 0;
}
