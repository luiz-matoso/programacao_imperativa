#include <stdio.h>

int main() {

    // 2. Escreva um programa na linguagem C que, dadas três letras distintas
    // fornecidas pelo usuário (via teclado), imprima-as em ordem alfabética.
    // Obs: o programa deve certificar-se de que as três letras sejam distintas.

    char letra1, letra2, letra3;

    printf("Entre com 3 letras diferentes: ");

    scanf(" %c", &letra1);
    scanf(" %c", &letra2);
    scanf(" %c", &letra3);

    printf("letra 1: %c\n", letra1);
    printf("letra 2: %c\n", letra2);
    printf("letra 3: %c\n", letra3);

    if (letra2 < letra1) {char aux = letra1; letra1 = letra2; letra2 = aux; }
    if (letra3 < letra2) {char aux = letra2; letra2 = letra3; letra3 = aux; }
    if (letra2 < letra1) {char aux = letra1; letra1 = letra2; letra2 = aux; }
    printf("\n");
    printf("ordem alfabética:\n");
    printf("letra 1: %c\n", letra1);
    printf("letra 2: %c\n", letra2);
    printf("letra 3: %c\n", letra3);
    
    return 0;
}