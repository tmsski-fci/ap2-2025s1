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

void selecao(int v[], int n) {
    // percorrer o vetor da esquerda para a direita
    // (até o penúltimo elemento)
    for ( int i = 0 ; i < n - 1; i++ ) {
        // buscar o índice do vetor que tem o menor elemento
        // (a partir da posição atual)
        int pos = i;
        for(int j = i+1; j < n; j++){
            if(v[pos]>v[j]){
                pos = j;
            }
        }

        // trocar os elementos
        trocar(v, i, pos);
        mostrar(v, n);
    }
}

int main() {

    int n;
    printf("Quantidade de números: ");
    scanf("%d", &n);

    int numeros[n];

    inicializar(numeros, n);

    mostrar(numeros, n);

    selecao(numeros, n);

    mostrar(numeros, n);
    return 0;
}