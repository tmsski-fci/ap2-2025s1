#include <stdio.h>

int main() {
    printf("Boa noite!\n");
    int a = 5;
    int b = 10;
    a = b;
    b = 15;
    printf("a = %d; b = %d\n", a, b);
    return 0;
}