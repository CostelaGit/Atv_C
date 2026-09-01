#include <stdio.h>

int main() {
    const float cm = 2.54;
    float num1;

    printf("digite o numero que voce quer em polegada: ");
    scanf("%f", &num1);

    printf("numero em polegadas eh: %f", num1*cm);
}