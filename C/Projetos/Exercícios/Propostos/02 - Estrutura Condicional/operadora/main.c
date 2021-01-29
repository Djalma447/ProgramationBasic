#include <stdio.h>
#include <stdlib.h>

int main()
{
    int minutos, resto;
    double preco;

    printf("Digite a quantidade de minutos: ");
    scanf("%d", &minutos);

    if (minutos <= 100){
        preco = 50.0;
    }
    else{
        resto = minutos - 100;
        preco = resto * 2.0 + 50.0;
    }

    printf("Valor a pagar: R$ %.2lf\n", preco);

    return 0;
}
