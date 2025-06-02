#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    float soma = 0, num, media;
    int i;

    for (i = 1; i <= 4; i++){
        printf("Digite o %dº numero: ", i);
        scanf("%f", &num);
        soma += num;
        media = soma / 4;
    }
    
    media = soma / 4;

    printf("Media aritmetica: %.2f\n",media);

    return 0;
}
