#include <stdio.h>

int busca_binaria(int v[], int n, int e) {
    int inicio = 0;
    int fim = n - 1;
    // repetir
    while (inicio <= fim) {
        // calcular o índice do meio
        int meio = (inicio + fim) / 2;
        // o valor que está no meio é o procurado?
        if (v[meio] == e) {
            // se sim, retornar o índice
            return meio;
        }
        // se não, desprezar a metade que não contém o elemento
        else if (v[meio] > e) {
            fim = meio - 1;
        }
        else {
            inicio = meio + 1;
        }
    }
    return -1; //não encontrou
}

int main(){
    //////////      0  1  2  3   4   5   6
    int vetor[] = {-9, 0, 5, 6, 10, 22, 33};
    printf("Boa noite!\n");
    int valor;
    printf("valor a ser buscado: ");
    scanf("%d", &valor);
    int i = busca_binaria(vetor, 7, valor);
    printf("Resultado: %d\n", i);
    return 0;
}

