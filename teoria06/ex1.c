#include <stdio.h>

void inicializar(int v[], int n) {
    int i = 0;
    while (i < n) {
        printf("Valor do elemento %d: ", i);
        scanf("%d", &v[i]);
        i++;
    }
}

void mostrar(int v[], int n) {
    printf("[ ");
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("]\n");
}

void trocar(int v[], int i, int j) {
    int aux = v[i];
    v[i] = v[j];
    v[j] = aux;
}

int main() {

    int n;
    printf("Quantidade de números: ");
    scanf("%d", &n);

    int numeros[n];

    inicializar(numeros, n);

    mostrar(numeros, n);

    trocar(numeros, 0, 1);
    trocar(numeros, 1, 2);
    trocar(numeros, 2, 3);

    mostrar(numeros, n);
    return 0;
}