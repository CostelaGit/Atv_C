#include <stdio.h>

int main () {
    float numero;

    printf("Entre com um numero: ");
    scanf("%f", &numero);

    printf("Sucessor do numero eh: %f\n", numero+1);
    printf("Antecessor do numero eh: %f\n", numero-1);
}