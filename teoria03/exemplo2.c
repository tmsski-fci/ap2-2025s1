#include <stdio.h>

int main() {
    float notas[4];
    int faltas[4];
    for (int i=0; i<4; i++) {
        printf("\nENTRE OS DADOS DO ALUNO %d\n", i);
        printf("nota: ");
        scanf("%f", &notas[i]);
        printf("faltas: ");
        scanf("%d", &faltas[i]);
    }
    printf("\nNOTAS: ");
    for (int i=0; i<4; i++) {
        printf("%f ", notas[i]);
    }
    printf("\nFALTAS: ");
    for (int i=0; i<4; i++) {
        printf("%d ", faltas[i]);
    }
    printf("\n");
    return 0;
}