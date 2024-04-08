#include <stdio.h>

int main(){

    // 1. Faça a representação simbólica da memória do
    // sistema para as variáveis definidas no programa
    // contido no arquivo tipo_int.c

    int temperatura = 20;
    temperatura = -10;

    unsigned int idade = 30;
    idade = 40;

    printf("%d %d\n", temperatura, idade);

    printf("%p\n", temperatura);
    printf("%p\n", idade);

    printf("%zu\n", sizeof(int));

    return 0;
}