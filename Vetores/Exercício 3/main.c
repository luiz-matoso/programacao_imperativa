#include <stdio.h>

int main() {

    // 3. Escreva um programa em C que leia do teclado um vetor de oito elementos reais, imprima esse vetor e, depois, imprima a soma dos elementos equidistantes, isto é,
    // imprime a soma do primeiro com último, depois a soma do segundo com o penúltimo, e assim por diante.

    int numeros[8];

    printf("Digite 8 números reais:\n");
    for (int i = 0; i < 8; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &numeros[i]); // Corrigido para &numeros[i]
    }

    printf("\nVetor NUMEROS:\n");
    for (int i = 0; i < 8; i++) {
        printf("%d ", numeros[i]); 
    }

    printf("\nSoma do PRIMEIRO com o ÚLTIMO:\n");
    printf("%d\n", numeros[0] + numeros[7]);

    printf("\nSoma do SEGUNDO com o PENÚLTIMO:\n");
    printf("%d\n", numeros[1] + numeros[6]);

    printf("\nSoma dos elementos distantes:\n");
    for (int i = 0; i < 4; i++) {
        printf("Soma do %dº com o %dº elemento: %d\n", i + 1, 8 - i, numeros[0 + i] + numeros[7 - i]);
    }

    return 0;
}
