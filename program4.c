#include <stdio.h>
#include <string.h>

int main() {
    char nama[5][50];
    char hobi[5][3][50]; 
    int i, j;

    for (i = 0; i < 5; i++) {
        printf("Masukkan nama ke-%d: ", i + 1);
        scanf("%s", nama[i]);

        for (j = 0; j < 3; j++) {
            printf("Masukkan hobi ke-%d untuk %s: ", j + 1, nama[i]);
            scanf("%s", hobi[i][j]); 
        }
    }

    printf("\nData Mahasiswa dan Hobi:\n");
    for (i = 0; i < 5; i++) {
        printf("Nama ke-%d: %s\n", i + 1, nama[i]);
        for (j = 0; j < 3; j++) {
            printf(" Hobi ke-%d: %s\n", j + 1, hobi[i][j]); 
        }
        printf("\n");
    }

    return 0;
}
