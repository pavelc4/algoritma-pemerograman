#include <stdio.h>

int main() {
    int usia;

    printf("Masukkan usia Anda: ");
    scanf("%d", &usia);

    if (usia < 12) {
        printf("Anda masih anak-anak.\n");
    } else if (usia >= 12 && usia <= 18) {
        printf("Anda seorang remaja.\n");
    } else {
        printf("Anda sudah dewasa.\n");
    }

    return 0;
}
