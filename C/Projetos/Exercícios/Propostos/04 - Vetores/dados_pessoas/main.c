#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, homens, mulheres;
    double maiorAltura, menorAltura, somaAltura, mediaAltura;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &N);

    char generos[N];
    double alturas[N];

    for (int i = 0; i < N; i++){
        printf("Altura da %da pessoa: ", i+1);
        scanf("%lf", &alturas[i]);
        printf("Genero da %da pessoa: ", i+1);
        fseek(stdin, 0, SEEK_END);
        scanf("%c", &generos[i]);
    }

    menorAltura = alturas[0];
    maiorAltura = alturas[0];

    for (int i = 1; i < N; i++){
        if (alturas[i] < menorAltura){
            menorAltura = alturas[i];
        }

        if (alturas[i] > maiorAltura){
            maiorAltura = alturas[i];
        }
    }

    printf("Menor altura = %.2lf\n", menorAltura);
    printf("Maior altura = %.2lf\n", maiorAltura);

    homens = 0;
    mulheres = 0;
    somaAltura = 0;

    for (int i = 0; i < N; i++){
        if (generos[i] == 'M'){
            homens++;
        }
        else{
            mulheres++;
            somaAltura = somaAltura + alturas[i];
        }
    }

    mediaAltura = somaAltura / mulheres;

    printf("Media das alturas das mulheres = %.2lf\n", mediaAltura);
    printf("Numero de homens = %d\n", homens);

    return 0;
}
