#include <stdio.h>

#define RESET   "\033[0m"
#define RED     "\033[1;31m"
#define BLUE    "\033[1;34m"
#define GREEN   "\033[1;32m"

char konversiNilai(float nilai) { 
    if (nilai > 4.0 || nilai < 0.0) { 
        printf("masukkan nilai yang benarrrrrrrrrrrrrrr\n"); 
        return 0; 
    } 
    if (nilai >= 4.0) 
        return 'A'; 
    else if (nilai >= 3.2) 
        return 'B'; 
    else if (nilai >= 2.9)
        return 'C';     
    else if (nilai >= 1.9) 
        return 'D'; 
    else return 'E'; 
}

int main() {
    int jumlah;
    
    printf(GREEN"==========================================\n"RESET);
    printf(GREEN"=====   DAFTAR NILAI MAHASISWA USU   =====\n"RESET);
    printf(GREEN"==========================================\n"RESET);

    printf("Masukkan jumlah mahasiswa: ");
    if (scanf("%d", &jumlah) != 1) return 0;

    float nilai[jumlah];
    char huruf[jumlah];
    float total = 0.0f;

    printf(GREEN"\n==========================================\n"RESET);
    printf(GREEN"=====      Input Nilai Mahasiswa     =====\n"RESET);
    printf(GREEN"==========================================\n"RESET);

    for (int i = 0; i < jumlah; i++) {
        printf("Mahasiswa ke-%d: ", i + 1);
        if (scanf("%f", &nilai[i]) != 1) return 0;
        huruf[i] = konversiNilai(nilai[i]);
        total += nilai[i];
    }
    printf(GREEN"\n==========================================\n"RESET);
    printf(GREEN"=====     Daftar Nilai Mahasiswa    =====\n"RESET);
    printf(GREEN"==========================================\n"RESET);
    for (int i = 0; i < jumlah; i++) {
        printf("Mahasiswa %d\n", i + 1);
        printf(RED"Nilai Angka : %.2f\n"RESET, nilai[i]);
        printf(BLUE"Nilai Huruf : %c\n"RESET, huruf[i]);
    }


    float rata_rata = total / jumlah;  
    printf("\nRata-rata nilai mahasiswa: %.2f\n", rata_rata);

    return 0;
}
