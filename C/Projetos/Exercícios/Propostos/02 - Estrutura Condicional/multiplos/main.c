#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X, Y;

    printf("Digite dois numeros inteiros:\n");
    scanf("%d %d", &X, &Y);

    if (X % Y == 0 || Y % X == 0){
        printf("Sao multiplos\n");
    }
    else {
        printf("Nao sao multiplos\n");
    }

    return 0;
}
