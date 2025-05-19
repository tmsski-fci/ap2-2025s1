#include <stdio.h>

void mostrar(int v[], int indice_ini, int indice_fim) {
    printf("[ ");
    for (int i=indice_ini; i<=indice_fim; i++) {
        printf("%d ", v[i]);
    }
    printf("]\n");
}

int particionar(int v[], int indice_ini, int indice_fim, int indice_pivo) {

    // Inicializar os dois cursores
    int indice_esq = indice_ini;
    int indice_dir = indice_fim;

    // Repetir enquanto os cursores não se encontram
    while(indice_esq <= indice_dir){
        // Avançar o primeiro cursor até encontrar um elemento maior que o pivô
        while(indice_esq <= indice_dir && v[indice_esq] <= v[indice_pivo]){
            indice_esq++;
        }
        // Retroceder o segundo cursor até encontrar um menor que o pivô
        while(indice_esq <= indice_dir && v[indice_dir] >= v[indice_pivo]){
            indice_dir--;
        } 
        // Trocar os dois elementos
        if(indice_esq < indice_dir){
            int aux = v[indice_dir];
            v[indice_dir] = v[indice_esq];
            v[indice_esq] = aux;
        }
    }

    // Trocar o pivô com o elemento do segundo cursor
    int aux = v[indice_pivo];
    v[indice_pivo] = v[indice_dir];
    v[indice_dir] = aux;

    // Retornar o novo índice do pivo
    return indice_dir;

}

void quick_sort(int v[], int indice_ini, int indice_fim) {
    // Caso Base 
    // Se o vetor tiver só um elemento ou vazio retornar 
    if(indice_ini >= indice_fim) return;

    // Escolher o pivo do vetor
    int indice_pivo = indice_ini;

    // Particionar o vetor e obter a nova posição do pivô
    indice_pivo = particionar(v, indice_ini, indice_fim, indice_pivo);
    mostrar(v, indice_ini, indice_fim);

    //  Ordenar a primeira partição 
    quick_sort(v, indice_ini, indice_pivo - 1);
    
    // Ordenar a segunda partição 
    quick_sort(v, indice_pivo + 1, indice_fim);
    

}

int main() {
    int numeros[] = { 3, 100, 2, 99, 5, 77, 4, 199, 6, 1, 8, 7};
    int n = sizeof(numeros)/sizeof(int);
    mostrar(numeros, 0, n - 1);
    quick_sort(numeros, 0, n - 1);
    mostrar(numeros, 0, n - 1);
    return 0;
}