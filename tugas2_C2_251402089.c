#include <stdio.h>

#define RESET   "\033[0m"
#define RED     "\033[1;31m"
#define GREEN   "\033[1;32m"
#define BLUE    "\033[1;34m"
#define CYAN    "\033[1;36m"




int main() {
    int jumlah;
    float harga, total, diskon, bayar;

    harga = 100000;

    printf(BLUE"=========================================\n" RESET);
    printf(BLUE"=== SELAMAT DATANG DI TOKO JAM GRETHA ===\n" RESET);
    printf(BLUE"===       JALAN KENANGAN NO.24        ===\n" RESET);
    printf(BLUE"===        Telp: 085284030995         ===\n" RESET);
    printf(BLUE"=========================================\n" RESET);
    printf(" Berapa jumlah jam dibeli : "); 
    scanf("%d", &jumlah);

    if (jumlah <= 0) {
        printf("input yang benar bestiee <3 \n");
        return 0;
    }

    total = harga * jumlah;

    if (jumlah == 1) {
        diskon = 0;
    } else if (jumlah >= 2 && jumlah <= 4) {
        diskon = 0.2;
    } else if (jumlah >= 5 && jumlah <= 7) {
        diskon = 0.3;
    } else {
        diskon = 0.5;
    }

    bayar = total - (total * diskon);

    printf(GREEN"\n---------------- TOKO JAM GRETHA ---------------- \n"RESET);
    printf("Harga per jam            : Rp %.0f\n", harga);
    printf("harga sebelum diskon     : Rp %.0f\n", total);
    printf("Diskon yang user dapat   : %.0f%%\n", diskon * 100);
    printf(GREEN"----------------------------------------------------\n"RESET);
    printf(CYAN "Total yang harus dibayar : Rp %.0f\n"RESET, bayar);
    printf(GREEN"----------------------------------------------------\n"RESET);
    printf(RED"Kasir                    : Gretha imuttt \n"RESET);
    printf(GREEN"----------------------------------------------------\n" RESET);
    printf(CYAN" Terima kasih telah berbelanja di Toko Jam Gretha!    \n"RESET);
    printf(GREEN"=====================================================\n"RESET);

    return 0;
}
