#include <stdio.h>

int main() {

    // 1. Escreva um programa na linguagem C que, dados dois números inteiros distintos
    // fornecidos pelo usuário (via teclado), imprima-os em ordem crescente.
    // Obs: o programa deve certificar-se de que os dois números sejam distintos.

    int a,b;

    printf("Entre dois número inteiros:");

    scanf("%d", &a);
    scanf("%d", &b);

    printf("valor de a: %d\n", a);
    printf("valor de b: %d\n", b);

    if (a != b)
        if (a < b)
        printf("ordem crescente: %d %d\n", a, b);
        else
        printf("ordem crescente: %d %d\n", b, a);
    else
        printf("Os números são iguais\n");
    
    return 0;
}