#include <stdio.h>

int main() {
    int a, b;

    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);

    if (a == b) {
        printf("Os numeros sao iguais.\n");
    } else {
        printf("Os numeros sao diferentes.\n");

        if (a > b) {
            printf("O maior numero e: %d\n", a);
        } else {
            printf("O maior numero e: %d\n", b);
        }
    }

    return 0;
}