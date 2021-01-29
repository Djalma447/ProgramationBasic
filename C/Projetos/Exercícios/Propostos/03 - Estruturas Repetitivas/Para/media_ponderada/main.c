#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    double a, b, c, media;

    printf("Quantos casos voce vai digitar? ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++){
        printf("Digite tres numeros:\n");
        scanf("%lf %lf %lf", &a, &b, &c);
        media = (a * 2 + b * 3 + c * 5) / 10;
        printf("MEDIA = %.1lf\n", media);
    }
    return 0;
}
