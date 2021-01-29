#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, x;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &x);

        if (x > 0)
        {
            if (x % 2 == 0){
                printf("PAR POSITIVO\n");
            }
            else {
                printf("IMPAR POSITIVO\n");
            }
        }
        else if (x < 0){
            if (x % 2 == 0){
                printf("PAR NEGATIVO\n");
            }
            else {
                printf("IMPAR NEGATIVO\n");
            }
        }
        else {
            printf("NULO\n");
        }
    }
    return 0;
}
