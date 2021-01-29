#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    double media;

    printf("Quantos alunos serao digitados? ");
    scanf("%d", &N);

    char nomes[N][50];
    double nota1[N];
    double nota2[N];

    for (int i = 0; i < N; i++){
        printf("Digite nome, primeira e segunda nota do %do aluno:\n", i+1);
        fseek(stdin, 0, SEEK_END);
        gets(nomes[i]);
        scanf("%lf %lf", &nota1[i], &nota2[i]);
    }

    printf("Alunos aprovados:\n");
    for (int i = 0; i < N; i++){
         media = (nota1[i] + nota2[i]) / 2.0;
         if (media >= 6.0){
            printf("%s\n", nomes[i]);
         }
    }

    return 0;
}
