#include <stdio.h>

/**
    Imprime os valores armazenados no vetor v,
    onde n é o tamanho do vetor
 */
void imprimir(int v[], int n) {
    printf("# ");
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("#\n");
}

void dobrar(int v[], int n) {
    for (int i = 0; i<n; i++) {
        v[i] = v[i]*2;
    }
}

float media(int v[], int n){
    float soma = 0;
    for (int i=0; i<n; i++){
        soma=soma+v[i];
    }
    return soma/n;
}

int main() {
    int idades[] = { 18, 21, 19, 17, 25, 44, 15 };
    int n = sizeof(idades) / sizeof(int);
    imprimir(idades, n);
    /*
    int faltas[5] = { 0, 1, 3, 20, 8 };
    imprimir(faltas, 5);
    int pesos[6] = { 59, 62, 79, 48, 77, 99 };
    imprimir(pesos, 4);
    */
    dobrar(idades,n);
    imprimir(idades,n);
    printf("media: %f \n", media(idades, n));
    return 0;
}