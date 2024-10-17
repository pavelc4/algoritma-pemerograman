#include <stdio.h>

int main() {
    int bilangan;

    printf("Masukkan sebuah bilangan: ");
    scanf("%d", &bilangan);

    if (bilangan > 0) {
        printf("Bilangan %d adalah bilangan positif.\n", bilangan);
    } else if (bilangan < 0) {
        printf("Bilangan %d adalah bilangan negatif.\n", bilangan);
    } else {
        printf("Bilangan %d adalah nol.\n", bilangan);
    }

    return 0;
}