#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, linha, coluna;
    double positivos;

    cout << "Qual a ordem da matriz? ";
    cin >> N;

    double mat[N][N];

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];
        }
    }

    positivos = 0;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            if (mat[i][j] > 0){
                positivos = positivos + mat[i][j];
            }
        }
    }

    cout << fixed << setprecision(1);
    cout << endl << "SOMA DOS POSITIVOS: " << positivos << endl;

    cout << endl << "Escolha uma linha: ";
    cin >> linha;
    cout << "LINHA ESCOLHIDA: ";
    for (int i = 0; i < N; i++){
        cout << mat[linha][i] << " ";
    }

    cout << endl << endl << "Escolha uma coluna: ";
    cin >> coluna;
    cout << "COLUNA ESCOLHIDA: ";
    for (int i = 0; i < N; i++){
        cout << mat[i][coluna] << " ";
    }

    cout << endl << endl << "DIAGONAL PRINCIPAL: ";
    for (int i = 0; i < N; i++){
        cout << mat[i][i] << " ";
    }

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            if (mat[i][j] < 0){
                mat[i][j] = pow(mat[i][j], 2);
            }
        }
    }

    cout << endl << endl << "MATRIZ ALTERADA:" << endl;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
