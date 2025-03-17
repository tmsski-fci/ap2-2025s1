#include <stdio.h>

void dobro(int *x) {
    *x = *x * 2;
    printf("dobro = %d\n", *x);
}

int main() {
    int a = 15;
    dobro(&a);
    printf("a = %d\n", a);
    return 0;
}