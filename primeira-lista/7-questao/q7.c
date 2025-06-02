#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    int numero;
    printf("Digite um numero: ");
    scanf("%d",&numero);
    printf("Valor lido: %d\n",numero);
    printf("Antecessor: %d\n",numero-1);
    printf("Sucessor: %d\n",numero+1);
    return 0;
}