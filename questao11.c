#include <stdio.h>

int main() {
    float valor_compra, valor_pago;
    int troco_centavos, quantidade;

    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valor_compra);

    printf("Digite o valor pago pelo cliente: R$ ");
    scanf("%f", &valor_pago);

    if (valor_pago < valor_compra) {
        printf("\nValor pago e insuficiente para realizar a compra.\n");
        return 0;
    }
    troco_centavos = (int)((valor_pago - valor_compra) * 100 + 0.5);

    printf("\nTroco total: R$ %.2f\n", (float)troco_centavos / 100);
    printf("Detalhamento do troco:\n");

    quantidade = troco_centavos / 10000; // R$ 100,00
    if (quantidade > 0) printf("%d nota(s) de R$ 100,00\n", quantidade);
    troco_centavos %= 10000;

    quantidade = troco_centavos / 5000; // R$ 50,00
    if (quantidade > 0) printf("%d nota(s) de R$ 50,00\n", quantidade);
    troco_centavos %= 5000;

    quantidade = troco_centavos / 2000; // R$ 20,00
    if (quantidade > 0) printf("%d nota(s) de R$ 20,00\n", quantidade);
    troco_centavos %= 2000;

    quantidade = troco_centavos / 1000; // R$ 10,00
    if (quantidade > 0) printf("%d nota(s) de R$ 10,00\n", quantidade);
    troco_centavos %= 1000;

    quantidade = troco_centavos / 500; // R$ 5,00
    if (quantidade > 0) printf("%d nota(s) de R$ 5,00\n", quantidade);
    troco_centavos %= 500;

    quantidade = troco_centavos / 200; // R$ 2,00
    if (quantidade > 0) printf("%d nota(s) de R$ 2,00\n", quantidade);
    troco_centavos %= 200;

    quantidade = troco_centavos / 100; // R$ 1,00
    if (quantidade > 0) printf("%d moeda(s) de R$ 1,00\n", quantidade);
    troco_centavos %= 100;

    quantidade = troco_centavos / 50; // R$ 0,50
    if (quantidade > 0) printf("%d moeda(s) de R$ 0,50\n", quantidade);
    troco_centavos %= 50;

    quantidade = troco_centavos / 25; // R$ 0,25
    if (quantidade > 0) printf("%d moeda(s) de R$ 0,25\n", quantidade);
    troco_centavos %= 25;

    quantidade = troco_centavos / 10; // R$ 0,10
    if (quantidade > 0) printf("%d moeda(s) de R$ 0,10\n", quantidade);
    troco_centavos %= 10;

    quantidade = troco_centavos / 5; // R$ 0,05
    if (quantidade > 0) printf("%d moeda(s) de R$ 0,05\n", quantidade);
    troco_centavos %= 5;

    quantidade = troco_centavos / 1; // R$ 0,01
    if (quantidade > 0) printf("%d moeda(s) de R$ 0,01\n", quantidade);

    return 0;
}