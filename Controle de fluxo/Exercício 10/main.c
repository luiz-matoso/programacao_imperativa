#include <stdio.h>

int main() {

    // 10. Fazer um programa em C para calcular o valor da série S abaixo. O valor de N deve ser fornecido pelo usuário. 
    // Use a estrutura do-while para somar a sequência de termos.


    int N;

    printf("Entre com o valor de N: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("N deve ser maior ou igual a zero\n");
        exit(4);
    }

    double S = 0;

    int i = 1;
    do{
        S += (double)i / (double)(N - 1 + i);
        i++;
    }
    while (i <= N);
    
    printf("S = %.2f\n", S);

    return 0;
}