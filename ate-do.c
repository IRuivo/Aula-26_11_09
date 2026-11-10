#include <stdio.h>


int main () {
    double celsius, fahrenheit;
    char resposta;
    do {
        printf("Digite a temperatura em Celsius: ");
        scanf("%lf", &celsius);
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("%.2lf graus Celsius equivalem a %.2lf graus Fahrenheit.\n", celsius, fahrenheit);
        printf("Deseja converter outra temperatura? (s/n): ");
        scanf(" %c", &resposta);
    } while (resposta == 's' || resposta == 'S');


}