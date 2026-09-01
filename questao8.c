#include <stdio.h>

int main () {
    float salario, salario_c;
    int vendas_ef;

    printf("digite o valor do salario: ");
    scanf("%f", &salario);
    printf("digite o valor total das vendas efetuadas: ");
    scanf("%d", &vendas_ef);

    salario_c = salario + (vendas_ef*0.15);

    printf("salario fixo: %.2f\n", salario);
    printf("salario no final do mes: %.2f\n",salario_c );

}