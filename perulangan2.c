#include <stdio.h>

int main() 
{
    for(int i = 1; i <= 7; i++) {
        for(int j = 1; j <= i; j++) {
        printf("i = %d, j = %d\n", i, j);
    }
     printf("\n");
     printf("\t");
    }
    for(int i = 1; i <= 7; i++) {
        for(int j = 1; j <= i; j++) {
        printf("i = %d, j = %d\n", i, j);
    }
     printf("\n");
    }
}