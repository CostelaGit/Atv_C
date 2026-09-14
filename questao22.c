#include <stdio.h>

int main() {
    int a, b, opcao;
    float resultado;

    printf("Digite dois valores inteiros: ");
    scanf("%d %d", &a, &b);

    printf("\n1 - Adicao\n");
    printf("2 - Subtracao\n");
    printf("3 - Divisao\n");
    printf("4 - Multiplicacao\n");

    printf("Escolha uma operacao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            resultado = a + b;
            printf("Resultado: %.2f\n", resultado);
            break;

        case 2:
            resultado = a - b;
            printf("Resultado: %.2f\n", resultado);
            break;

        case 3:
            if (b != 0) {
                resultado = (float)a / b;
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Nao e possivel dividir por zero.\n");
            }
            break;

        case 4:
            resultado = a * b;
            printf("Resultado: %.2f\n", resultado);
            break;

        default:
            printf("Operacao invalida.\n");
    }

    return 0;
}