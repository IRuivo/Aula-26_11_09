#include <stdio.h>



int main () {



    float media, soma;
    float nota1, nota2;
    char nome1[50], nome2[50];
    char resposta;

    printf("Digite o nome do primeiro aluno: ");
    scanf("%s", nome1);
    printf("Digite a nota do primeiro aluno: ");
    scanf("%f", &nota1);
    printf("Digite o nome do segundo aluno: ");
    scanf("%s", nome2);
    printf("Digite a nota do segundo aluno: ");
    scanf("%f", &nota2);

    soma = nota1 + nota2;
    media = soma / 2;
    printf("A média das notas é: %.2f\n", media);
    printf("O aluno %s tem nota %.2f e o aluno %s tem nota %.2f\n", nome1, nota1, nome2, nota2);

    // CADASTRO DE NOVOS ALUNOS E SUAS NOTAS
    printf("Deseja fazer o cadastro de novos alunos? (s/n): ");
    scanf(" %c", &resposta);
    while (resposta == 's' || resposta == 'S') {
        printf("Digite o nome do primeiro aluno: ");
        scanf("%s", nome1);
        printf("Digite a nota do primeiro aluno: ");
        scanf("%f", &nota1);
        printf("Digite o nome do segundo aluno: ");
        scanf("%s", nome2);
        printf("Digite a nota do segundo aluno: ");
        scanf("%f", &nota2);

        soma = nota1 + nota2;
        media = soma / 2;
        printf("A média das notas é: %.2f\n", media);
        printf("O aluno %s tem nota %.2f e o aluno %s tem nota %.2f\n", nome1, nota1, nome2, nota2);

        printf("Deseja fazer o cadastro de novos alunos? (s/n): ");
        scanf(" %c", &resposta);
    }
    
    return 0;

}


