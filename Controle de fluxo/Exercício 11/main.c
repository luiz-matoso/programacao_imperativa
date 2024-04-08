#include <stdio.h>

int main(){

    // Elabore um programa em C para imprimir os 30 primeiros números naturaispares.
    // Use a estrutura for para gerar a sequência de termos.

    for (int i = 2; i <= 60; i += 2) {
        printf("%d\n", i);
    }

    return 0;
}