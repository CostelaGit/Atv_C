#include <stdio.h>

int main() {
    int n;

    printf("Digite um valor: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("O valor e par.\n");
    } else {
        printf("O valor e impar.\n");
    }

    return 0;
}