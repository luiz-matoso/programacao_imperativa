#include <stdio.h>

int main(){
    
    // 8. Escreva um programa em C que leia do teclado uma sequência qualquer de valores
    // inteiros distintos entre si e armazene-a em um vetor. Para cada valor da sequência
    // fornecido pelo usuário, o programa deve verificar se, de fato, é um valor inédito antes
    // de inseri-lo no vetor. Caso não seja, o programa deve rejeitar o valor fornecido.

    printf("Digite o tamanho do vetor: ");
    int tamanho;
    scanf("%d", &tamanho);

    int v[tamanho];

    printf("Digite uma sequência de valores: ");
    setbuf(stdin, NULL);


    for (int i = 0; i < tamanho; i++){
        scanf("%d", &v[i]);

        for (int j = 0; j < i; j++){
            if (v[i] == v[j]){
                printf("numero ja existe!");
                i--;
                break;
            }
        }
    }

    return 0;
}