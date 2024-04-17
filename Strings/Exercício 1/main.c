#include <stdio.h>
#include <string.h>

int main(){
    // 1. Elabore um programa em C para concatenar duas cadeias de caracteres (A e B)lidas do teclado. 
    // Ao final imprima as duas cadeias e a cadeia resultante. 
    // Use a funçãostrcat, da biblioteca string.h.

    char cadeiaA[100];
    char cadeiaB[100];
    char resultante[100];

    printf("Digite os caracteres da cadeia 1: ");
    scanf("%s", cadeiaA);

    printf("Digite os caracteres da cadeia 2: ");
    scanf("%s", cadeiaB);

    strcpy(resultante, cadeiaA);
    strcat(resultante, cadeiaB);

    puts(cadeiaA);
    puts(cadeiaB);
    puts(resultante);

    return 0;
}