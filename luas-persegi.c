#include <stdio.h>

// Deklarasi variabel
int sisi, luas;


// main program
int main() {
    printf("Masukkan sisi: ");
    
    // input user
    scanf("%d", &sisi);
    
    //proses hitung
    luas = sisi * sisi;
    
    printf("Luas adalah: %d\n", luas);
    
    return 0; // Menambahkan return statement
}
