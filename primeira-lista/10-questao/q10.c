#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    float temp_emCelsius;
    printf("Grau Celsius: ");
    scanf("%f",&temp_emCelsius);
    float temp_emFahrenheit = temp_emCelsius * 9 / 5 + 32;

    printf("Grau Celsius %.2f - Graus Fahrenheit %.2f\n",temp_emCelsius,temp_emFahrenheit);

    return 0;
}
