#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double delta, x1, x2;

    // Leitura dos coeficientes
    printf("Digite o coeficiente a: ");
    scanf("%lf", &a);
    printf("Digite o coeficiente b: ");
    scanf("%lf", &b);
    printf("Digite o coeficiente c: ");
    scanf("%lf", &c);

    // Verifica se a equação é do segundo grau
    if (a == 0) {
        printf("Nao e equacao de segundo grau.\n");
    } else {
        // Calcula o delta
        delta = b * b - 4 * a * c;

        // Verifica o valor do delta
        if (delta < 0) {
            printf("Nao existe raiz real.\n");
        } else if (delta == 0) {
            x1 = -b / (2 * a);
            printf("Raiz unica: %.2lf\n", x1);
            printf("Raizes identicas.\n");
        } else {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Raiz 1: %.2lf\n", x1);
            printf("Raiz 2: %.2lf\n", x2);
        }
    }

    return 0;
}

// gcc q17.c -o q17.out -lm