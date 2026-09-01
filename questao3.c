#include <stdio.h>

int main() {
    int x, y, resto;
    float quociente;

    printf("Entre com um numero: ");
    scanf("%d", &x);
    printf("Entre com outro numero: ");
    scanf("%d", &y);

    quociente = x / y;
    resto = x % y;

    printf("O quociente eh: %f\n", quociente);
    printf("O resto eh: %d\n", resto);
}