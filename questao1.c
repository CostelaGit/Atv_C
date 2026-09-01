#include <stdio.h>

int main(){
    int a, b;
    int result;

    printf("Entre com um numero: ");
    scanf("%d", &a);
    printf("Entre com outro numero: ");
    scanf("%d", &b);

    result = a + b;

    printf("Outro numero eh: %d\n", result);

}