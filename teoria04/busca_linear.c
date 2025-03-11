#include <stdio.h>

int busca_linear(int v[], int n, int e) {
    int i = 0;

    while (i < n)
    {
        if (v[i] == e)
        {
            return i;
        }
        i++;
    }
    return -1; //não encontrou
}

int main(){
    //////////     0  1  2   3   4   5   6
    int vetor[] = {0, 5, 6, -9, 10, 22, 33};
    printf("Boa noite!\n");
    int valor;
    printf("valor a ser buscado: ");
    scanf("%d", &valor);
    int i = busca_linear(vetor, 7, valor);
    printf("Resultado: %d\n", i);
    return 0;
}

