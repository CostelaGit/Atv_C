#include <stdio.h>
int main() {
    float num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    printf("A soma eh: %f\n", num1+num2);
    printf("O quociente eh: %f\n", num1/num2);
    printf("O produto eh: %f\n", num1*num2);
}