#include <stdio.h>
#include <stdlib.h>

int main(){

    // 4. Escreva um programa em C que leia do teclado um vetor de caráteres, gere um novo vetor de caráteres na ordem inversa do primeiro e imprima os dois vetores. A
    // quantidade de caráteres (isto é, a capacidade do vetor) deve ser determinada pelo usuário (valor fornecido via teclado).

    printf("Digite o tamanho do vetor: ");
    int tamanho;
    scanf("%d", &tamanho);

    char vetor[tamanho];

    printf("Digite os caracteres: ");
    setbuf(stdin, NULL);

    for (int i = 0; i < tamanho; i++){
        vetor[i] = getchar();
        putchar(vetor[i]);
    }

    printf("\nVetor inverso: ");
    for (int i = tamanho - 1; i >= 0; i--){
        printf("%c ", vetor[i]);
    }

    printf("\nVetor: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%c ", vetor[i]);
    }

}