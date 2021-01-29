#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double A, B, C, areaQuadrado, areaTriangulo, areaTrapezio;

    printf("Digite a medida A: ");
    scanf("%lf", &A);
    printf("Digite a medida B: ");
    scanf("%lf", &B);
    printf("Digite a medida C: ");
    scanf("%lf", &C);

    areaQuadrado = pow(A, 2.0);
    areaTriangulo = A * B / 2.0;
    areaTrapezio = (A + B) * C / 2.0;

    printf("AREA DO QUADRADO = %.4lf\n", areaQuadrado);
    printf("AREA DO TRIANGULO = %.4lf\n", areaTriangulo);
    printf("AREA DO TRAPEZIO = %.4lf\n", areaTrapezio);
    return 0;
}
