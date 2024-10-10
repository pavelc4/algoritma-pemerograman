#include <stdio.h>

int main() {
    float jariJari, luas;
    const float PI = 3.14; // Deklarasi konstanta PI

    //meminta user untuk menginput jari jari
    printf("Masukkan jari-jari lingkaran: ");

    //proses input
    scanf("%f", &jariJari);

    //proses
    luas = PI * jariJari * jariJari;


    //output
    printf("Luas lingkaran dengan jari-jari %.2f adalah %.2f\n", jariJari, luas);

    return 0;
}