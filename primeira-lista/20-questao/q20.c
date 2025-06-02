#include <stdio.h>
int main () {

    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num > 0) {
    printf("num. positivo\n");
    }

    if (num >= 10){
    printf("num. maior ou igual a 10\n");
    } else {
    printf("num. menor que 10\n");
    }
    
    return 0;
}