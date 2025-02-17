#include "media.h"

int main() {
    boa_noite_enfeitado();
    float p1 = solicitar_nota_prova(1);
    float p2 = solicitar_nota_prova(2);
    float m = media(p1, p2);
    imprimir_resultado(m);
    return 0;
}