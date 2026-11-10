#include <stdio.h>

// fazer um programa que calcule a media de duas notas de alunos.

int main () {



    float media, soma;
    float ana, beto;
    

    printf("Digite a nota de Ana: ");
    scanf("%f", &ana);
    printf("Digite a nota de Beto: ");
    scanf("%f", &beto );

    soma = ana + beto;
    media = soma / 2;
    printf("A média das notas é: %.2f\n", media);

}
