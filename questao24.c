#include <stdio.h>

int main() {
    char classe;
    float consumo, tarifa;
    float vf, icms, vp;

    printf("Digite a classe consumidora (A, B ou C): ");
    scanf(" %c", &classe);

    printf("Digite o consumo em KWh: ");
    scanf("%f", &consumo);

    switch (classe) {
        case 'A':
        case 'a':
            tarifa = 0.50;
            break;

        case 'B':
        case 'b':
            tarifa = 0.80;
            break;

        case 'C':
        case 'c':
            tarifa = 1.00;
            break;

        default:
            printf("Classe invalida.\n");
            return 0;
    }

    vf = consumo * tarifa;
    icms = 0.3 * vf;
    vp = vf + icms;

    printf("Valor do fornecimento: R$ %.2f\n", vf);
    printf("ICMS: R$ %.2f\n", icms);
    printf("Valor a pagar: R$ %.2f\n", vp);

    return 0;
}