#include <iostream>

using namespace std;

int main()
{
    int N;

    cout << "Qual a ordem da matriz? ";
    cin >> N;

    int mat[N][N];

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];
        }
    }

    int maiores[N];
    for (int i = 0; i < N; i++){
        maiores[i] = mat[i][0];
        for (int j = 1; j < N; j++){
            if (mat[i][j] > maiores[i]){
                maiores[i] = mat[i][j];
            }
        }
    }

    cout << "MAIOR ELEMENTO DE CADA LINHA:" << endl;
    for (int i = 0; i < N; i++){
        cout << maiores[i] << endl;
    }

    return 0;
}
