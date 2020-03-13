#include <stdlib.h>
#include <stdio.h>

int main()
{
    int a = 125; //base decimal
    int b = 0435; //base octal =  285
    int c = 0x1FA; //base hexadecimal = 506

    printf("Base numerica\n");
    printf("Dec -> a = %d | Octal -> b = %d | Hexa -> c = %d \n", a, b, c);

    printf("Notacao cientifica\n");
    float f = 5.2455555;
    double d = 15.732;
    double n = 50000000000;
    double x = 5.0e10;

    printf("f = %f | d = %lf | n = %lf | c = %lf\n", f, d, n, x);
    getchar();

    return 0;
}