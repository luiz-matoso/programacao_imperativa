#include <stdio.h>

int main(){

    // 9. Escreva um programa em C para calcular o fatorial de um número N fornecido pelo usuário. 
    // Use a estrutura for para gerar a sequência de termos.

    int N;

    printf("Entre com um número para ver seu fatorial(1 a 16): ");
    scanf("%d", &N);

    int F = 1;

    for (int i = 1; i <= N; i++) {
        printf("%d", N + 1 - i);
        if (i != N) {
            printf("x");
        }
        F *= N + 1 - i;
    }

    printf("\n");
    printf("Valor calculado: %d", F);

    // É suportado mostrar o fatorial de 1 até 16 apenas, para aumentar esse limite basta mudar de int para long long int.

}