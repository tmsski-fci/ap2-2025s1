#include <stdio.h>

void mostrar(int v[], int n) {
    printf("[ ");
    for (int i=0; i<n; i++) {
        printf("%d ", v[i]);
    }
    printf("]\n");
}

void merge(int v1[], int n1, int v2[], int n2, int v[]) {
    int i1 = 0;
    int i2 = 0;
    int i = 0;
    while (i1 < n1 && i2 < n2) {
        if (v1[i1] < v2[i2]) {
            v[i] = v1[i1];
            i1++;
            i++;
        }
        else {
            v[i] = v2[i2];
            i2++;
            i++;
        }
    }
    while (i1 < n1) {
        v[i] = v1[i1];
        i1++;
        i++;
    }
    while (i2 < n2) {
        v[i] = v2[i2];
        i2++;
        i++;
    }
}

void merge_sort(int v[], int n) {
    // CASO BASE
    if (n < 2) {
        return;
    }

    // DIVIDIR EM DUAS METADES
    int metade = n / 2;
    int n1 = metade;
    int n2 = n - metade;
    int v1[n1];
    int v2[n2];
    for (int i1 = 0; i1 < n1; i1++) {
        v1[i1] = v[i1];
    }
    mostrar(v1, n1);

    for (int i2 = 0; i2 < n2; i2++) {
        v2[i2] = v[n1 + i2];
    }
    mostrar(v2, n2);

    // ORDENAR CADA METADE
    merge_sort(v1, n1);
    merge_sort(v2, n2);

    // INTERCALAR AS DUAS METADES
    merge(v1, n1, v2, n2, v);
}

int main() {
    int numeros[] = { 3, 100, 2, 99, 5, 77, 4, 199, 6, 1, 8, 7};
    int n = sizeof(numeros)/sizeof(int);
    mostrar(numeros, n);
    merge_sort(numeros, n);
    mostrar(numeros, n);
    return 0;
}