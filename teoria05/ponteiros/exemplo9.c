#include <stdio.h>

int main() {
    int v[] = {99, 1, 55, 32, 44};
    printf("v[0] = %d\n", v[0]);
    int *p;
    p = &v[0];
    printf("*p = %d\n", *p);
    p++;
    printf("*p = %d\n", *p);
    return 0;
}