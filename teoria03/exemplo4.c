#include <stdio.h>

void imprimir(char matriz[3][3]) {
    for (int linha = 0; linha < 3; linha++) {
        for (int coluna = 0; coluna < 3; coluna++) {
            printf("%c", matriz[linha][coluna]);
            if (coluna < 2) {
                printf("|");
            }
        }
        if (linha < 2) {
            printf("\n-----");
        }
        printf("\n");
    }
}

int main() {
    char velha[3][3] = {{'X', ' ', 'O'}, 
                        {' ', ' ', 'X'}, 
                        {'O', 'X', ' '}};
    imprimir(velha);                    
    return 0;
}