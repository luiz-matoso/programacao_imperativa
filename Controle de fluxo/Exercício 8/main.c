#include <stdio.h>
#include <stdlib.h>

int main() {

    // 8. Sendo H = 1 + 1/2 + 1/3 + ¼ + ... 1/N, elaborar um programa. em C para gerar o número H. 
    // O valor de N deverá ser fornecido pelo usuário. Use a estrutura for para somar a sequência de termos.

    int N;

    printf("Entre com o valor de N: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("N deve ser maior ou igual a zero\n");
        exit(4);
    }

    double H = 0;

    for (int i = 1; i <= N; i++) {
        double termo = 1.0 / i;
        H += termo;
    }

    printf("H = %.3f\n", H);

    return 0;
}