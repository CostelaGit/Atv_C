#include <stdio.h>

/* vou considerar que são valores numericos inteiros*/
int main () {
    int A, B, aux;

    printf("Digite um numero: ");
    scanf("%d", &A);
    printf("valor de a: %d\n", A);

    printf("Digite um numero: ");
    scanf("%d", &B);
    printf("valor de b: %d\n", B);

    aux = A;
    A = B;
    B = aux;
    printf("-------------------------\n");
    printf("valor de a: %d\n", A);
    printf("valor de b: %d", B);
}