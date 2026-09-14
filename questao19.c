#include <stdio.h>

int main() {
    int a, b, c, maior;

    printf("Digite tres valores: ");
    scanf("%d %d %d", &a, &b, &c);

    maior = a;

    if (b > maior) {
        maior = b;
    }

    if (c > maior) {
        maior = c;
    }

    printf("O maior numero e: %d\n", maior);

    return 0;
}