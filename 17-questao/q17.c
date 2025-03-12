#include <stdio.h>

int main(int argc, char const *argv[])
{
    double x, a, b, c, x1, x2, delta;

    printf("Digite o valor de A: ");
    scanf("%lf", &a);
    printf("Digite o valor de B: ");
    scanf("%lf", &b);
    printf("Digite o valor de C: ");
    scanf("%lf", &c);

    delta = (b*b) - 4 * a * c;

    return 0;
}
