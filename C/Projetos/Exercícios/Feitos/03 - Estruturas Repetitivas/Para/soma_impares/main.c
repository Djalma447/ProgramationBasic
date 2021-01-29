#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X, Y, i, soma;

    printf("Digite dois numeros:\n");
    scanf("%d %d", &X, &Y);

    soma = 0;
    if (X < Y){
        for (i = X+1; i < Y; i++){
            if (i % 2 != 0){
                soma = soma + i;
            }
        }
    }
    else{
        for (i = Y+1; i < X; i++){
            if (i % 2 != 0){
                soma = soma + i;
            }
        }
    }

    printf("SOMA DOS IMPARES = %d\n", soma);
    return 0;
}
