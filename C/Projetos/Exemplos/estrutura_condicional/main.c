#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hora;
    printf("Digite uma hora do dia: ");
    scanf("%d", &hora);
    if (hora < 12){
        printf("Bom dia");
    }
    else if (hora < 18){
        printf("Boa tarde");
    }
    else{
        printf("Boa noite");
    }
    return 0;
}
