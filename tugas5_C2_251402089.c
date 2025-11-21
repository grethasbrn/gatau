#include <stdio.h>

#define RESET   "\033[0m"
#define RED     "\033[1;31m"
#define BLUE    "\033[1;34m"
#define GREEN   "\033[1;32m" 
#define YELLOW  "\033[1;33m"

void iniArray(int arr[], int n) {
    printf("\nIsi array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void ubahNilai(int arr[], int n) {
    int cari, baru, i, ada = 0;

    printf("\nmasukin angka yang akan bang marco ganti: ");
    scanf("%d", &cari);

    for (i = 0; i < n; i++) {
        if (arr[i] == cari) {
            ada = 1;
            printf("janlup masukin nilai barunya bang: ");
            scanf("%d", &baru);

            for (int j = 0; j < n; j++) {
                if (arr[j] == baru) {
                    printf(RED"!!!!!Angka %d dah ada angkanya bang, yang laen laa\n"RESET, baru);
                    return;
                }
            }

            arr[i] = baru;
            printf(BLUE"OKE ACC BANG!!\n"RESET);
            break;
        }
    }

    if (!ada)
        printf(RED"Angka %d gaada bang:).\n"RESET, cari);

    iniArray(arr, n);
}

void urutkanArray(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) { 
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\nurutan arrayyyyyy!\n");
    iniArray(arr, n);
}

void nilaiMaksMin(int arr[], int n) {
    int maks = arr[0], min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maks) maks = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    printf("\nNilai terbesar: %d", maks);
    printf("\nNilai termini: %d\n", min);
}

int main() {
    int arr[10] = {9, 15, 6, 18, 100, 23, 12, 45, 24, 2};
    int pilih;

    printf(GREEN"\n=== PROGRAM ARRAY GRETHA ===\n"RESET);
    iniArray(arr, 10);

    do {
        printf(GREEN"\n==== FITUR CANGGIHH: ==== \n"RESET);
        printf(YELLOW"1. Ubah nilai array\n"RESET);
        printf(YELLOW"2. Urutkan array dari besar ke kecil\n"RESET);
        printf(YELLOW"3. Nilai terbesar dan terkecil\n"RESET);
        printf(YELLOW"4. Tampilkan array\n"RESET);
        printf(YELLOW"5. pencet ini plss\n"RESET);
        printf("Pilih: ");
        scanf("%d", &pilih);

        if (pilih == 1) ubahNilai(arr, 10);
        else if (pilih == 2) urutkanArray(arr, 10);
        else if (pilih == 3) nilaiMaksMin(arr, 10);
        else if (pilih == 4) iniArray(arr, 10);
        else if (pilih == 5) printf("Makasi ya bang..........\n");
        else printf("Pilihan tidak valid!\n");

    } while (pilih != 5);

    return 0;
}
