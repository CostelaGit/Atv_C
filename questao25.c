#include <stdio.h>

int main() {
    int i;

    for (i = 14; i <= 30; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}