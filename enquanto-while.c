#include <stdio.h>

int main() {
    int x, soma = 0;
    printf("Digite um número inteiro: ");
    scanf("%d", &x);

    while (x != 0) {
        soma = soma + x;
        printf("Digite outro número inteiro (ou 0 para sair): ");
        scanf("%d", &x);
    }

    printf("A soma dos números digitados é: %d\n", soma);
    return 0;
}
