#include <stdio.h>
#include <stdbool.h>

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

void insercao(int v[], int n) {
    // para cada posição do vetor (1º percurso)
    // observe que começamos pelo 2º elemento, pois consideramos que o 1º elemento já está ordenado
    for (int i = 1; i < n; i++) {
        // guardar elemento
        int elemento = v[i];
        int j = i - 1;
        bool encontrou = false;
        // percorrer no sentido inverso enquanto não chegar ao início do vetor e não encontrar um menor
        while (j >= 0 && !encontrou) {
            // se o elemento do 2º percurso for maior que o elemento do 1º percurso
            if (v[j] > elemento) {
                // deslocar elemento do 2º percurso para a direita
                v[j + 1] = v[j];
                // continuar procurando
                j--;
            }
            // se o elemento do 2º percurso for menor, encontramos a posição onde o elemento do 1º percurso
            // deve ser inserido
            else {
                encontrou = true;
            }
        }
        // inserir elemento na posição encontrada
        v[j + 1] = elemento;
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

    insercao(numeros, n);

    mostrar(numeros, n);
    return 0;
}