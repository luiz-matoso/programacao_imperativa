#include <stdio.h>
#include <math.h>

int main() {

    // 9. Escreva um programa em C que calcule a média e o desvio padrão das notas de
    // uma turma de, no máximo, 50 estudantes. Para cada estudante, há uma nota entre 0 e
    // 10, com apenas uma casa decimal.

    printf("Digite a quantidade de estudantes: ");
    int tamanho;
    scanf("%d", &tamanho);

    int v[tamanho];

    if (tamanho <= 50){
        printf("Digite a nota dos alunos (1-10): ");
        setbuf(stdin, NULL);

        for (int i = 0; i < tamanho; i++){
            scanf("%d", &v[i]);
        } 
    } else{
        printf("O máximo é de 50!");
        return 0;
    }

    float soma = 0;
    for (int i = 0; i < tamanho; i++){
        soma += v[i];
    }

    float media = soma / tamanho;

    printf("média: %.1f\n", media);

    float somaDesvio = 0;
    for (int i = 0; i < tamanho; i++){
        somaDesvio += pow(v[i] - media, 2);
    }

    float desvioPadrao = sqrt(somaDesvio / (tamanho));
    printf("desvio padrão %.2f\n", desvioPadrao);

    return 0;
}
