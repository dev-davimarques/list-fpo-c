#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    /* code */
    double a,b,h;

    printf("Digite o primeiro numero: ");
    scanf("%lf", &a);
    printf("Digite o segundo numero: ");
    scanf("%lf", &b);

    h = sqrt((a*a) + (b*b));

    printf("Hipotenusa igual %.2lf\n",h);

    return 0;
}
