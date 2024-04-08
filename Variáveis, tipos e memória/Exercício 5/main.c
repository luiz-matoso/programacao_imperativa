#include <stdbool.h>
#include <stdio.h>

int main() {

    // 5. Estenda o programa a seguir com a inclusão de um
    // ponteiro para cada uma das variáveis (a, b, c, d)
    // definidas na função
    // main. Imprima os endereços de
    // todas as variáveis e o conteúdo (valor) apontado por
    // cada ponteiro.

    short a = 10;
    double b = 45.9;
    char c = '$';
    bool d = true;

    short *pa = &a;
    double *pb = &b;
    char *pc = &c;
    bool *pd = &d;

    printf("A\n");
    printf("endereco de a: %p\n", &a);
    printf("endereco do ponteiro para a: %p\n", &pa);
    printf("valor de a: %d\n", a);
    printf("valor de pa: %d\n\n", *pa);

    printf("B\n");
    printf("endereco de b: %p\n", &b);
    printf("endereco do ponteiro para b: %p\n", &pb);
    printf("valor de b: %d\n", b);
    printf("valor de pb: %d\n\n", *pb);

    printf("C\n");
    printf("endereco de c: %p\n", &c);
    printf("endereco do ponteiro para c: %p\n", &pc);
    printf("valor de c: %d\n", c);
    printf("valor de pc: %d\n\n", *pc);

    printf("D\n");
    printf("endereco de d: %p\n", &d);
    printf("endereco do ponteiro para d: %p\n", &pd);
    printf("valor de d: %d\n", d);
    printf("valor de pd: %d\n\n", *pd);

    return 0;
}