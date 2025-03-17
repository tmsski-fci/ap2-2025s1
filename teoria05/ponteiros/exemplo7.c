#include <stdio.h>

int main() {
    int a = 15;
    int *p;
    p = &a;
    printf("*p = %d\n", *p);
    printf("p = %p\n", p);
}