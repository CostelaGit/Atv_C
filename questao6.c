#include <stdio.h>

int main () {
    const float PI = 3.14;
    float raio;

    printf("digite o valor do raio: ");
    scanf("%f", &raio);

    printf("valor eh: %f", PI * (raio * raio));
}