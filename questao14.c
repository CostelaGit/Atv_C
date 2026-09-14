#include <stdio.h>

int main() {
    int n;

    printf("Digite um valor inteiro: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("O valor e zero.\n");
    } else if (n > 0) {
        printf("O valor e positivo.\n");
    } else {
        printf("O valor e negativo.\n");
    }

    return 0;
}