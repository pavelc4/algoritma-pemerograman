#include <stdio.h>

int main() {
    int nilai, nilaiLulus = 70;

    printf("Masukkan nilai siswa : ");

    while (1) {
        scanf("%d", &nilai);

        if (nilai < 0) {
            break;
        }

        if (nilai >= nilaiLulus) {
            printf("Lulus\n");
        } else {
            printf("Tidak Lulus\n");
        }
    }

    return 0;
}