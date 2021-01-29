#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantidade;
    double precoUnitario, total, dinheiroRecebido, troco, falta;

    printf("Preço unitario do produto: ");
    scanf("%lf", &precoUnitario);
    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);
    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiroRecebido);

    total = quantidade * precoUnitario;

    if (dinheiroRecebido < total){
        falta = total - dinheiroRecebido;
        printf("DINHEIRO INSUFICIENTE. FALTAM %.2lf REAIS\n", falta);
    }
    else{
        troco = dinheiroRecebido - total;
        printf("TROCO = %.2lf\n", troco);
    }

    return 0;
}
