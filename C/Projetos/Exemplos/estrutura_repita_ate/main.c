#include <stdio.h>
#include <stdlib.h>

void limpar_entrada() {
char c;
while ((c = getchar()) != '\n' && c != EOF) {}
}

int main()
{
    double C, F;
    char resposta;

    do{
    printf("Digite a temperatura em Celsius: ");
    scanf("%lf", &C);
    F = 9.0 * C / 5.0 + 32.0;
    printf("Equivalente em Fahrenheit: %.1lf\n", F);
    printf("Deseja repetir (s/n)? ");
    limpar_entrada();
    scanf("%c", &resposta);
    } while(resposta == 's');
    return 0;
}
