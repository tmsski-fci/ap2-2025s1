#include <stdio.h>

void boa_noite_enfeitado() {
    printf("##############\n");
    printf("# Boa noite! #\n");
    printf("##############\n");
}
float solicitar_nota_prova(int p) {
    float prova;
    printf("nota da p%d: ", p);
    scanf("%f", &prova);
    return prova;
}
float media(float n1, float n2) {
    float media = (n1 + n2)/2;
    return media;
}
void imprimir_resultado(float media) {
    printf("SUA MEDIA É: %f\n", media);
    if (media >= 6){
        printf("Foi aprovado\n");
    }
    else {
        printf("Foi reprovado\n");
    }
}