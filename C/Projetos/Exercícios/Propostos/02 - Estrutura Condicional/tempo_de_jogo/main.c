#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inicio, fim, duracao;

    printf("Hora inicial: ");
    scanf("%d", &inicio);
    printf("Hora final: ");
    scanf("%d", &fim);

    if (fim > inicio){
        duracao = fim - inicio;
    }
    else {
        duracao = 24 - inicio + fim;
    }

    printf("O JOGO DUROU %d HORA(S)\n", duracao);

    return 0;
}
