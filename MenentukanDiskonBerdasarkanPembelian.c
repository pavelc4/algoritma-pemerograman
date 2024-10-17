#include <stdio.h>

int main() {
    float total_pembelian, diskon, bayar;

    printf("Masukkan total pembelian: Rp");
    scanf("%f", &total_pembelian);

 
    if (total_pembelian > 1000000) {
        diskon = total_pembelian * 0.1; 
    } else if (total_pembelian > 500000) {
        diskon = total_pembelian * 0.05; 
    } else {
        diskon = 0; 
    }

    
    bayar = total_pembelian - diskon;

    printf("Diskon yang didapatkan: Rp%.2f\n", diskon);
    printf("Total pembayaran: Rp%.2f\n", bayar);

    return 0;
}
