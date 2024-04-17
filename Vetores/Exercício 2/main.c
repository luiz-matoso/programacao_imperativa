#include <stdio.h>

int main() {

    // 2. Escreva um programa em C que leia do teclado dois vetores (A e B) com cinco elementos inteiros cada um, gere um terceiro vetor (S) 
    // com a soma dos correspondentes elementos dos dois primeiros ( S[i] = A[i] + B[i] ) e imprima os três vetores.


    int A[5], B[5], S[5];
    int i;

    printf("Digite 5 elementos inteiros (A):\n");
    for (i = 0; i < 5; i++) {
        printf("Elemento inteiro %d: ", i + 1);
        scanf("%d", &A[i]);
    }

    printf("\nDigite 5 elementos inteiros (B):\n");
    for (i = 0; i < 5; i++) {
        printf("Elemento inteiro %d: ", i + 1);
        scanf("%d", &B[i]);
    }

    S[0] = A[0] + B[0];
    S[1] = A[1] + B[1];

    printf("\nVetor A: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", A[i]);
    }

    printf("\nVetor B: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", B[i]);
    }

    printf("\nVetor S: ");
    for (i = 0; i < 2; i++) {
        printf("%d ", S[i]);
    }
    printf("\n");

    return 0;
}
