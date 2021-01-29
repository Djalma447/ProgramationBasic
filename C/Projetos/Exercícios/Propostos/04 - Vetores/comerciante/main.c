#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, abaixo10, entre10e20, acima20;
    double lucro, porcentagem, totalCompra, totalVenda, totalLucro;

    printf("Serao digitados dados de quantos produtos? ");
    scanf("%d", &N);

    char nomes[N][50];
    double compras[N], vendas[N];

    for (int i = 0; i < N; i++){
        printf("Produto %d:\n", i+1);
        printf("Nome: ");
        fseek(stdin, 0, SEEK_END);
        scanf("%s", &nomes[i]);
        printf("Preco de compra: ");
        scanf("%lf", &compras[i]);
        printf("Preco de venda: ");
        scanf("%lf", &vendas[i]);
    }

    abaixo10 = 0;
    entre10e20 = 0;
    acima20 = 0;

    for (int i = 0; i < N; i++){
        lucro = vendas[i] - compras[i];
        porcentagem = lucro * 100 / compras[i];

        if (porcentagem < 10.0){
            abaixo10++;
        }
        else if (porcentagem <= 20.0){
            entre10e20++;
        }
        else {
            acima20++;
        }
    }

    totalCompra = 0;
    totalVenda = 0;
    totalLucro = 0;

    for (int i = 0; i < N; i++){
        totalCompra = totalCompra + compras[i];
        totalVenda = totalVenda + vendas[i];
    }

    totalLucro = totalVenda - totalCompra;

    printf("\nRELATORIO:\n");
    printf("Lucro abaixo de 10%%: %d\n", abaixo10);
    printf("Lucro entre 10%% e 20%%: %d\n", entre10e20);
    printf("Lucro acima de 20%%: %d\n", acima20);
    printf("Valor total de compra: %.2lf\n", totalCompra);
    printf("Valor total de venda: %.2lf\n", totalVenda);
    printf("Lucro total: %.2lf\n", totalLucro);

    return 0;
}
