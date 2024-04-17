#include <stdio.h>
#include <stdlib.h>

int main() {

    // 7. Escreva um programa em C que leia do teclado uma sequência qualquer de valores
    // inteiros e armazene-a em um vetor v. Em seguida, gere um novo vetor de inteiros com
    // a mesma capacidade e os mesmos elementos de v, porém em ordem crescente.

    printf("Digite o tamanho do vetor: ");
    int tamanho;
    scanf("%d", &tamanho);

    int v[tamanho];

    printf("Digite uma sequência de valores: ");
    setbuf(stdin, NULL);

    for (int i = 0; i < tamanho; i++){
        scanf("%d", &v[i]);
    }


    int temp;
    for (int i = 0; i < tamanho; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            if (v[i] > v[j]) {
                temp =  v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }
        
    printf("Vetor ordenado em ordem crescente:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", v[i]);
    }

    return 0;
}

