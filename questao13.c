#include <stdio.h>

int main() {
    float preco_fabrica, impostos, revendedor, preco_final;

    printf("Digite o preço de fábrica do automóvel: R$ ");
    scanf("%f", &preco_fabrica);

    // Cálculo dos impostos (45%) e revendedor (28%)
    impostos = preco_fabrica * 0.45;
    revendedor = preco_fabrica * 0.28;

    // Preço final é a soma do preço de fábrica, impostos e revendedor
    preco_final = preco_fabrica + impostos + revendedor;

    printf("\n--- Detalhamento do Preço ---\n");
    printf("Preço de fábrica: R$ %.2f\n", preco_fabrica);
    printf("Impostos (45%%): R$ %.2f\n", impostos);
    printf("Porcentagem do revendedor (28%%): R$ %.2f\n", revendedor);
    printf("-----------------------------\n");
    printf("Preço final do carro: R$ %.2f\n", preco_final);

    return 0;
}