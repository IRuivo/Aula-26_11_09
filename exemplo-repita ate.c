#include <stdio.h>

int main () {
    // algoritimo para converter kilometros em milhas
    double km, milhas;
    char resposta;
    
    do {
        printf("Digite a distância em quilômetros: ");
        scanf("%lf", &km);
        milhas = km * 0.621371;
        printf("%.2lf quilômetros equivalem a %.2lf milhas.\n", km, milhas);
        printf("Deseja converter outra distância? (s/n): ");
        scanf(" %c", &resposta);
    } while (resposta == 's' || resposta == 'S');




    return 0;
}
