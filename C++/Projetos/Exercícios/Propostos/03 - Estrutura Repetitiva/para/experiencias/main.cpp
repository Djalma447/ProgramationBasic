#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int N, quantidade, ratos, sapos, coelhos, totalCobaias;
    double percentualRatos, percentualSapos, percentualCoelhos;
    char tipoCobaia;

    cout << "Quantos casos de teste serao digitados? ";
    cin >> N;

    ratos = 0;
    sapos = 0;
    coelhos = 0;
    totalCobaias = 0;

    for (int i = 1; i <= N; i++){
        cout << "Quantidade de cobaias: ";
        cin >> quantidade;
        cout << "Tipo de cobaia: ";
        cin >> tipoCobaia;
        if (tipoCobaia == 'R'){
            ratos = ratos + quantidade;
        }
        else if (tipoCobaia == 'S'){
            sapos = sapos + quantidade;
        }
        else {
            coelhos = coelhos + quantidade;
        }
        totalCobaias = totalCobaias + quantidade;
    }

    percentualRatos = ratos * 100.0 / totalCobaias;
    percentualSapos = sapos * 100.0 / totalCobaias;
    percentualCoelhos = coelhos * 100.0 / totalCobaias;

    cout << endl << "RELATORIO FINAL:" << endl;
    cout << "Total: " << totalCobaias << " cobaias" << endl;
    cout << "Total de coelhos: " << coelhos << endl;
    cout << "Total de ratos: " << ratos << endl;
    cout << "Total de sapos: " << sapos << endl;
    cout << fixed << setprecision(2);
    cout << "Percentual de coelhos: " << percentualCoelhos << endl;
    cout << "Percentual de ratos: " << percentualRatos << endl;
    cout << "Percentual de sapos: " << percentualSapos << endl;

    return 0;
}
