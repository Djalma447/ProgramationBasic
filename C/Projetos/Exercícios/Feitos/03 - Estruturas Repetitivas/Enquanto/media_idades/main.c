#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, quantidade, soma;
    double media;

    printf("Digite as idades:\n");
    scanf("%d", &x);

    soma = 0;
    quantidade = 0.0;
    while (x >= 0){
        soma = soma + x;
        scanf("%d", &x);
        quantidade++;
    }

    if (quantidade > 0){
        media = (double)soma / quantidade;
        printf("MEDIA = %.2lf\n", media);
    }
    else{
        printf("IMPOSSIVEL CALCULAR\n");
    }
    return 0;
}
