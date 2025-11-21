#include <stdio.h>

int fibonacci(int n){
    if(n == 0){
        return 1;
    } else{
        return n * faktorial (n-1);
    }
}

int main()
{
    int n=5;
    printf("Faktorial(%d): %d", n,faktorial(n));
}