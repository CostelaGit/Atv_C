#include <stdio.h>

int main() {
    int a, b, c;

    printf("Digite os tres lados do triangulo: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a < b + c && b < a + c && c < a + b) {

        if (a == b && b == c) {
            printf("Triangulo equilatero.\n");
        } else if (a == b || a == c || b == c) {
            printf("Triangulo isosceles.\n");
        } else {
            printf("Triangulo escaleno.\n");
        }

    } else {
        printf("Os valores nao formam um triangulo.\n");
    }

    return 0;
}