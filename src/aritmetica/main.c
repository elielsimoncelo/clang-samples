#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "aritmetica.h"

int main() {
    int a, b, r;
    char operacao, sair;

    while (1) {
        printf("\033[H\033[J");
        printf("Digite uma operacao matematica: [+] adicao [-] subtracao [*] multiplicacao [/] divisao\n");
        operacao = getchar();

        printf("Digite 2 numeros (separados por espaco): \n");
        scanf("%d %d", &a, &b);
        getchar();

        switch (operacao)
        {
            case '+':
                r = soma(a, b);
                break;
            case '-':
                r = subtracao(a, b);
                break;
            case '*':
                r = multiplicacao(a, b);
                break;
            case '/':
                r = divisao(a, b);
                break;
            default:
                break;
        }

        printf("%d %c %d = %d\n", a, operacao, b, r);

        printf("Pressione ENTER para continuar ou Q para sair\n");
        sair = getchar();
        
        if (tolower(sair) == 'q') {
            break;
        }
    }

    printf("Pressione qualquer tecla para finalizar o programa\n");
    getchar();
    getchar();

    return 0;
}