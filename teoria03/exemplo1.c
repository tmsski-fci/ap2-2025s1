#include <stdio.h>

int main() {
    int idades[4];
    idades[0]=19;
    idades[1]=18;
    idades[2]=19;
    idades[3]=19;
    float alturas[4] = {1.66, 1.83, 1.80, 1.76};
    int pesos[4]= {69,83,65,62};
    //não funciona
    //pesos = {30, 40 , 50 , 60};
    printf("número do aluno: ");
    int i;
    scanf("%d", &i);
    printf("idade: %d \n", idades[i]);
    printf("altura: %f \n", alturas[i]);
    printf("peso: %d\n", pesos[i]);
    return 0;
}