#include <stdio.h>
#include <stdlib.h>

int main() {
    // 6. Escreva um programa em C que leia do teclado uma sequência qualquer de valores
    // inteiros e armazene-a em um vetor v. Em seguida, leia do teclado um valor inteiro x e
    // procure esse valor no vetor v. O programa deve informar se x foi ou não encontrado em
    // v. Se encontrado, deve informar o índice do vetor onde x se encontra.

    printf("Digite o tamanho do vetor: ");
    int tamanho;
    scanf("%d", &tamanho);

    int v[tamanho];

    printf("Digite uma sequência de valores: ");
    setbuf(stdin, NULL);

    for (int i = 0; i < tamanho; i++){
        v[i] = getchar();
        putchar(v[i]);
    }

    int x;
    printf("Digite um valor inteiro X: ");
    scanf("%d ", &x);


    int indice = -1;
    int encontrado = 0;
    for (int i = 0; i < tamanho; i++){
        if (v[i] == x){
            indice = i;
            encontrado = 1;
            break;
        }
    }

    if (encontrado){
        printf("%d foi encontrado no indice %d", x, indice);
    } else{
        printf("%d nao foi encontrado.", x);
    }

}