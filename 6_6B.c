#include <stdio.h>

int main()
{
    char str[100];
    scanf("Ketik sebuah kalimat: ");
    gets(str);
    printf("%s\n", str);
    return 0;
}