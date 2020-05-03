#include <stdio.h>

int main()
{
    float x, y, z;
    x = y = z = 5;

    printf("Multiplas atribuicoes: %f | %f | %f.\n", x, y, z);

    int a = 1 == 1;
    int b = 1 == 2;

    //Cuidado isto pode provocar um erro
    //if (a = 2) { }
     
    printf("%d - %d\n", a, b);

    return 0;
}