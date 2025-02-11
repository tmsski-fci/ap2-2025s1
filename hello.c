#include <stdio.h>
int main() {
    printf("Boa noite a todos!\n");

    for(int i = 1; i<=3; i++) {
        printf("Notas do aluno %d\n", i);
        int n;
        n = 2;
        float p1;
        printf("nota da p1: ");
        scanf("%f", &p1);
        printf("nota da p2: ");
        float p2;
        scanf("%f",&p2);
        float media;
        media = (p1 + p2)/n;
        
        printf("SUA MEDIA É: %f\n", media);
        if (media >= 6){
            printf("Foi aprovado\n");
        }
        else {
            printf("Foi reprovado\n");
        }
    }
    return 0;
}