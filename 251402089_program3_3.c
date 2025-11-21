#include <stdio.h>

int main() 
{
    int a = 6, b = 2, x = 10, y = 7;

    printf("1. -15\n");
    printf("2. 8 + 17\n\n");

    printf("3. a = b + 5\n");
    printf("   a = %d + 5 = %d\n\n", b, (a = b + 5));

    printf("4. x = ++y %% 3\n");
    printf("   x = ++%d %% 3 = %d\n\n", y, (++y % 3));

    printf("5. (x >= 0) || ((x %% 2) == 0)\n");
    printf("   (%d >= 0) || ((%d %% 2) == 0) = %d\n\n", x, x, (x >= 0) || ((x % 2) == 0));

    int c, d;
    printf("6. 6 + (c = 3 + 8) - (d = 1 + 3)\n");
    int hasil6 = 6 + (c = 3 + 8) - (d = 1 + 3);
    printf("   6 + (c = 3 + 8) - (d = 1 + 3) = %d\n\n", hasil6);

    int z = 4;

    printf("7. (x + (((y / z) * 10) / 2))\n");
    int hasil7 = (x + (((y / z) * 10) / 2));
    printf("   (%d + (((%d / %d) * 10) / 2)) = %d\n\n", x, y, z, hasil7);

    printf("8. (((x + y) / z) * 10) / 2\n");
    int hasil8 = (((x + y) / z) * 10) / 2;
    printf("   (((%d + %d) / %d) * 10) / 2 = %d\n\n", x, y, z, hasil8);

    printf("9. x + y / z * 10 / 2\n");
    int hasil9 = x + y / z * 10 / 2;
    printf("    %d + %d / %d * 10 / 2 = %d\n\n", x, y, z, hasil9);

    printf("10. x + (((y / z) * 10) / 2)\n");
    int hasil10 = x + (((y / z) * 10) / 2);
    printf("   %d + (((%d / %d) * 10) / 2) = %d\n", x, y, z, hasil10);

    return 0;
}
