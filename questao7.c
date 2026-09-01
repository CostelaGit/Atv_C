#include <stdio.h>
int main () {
    const float PI = 3.14;
    float h, r;

    printf("digite o raio: ");
    scanf("%f", &r);
    printf("digite o valor da altura:");
    scanf("%f", &h);

    float A = 2*PI*r*(h+r);
    float V = PI*r*r*h;

    printf("Area do cilindro: %.2f ", A);
    printf("Volume do cilindro: %.2f ", V);

}