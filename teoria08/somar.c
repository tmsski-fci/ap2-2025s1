#include <stdio.h>

int somar_rec(int v[], int n) {
    int s;
    if (n == 0) {
        s = 0;
    }
    else {
        s = v[n-1] + somar_rec(v, n-1);
    }
    printf("s = %d\n", s);
    return s;
}

int somar(int v[], int n) {
    int s = 0;
    for (int i = 0; i < n; i++) {
        s += v[i];
    }
    return s;
}

int main() {
    printf("Boa noite!\n");
    int vetor[] = {10, 44, 33, 22};
    int n = sizeof(vetor) / sizeof(int);
    printf("Soma iterativa: %d\n", somar(vetor, n));
    printf("Soma recursiva: %d\n", somar_rec(vetor, n));
    return 0;
}