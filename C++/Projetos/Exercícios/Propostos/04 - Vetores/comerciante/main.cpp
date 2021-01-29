#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, abaixo20, entre10e20, acima20;
    double lucro, porcentagem, totalCompra, totalVenda, totalLucro;

    cout << "Serao digitados dados de quantos produtos? ";
    cin >> N;

    string nomes[N];
    double compras[N], vendas[N];

    for (int i = 0; i < N; i++){
        cout << "Produto " << i+1 << ":" << endl;
        cout << "Nome: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin, nomes[i]);
        cout << "Preco de compra: ";
        cin >> compras[i];
        cout << "Preco de venda: ";
        cin >> vendas[i];
    }

    abaixo20 = 0;
    entre10e20 = 0;
    acima20 = 0;
    for (int i = 0; i < N; i++){
        lucro = vendas[i] - compras[i];
        porcentagem = lucro * 100 / compras[i];
        if (porcentagem < 10){
            abaixo20++;
        }
        else if (porcentagem <= 20){
            entre10e20++;
        }
        else {
            acima20++;
        }
    }

    totalCompra = 0;
    totalVenda = 0;
    totalLucro = 0;
    for (int i = 0; i < N; i++){
        totalCompra = totalCompra + compras[i];
        totalVenda = totalVenda + vendas[i];
        totalLucro = totalLucro + vendas[i] - compras[i];
    }

    cout << endl << "RELATORIO:" << endl;
    cout << "Lucro abaixo de 10%: " << abaixo20 << endl;
    cout << "Lucro entre 10% e 20%: " << entre10e20 << endl;
    cout << "Lucro acima de 20%: " << acima20 << endl;
    cout << fixed << setprecision(2);
    cout << "Valor total de compra: " << totalCompra << endl;
    cout << "Valor total de venda: " << totalVenda << endl;
    cout << "Lucro total: " << totalLucro << endl;

    return 0;
}
