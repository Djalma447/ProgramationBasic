#include <stdio.h>
#include <stdlib.h>

int main()
{
    int alcool, gasolina, diesel, codigo;

    alcool = 0;
    gasolina = 0;
    diesel = 0;

    printf("Informe um codigo (1, 2, 3) ou 4 para parar: ");
    scanf("%d", &codigo);

    while (codigo != 4){
        if (codigo == 1){
            alcool++;
        }
        else if (codigo == 2){
            gasolina++;
        }
        else if (codigo == 3){
            diesel++;
        }
        printf("Informe um codigo (1, 2, 3) ou 4 para parar: ");
        scanf("%d", &codigo);
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);

    return 0;
}
