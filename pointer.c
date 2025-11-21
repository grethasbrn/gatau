#include <stdio.h>

void ubahNilai( int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    
}

int main () {
    int a = 3, b = 4;

    printf("a = %d, b = %d\n", a, b);
    ubah(&a, &b);
}