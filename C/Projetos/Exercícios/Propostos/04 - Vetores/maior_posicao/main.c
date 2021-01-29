#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, posicaoMaior;
    double maior;

    printf("Quanto numeros voce vai digitar? ");
    scanf("%d", &N);

    double vet[N];

    for (int i = 0; i < N; i++){
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
    }

    maior = vet[0];
    for (int i = 1; i < N; i++){
        if (vet[i] > maior){
            maior = vet[i];
            posicaoMaior = i;
        }
    }

    printf("\nMAIOR VALOR = %.1lf\n", maior);
    printf("POSICAO DO MAIOR VALOR = %d\n", posicaoMaior);

    return 0;
}
