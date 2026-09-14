#include <stdio.h>

int main() {
    int n;

    printf("Digite um valor inteiro: ");
    scanf("%d", &n);

    if (n >= 0) {
        printf("Valor: %d\n", n);
    } else {
        printf("Valor: %d\n", -n);
    }

    return 0;
}