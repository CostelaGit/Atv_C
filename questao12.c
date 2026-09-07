#include <stdio.h>

int main() {
    float media1, media2, soma_medias, media_das_medias;


    media1 = (7.0 + 8.0 + 9.0) / 3.0;

    media2 = (4.0 + 5.0 + 6.0) / 3.0;

    soma_medias = media1 + media2;

    media_das_medias = soma_medias / 2.0;

    // Exibição dos resultados
    printf("Media dos numeros 7, 8 e 9: %.2f\n", media1);
    printf("Media dos numeros 4, 5 e 6: %.2f\n", media2);
    printf("Soma das duas medias: %.2f\n", soma_medias);
    printf("Media das duas medias: %.2f\n", media_das_medias);

    return 0;
}