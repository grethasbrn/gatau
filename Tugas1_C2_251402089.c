#include <stdio.h>
#define PI 3.14159

int main() 
{
    float rad, luas, keliling;

    printf("Masukkan jari-jari lingkaran: ");
    scanf("%f", &rad);

    luas = PI * rad * rad;
    keliling = 2 * PI * rad;

    printf("=============================\n");
    printf("Luas lingkaran: %.3f\n", luas);
    printf("Keliling lingkaran: %.3f\n", keliling);
    printf("=============================");

    return 0;
}
