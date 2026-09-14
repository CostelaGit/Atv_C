#include <stdio.h>

int main() {
    int quantidade;
    float total;

    printf("Digite a quantidade de macas: ");
    scanf("%d", &quantidade);

    if (quantidade < 12) {
        total = quantidade * 0.30;
    } else {
        total = quantidade * 0.25;
    }

    printf("Valor total: R$ %.2f\n", total);

    return 0;
}