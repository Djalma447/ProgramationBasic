#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double r, pi, area;

    pi = 3.14159;

    printf("Digite o valor do raio do circulo: ");
    scanf("%lf", &r);

    area = pi * pow(r, 2);

    printf("AREA = %.3lf", area);

    return 0;
}
