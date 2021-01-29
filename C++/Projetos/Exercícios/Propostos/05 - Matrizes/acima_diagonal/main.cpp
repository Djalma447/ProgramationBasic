#include <iostream>

using namespace std;

int main()
{
    int N, acimaDiagonal;

    cout << "Qual a ordem da matriz? ";
    cin >> N;

    int mat[N][N];

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];
        }
    }

    acimaDiagonal = 0;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            if (j > i){
                acimaDiagonal = acimaDiagonal + mat[i][j];
            }
        }
    }

    cout << "SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = " << acimaDiagonal << endl;

    return 0;
}
