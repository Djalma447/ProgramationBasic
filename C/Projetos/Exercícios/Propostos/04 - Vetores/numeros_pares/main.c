#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, quantidadePares;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    int vet[N];

    for (int i = 0; i < N; i++){
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    quantidadePares = 0;
    printf("\nNUMEROS PARES:\n");
    for (int i = 0; i < N; i++){
        if (vet[i] % 2 == 0){
            printf("%d ", vet[i]);
            quantidadePares++;
        }
    }

    printf("\n");
    printf("\nQUANTIDADE DE PARES = %d\n", quantidadePares);

    return 0;
}
