#include <stdio.h>
#include <stdlib.h>

int main() {

    // 5. Escreva um programa em C que leia do teclado uma sequência de caráteres de
    // qualquer tamanho e identifique se é ou não um palíndromo. Antes de fornecer a
    // sequência de caráteres, o usuário deve informar o tamanho da sequência

    printf("Digite o tamanho do vetor: ");
    int tamanho;
    int contador = 0;
    scanf("%d", &tamanho);

    char vetor[tamanho];

    printf("Digite os caracteres: ");
    setbuf(stdin, NULL);

    for (int i = 0; i < tamanho; i++) {
        vetor[i] = getchar();
    }

    // Agora vamos verificar se a sequência é um palíndromo
    for (int i = 0; i < tamanho / 2; i++) {
        if (vetor[i] != vetor[tamanho - i - 1]) {
            contador = 1;
            break;
        }
    }

    if (contador == 0)
        printf("É um palíndromo\n");
    else
        printf("não é um palíndromo\n");

    return 0;
}
