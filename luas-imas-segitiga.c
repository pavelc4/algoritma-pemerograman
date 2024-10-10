#include <stdio.h>

int main() {
    float alas, tinggi, tinggi_limas, luas_segitiga, luas_limas;

    // Meminta input dari pengguna
    printf("Masukkan panjang alas segitiga: ");
    scanf("%f", &alas);
    printf("Masukkan tinggi segitiga: ");
    scanf("%f", &tinggi);
    printf("Masukkan tinggi limas: ");
    scanf("%f", &tinggi_limas);

    // Menghitung luas segitiga
    luas_segitiga = 0.5 * alas * tinggi;

    // Menghitung luas limas segitiga
    luas_limas = luas_segitiga + (3 * (0.5 * alas * tinggi_limas));

    // Menampilkan hasil
    printf("Luas limas segitiga dengan alas %.2f, tinggi segitiga %.2f, dan tinggi limas %.2f adalah: %.2f\n", alas, tinggi, tinggi_limas, luas_limas);

    return 0;
}
