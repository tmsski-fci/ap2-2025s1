#include <stdio.h>

void boa_noite_enfeitado() {
    printf("##############\n");
    printf("# Boa noite! #\n");
    printf("##############\n");
}
int main() {
    boa_noite_enfeitado();
    printf("Qual é a sua idade? ");
    int idade;
    scanf("%d", &idade);
    printf("Ano que vem você terá %d.\n", idade+1);
    boa_noite_enfeitado();
    return 0;
}