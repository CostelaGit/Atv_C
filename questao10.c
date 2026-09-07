#include <stdio.h>

int main() {
    int valor, notas;

    printf("Digite o valor a ser sacado: R$ ");
    scanf("%d", &valor);

    printf("\nQuantidade de cedulas:\n");

    notas = 0;
    while (valor >= 200) {
        notas++;
        valor -= 200;
    }
    if (notas > 0) printf("%d nota(s) de R$ 200,00\n", notas);

    notas = 0;
    while (valor >= 100) {
        notas++;
        valor -= 100;
    }
    if (notas > 0) printf("%d nota(s) de R$ 100,00\n", notas);

    notas = 0;
    while (valor >= 50) {
        notas++;
        valor -= 50;
    }
    if (notas > 0) printf("%d nota(s) de R$ 50,00\n", notas);

    notas = 0;
    while (valor >= 20) {
        notas++;
        valor -= 20;
    }
    if (notas > 0) printf("%d nota(s) de R$ 20,00\n", notas);

    notas = 0;
    while (valor >= 10) {
        notas++;
        valor -= 10;
    }
    if (notas > 0) printf("%d nota(s) de R$ 10,00\n", notas);

    notas = 0;
    while (valor >= 5) {
        notas++;
        valor -= 5;
    }
    if (notas > 0) printf("%d nota(s) de R$ 5,00\n", notas);

    notas = 0;
    while (valor >= 2) {
        notas++;
        valor -= 2;
    }
    if (notas > 0) printf("%d nota(s) de R$ 2,00\n", notas);

    if (valor > 0) {
        printf("Valor restante não passível de saque: R$ %d,00\n", valor);
    }

    return 0;
}