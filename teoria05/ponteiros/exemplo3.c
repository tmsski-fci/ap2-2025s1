#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    int *p;
    p = &b;
    b = 15;
    printf("a = %d; b = %d; *p = %d\n", a, b, *p);
    p = &a;
    printf("a = %d; b = %d; *p = %d\n", a, b, *p);
    return 0;
}