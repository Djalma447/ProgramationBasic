#include <stdio.h>
#include <stdlib.h>

int main()
{
    double A, B, C, maior;

    printf("Digite as tres distancias:\n");
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);

    if (A > B && A > C){
        maior = A;
    }
    else if (B > C){
        maior = B;
    }
    else {
        maior = C;
    }

    printf("MAIOR DISTANCIA = %.2lf\n", maior);

    return 0;
}
