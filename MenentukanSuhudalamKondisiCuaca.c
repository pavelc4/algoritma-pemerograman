#include <stdio.h>

int main() {
    float suhu;

    printf("Masukkan suhu: ");
    scanf("%f", &suhu);

    if (suhu > 30) {
        printf("Panas\n");
    } else if (suhu < 15) {
        printf("Dingin\n");
    } else {
        printf("Normal\n");
    }

    return 0;
}
