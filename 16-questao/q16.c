#include <stdio.h>

int main(int argc, char const *argv[])
{

    double salario, prestacao;

    printf("Digite seu salario mensal: ");
    scanf("%lf", &salario);
    printf("Digite o valor da prestacao mensal: ");
    scanf("%lf", &prestacao);

    if(prestacao > salario * 0.2){
        printf("Emprestimo não concedido\n");
    } else {
        printf("Emprestimo concedido\n");
    }

    return 0;
}
