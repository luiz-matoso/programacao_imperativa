#include <stdio.h>

int main() {
    int numeros[] = {1, 2, 2, 3, 4, 4, 5};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    // Verifica cada número no array
    for (int i = 0; i < tamanho; i++) {
        int repetido = 0; // Flag para indicar se o número já foi encontrado antes

        // Verifica se o número já foi encontrado anteriormente
        for (int j = 0; j < i; j++) {
            if (numeros[i] == numeros[j]) {
                repetido = 1; // O número foi encontrado antes
                break;
            }
        }

        // Se o número não foi encontrado anteriormente, imprime
        if (!repetido) {
            printf("%d\n", numeros[i]);
        }
    }

    return 0;
}
