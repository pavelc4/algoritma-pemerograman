#include <stdio.h>

int main() {

    //deklarasi variabel
    float alas, tinggi, luas;

    //meminta user untuk menginput alas
    printf("Masukkan panjang alas segitiga: ");
    scanf("%f", &alas);

     //meminta user untuk menginput  tinggi
    printf("Masukkan tinggi segitiga: ");
    scanf("%f", &tinggi);

    //proses
    luas = 0.5 * alas * tinggi;

    //output
    printf("Luas segitiga: %.2f\n", luas);

    return 0;
}