#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int num1, num2;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    
    if(num1 > num2){
        printf("%d é maior que %d\n",num1,num2);
    } else if (num1 == num2){
        printf("%d é igual a %d\n",num1,num2);
    } else {
        printf("%d é maior que %d\n",num2,num1);
    }
    
    // gcc q14.c -o q14.out -lm

    return 0;
}
