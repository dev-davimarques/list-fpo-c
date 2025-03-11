#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    double pi = 3.14159, raio, area;

    printf("Valor do raio do circulo: ");
    scanf("%lf",&raio);

    area = pi * (raio * raio);

    printf("Valor da area do circulo: %.2lf\n",area);

    return 0;
}
