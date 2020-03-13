#include <stdlib.h>
#include <stdio.h>

int main()
{
    int dia, mes, ano;

    printf("Informe a data de nascimento:\n");
    
    scanf("%d/%d/%d", &dia, &mes, &ano);
    printf("Data digitada: %d/%d/%d\n", dia, mes, ano);

    printf("Informe a primeira letra do seu nome...\n");
    
    getchar();
    char c = getchar();
    printf("Seu nome inicia com %c\n", c);

    getchar();

    return 0;
}