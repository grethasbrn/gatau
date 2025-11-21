#include <stdio.h>

int main(void) {
    int x;

    /* Meminta masukan nilai yang akan ditampung ke dalam variabel x */
    printf("Masukkan sebuah bilangan bulat : ");
    scanf("%d", &x);

    /* Melakukan pengecekan terhadap nilai x yang telah dimasukkan */
    if (x > 0)
        printf("\n%d adalah bilangan positif\n", x);

    printf("Statement di luar blok kontrol pengecekan");
    return 0;
}