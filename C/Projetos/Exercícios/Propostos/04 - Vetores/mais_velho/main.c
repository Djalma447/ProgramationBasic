#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, maisVelho, posMaisVelho;

    printf("Quantas pessoas voce vai digitar? ");
    scanf("%d", &N);

    char nomes[N][50];
    int idades[N];

    for (int i = 0; i < N; i++){
        printf("Dados da %da pessoa:\n", i+1);
        printf("Nome: ");
        fseek(stdin, 0, SEEK_END);
        gets(nomes[i]);
        printf("Idade: ");
        scanf("%d", &idades[i]);
    }

    maisVelho = idades[0];
    posMaisVelho = 0;

    for (int i = 1; i < N; i++){
        if (idades[i] > maisVelho){
            maisVelho = idades[i];
            posMaisVelho = i;
        }
    }

    printf("PESSOA MAIS VELHA: %s\n", nomes[posMaisVelho]);

    return 0;
}
