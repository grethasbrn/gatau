#include <stdio.h>

int main() {
    int tinggi, i, j, spasi, bintang;

    printf("Masukkan tinggi segitiga: ");
    scanf("%d", &tinggi);

    if (tinggi <= 0) {
        printf("Tinggi harus bilangan positif.\n");
        return 0;
    }

    for (i = 1; i <= tinggi; i++) {
        spasi = tinggi - i;
        bintang = 2 * i - 1;

        for (j = 1; j <= spasi; j++) {
            printf(" ");
        }

        for (j = 1; j <= bintang; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}