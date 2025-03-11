#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    double valorTotal = 780000;
    double gan1, gan2, gan3;

    gan1 = valorTotal * 0.46;
    gan2 = valorTotal * 0.32;
    gan3 = valorTotal - (gan1 + gan2);

    printf("Ganhador 1: %.2lf\n",gan1);
    printf("Ganhador 2: %.2lf\n",gan2);
    printf("Ganhador 3: %.2lf\n",gan3);

    return 0;
}
