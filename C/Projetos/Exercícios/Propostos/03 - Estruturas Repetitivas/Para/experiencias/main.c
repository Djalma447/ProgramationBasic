#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, quantidade, coelhos, ratos, sapos, total;
    double percentualCoelhos, percentualRatos, percentualSapos;
    char tipoCobaia;

    printf("Quantos casos de teste serao digitados? ");
    scanf("%d", &N);

    coelhos = 0;
    ratos = 0;
    sapos = 0;
    total = 0;

    for (int i = 1; i <= N; i++){
        printf("Quantidade de cobaias: ");
        scanf("%d", &quantidade);
        printf("Tipo de cobaia: ");
        fseek(stdin, 0, SEEK_END);
        scanf("%c", &tipoCobaia);

        if (tipoCobaia == 'C'){
            coelhos = coelhos + quantidade;
        }
        else if (tipoCobaia == 'R'){
            ratos = ratos + quantidade;
        }
        else if (tipoCobaia == 'S'){
            sapos = sapos + quantidade;
        }
        total = total + quantidade;
    }

    percentualCoelhos = (double)coelhos * 100 / total;
    percentualRatos = (double)ratos * 100 / total;
    percentualSapos = (double)sapos * 100 / total;

    printf("\nRELATORIO FINAL:\n");
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", coelhos);
    printf("Total de ratos: %d\n", ratos);
    printf("Total de sapos: %d\n", sapos);
    printf("Percentual de coelhos: %.2lf\n", percentualCoelhos);
    printf("Percentual de ratos: %.2lf\n", percentualRatos);
    printf("Percentual de sapos: %.2lf\n", percentualSapos);

    return 0;
}
