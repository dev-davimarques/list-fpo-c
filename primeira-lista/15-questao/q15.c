#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int num;

    printf("Digite o um numero: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("%d é par.\n",num);
    } else {
        printf("%d é ímpar.\n",num);
    }

    return 0;
}
