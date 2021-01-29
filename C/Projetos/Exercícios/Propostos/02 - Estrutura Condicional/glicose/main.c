#include <stdio.h>
#include <stdlib.h>

int main()
{
    double glicose;

    printf("Digite a medida da glicose: ");
    scanf("%lf", &glicose);

    if (glicose <= 100.0){
        printf("Classificacao: normal\n");
    }
    else if (glicose <= 140.0){
        printf("Classificacao: elevado\n");
    }
    else {
        printf("Classificacao: diabetes\n");
    }
    return 0;
}
