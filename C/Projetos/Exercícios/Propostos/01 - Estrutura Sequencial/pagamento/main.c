#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[50];
    double valorPorHora, total;
    int horasTrabalhadas;

    printf("Nome: ");
    gets(nome);
    printf("Valor por hora: ");
    scanf("%lf", &valorPorHora);
    printf("Horas trabalhadas: ");
    scanf("%d", &horasTrabalhadas);

    total = valorPorHora * horasTrabalhadas;

    printf("O pagamento para %s deve ser %.2lf\n", nome, total);

    return 0;
}
