#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, pares, soma;
    double media;

    printf("Quantos elementos vai ter o vetor? ");
    scanf("%d", &N);

    int vet[N];

    for (int i = 0; i < N; i++){
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    pares = 0;
    soma = 0;

    for (int i = 0; i < N; i++){
        if (vet[i] % 2 == 0){
            soma = soma + vet[i];
            pares++;
        }
    }

    if (pares == 0){
        printf("NENHUM NUMERO PAR\n");
    }
    else{
        media = (double)soma / pares;
        printf("MEDIA DOS PARES = %.1lf\n", media);
    }

    return 0;
}
