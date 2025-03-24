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

void bolha(int v[], int n) {
    // repetir n-1 vezes
    for(int cont = 0; cont<n-1; cont++){
        // percorrer o vetor da esquerda para a direita
        // (até o penúltimo elemento)
        for(int i = 0; i < n - 1 - cont; i++) {
            // comparar o elemento atual com o próximo
            if (v[i] > v[i+1]){
                // trocar se o próximo for menor que o atual
                trocar(v, i, i + 1);
            }
            mostrar(v, n);
        }
    }
}

int main() {

    int n;
    printf("Quantidade de números: ");
    scanf("%d", &n);

    int numeros[n];

    inicializar(numeros, n);

    mostrar(numeros, n);

    bolha(numeros, n);

    mostrar(numeros, n);
    return 0;
}