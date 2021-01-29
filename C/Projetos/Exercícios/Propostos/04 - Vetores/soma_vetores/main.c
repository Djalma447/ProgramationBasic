#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;

    printf("Quantos valores vai ter cada vetor? ");
    scanf("%d", &N);

    int A[N];
    int B[N];
    int C[N];

    printf("Digite os valores do vetor A:\n");
    for (int i = 0; i < N; i++){
        scanf("%d", &A[i]);
    }

    printf("Digite os valores do vetor B:\n");
    for (int i = 0; i < N; i++){
        scanf("%d", &B[i]);
    }

    for (int i = 0; i < N; i++){
        C[i] = A[i] + B[i];
    }

    printf("VETOR RESULTANTE:\n");
    for (int i = 0; i < N; i++){
        printf("%d\n", C[i]);
    }

    return 0;
}
