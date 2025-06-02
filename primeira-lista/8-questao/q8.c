#include <stdio.h>

int main(int argc, char const *argv[]) {
    int soma = 0, num, i;

    for (i = 1; i <= 3; i++) {
        printf("Digite o %dº numero: ", i);
        scanf("%d", &num);
        soma += num;
    }

    printf("A soma dos tres numeros é: %d\n", soma);

    return 0;
}
