#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codigo, quantidade;
    double valor;

    printf("Codigo do produto comprado: ");
    scanf("%d", &codigo);
    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);

    if (codigo == 1){
        valor = quantidade * 5.0;
    }
    else if (codigo == 2){
        valor = quantidade * 3.5;
    }
    else if (codigo == 3){
        valor = quantidade * 4.8;
    }
    else if (codigo == 4) {
        valor = quantidade * 8.9;
    }
    else {
        valor = quantidade * 7.32;
    }

    printf("Valor a pagar: R$ %.2lf\n", valor);

    return 0;
}
