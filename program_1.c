#include <stdio.h>

int main() {
    // Deklarasi Array
    int angka[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};

    int i;

    for (i = 0; i < 10; i++) {
        printf("angka[%d]: %d \n", i, angka[i]);
    }

     printf("\n\n\n index ke 10 %d ", angka[10]);

    printf("index ke 9 %d \n", angka[9]);

    return 0;
}
