#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){

    // Escreva um programa que imprima os valores
    // máximo e mínimo para variáveis dos seguintes tipos:
    // 1. int
    // 2. short
    // 3. long
    // 4. float
    // 5. double
    // 6. long double

    printf("INT\n");
    printf("Valor MIN:%d\n", INT_MIN);
    printf("Valor MAX:%d\n\n", INT_MAX);

    printf("SHORT\n");
    printf("Valor MIN:%d\n", SHRT_MIN);
    printf("Valor MAX:%d\n\n", SHRT_MAX);

    printf("LONG\n");
    printf("Valor MIN:%ld\n", LONG_MIN);
    printf("Valor MAX:%ld\n\n", LONG_MAX);

    printf("FLOAT\n");
    printf("Valor MIN:%g\n", FLT_MIN);
    printf("Valor MAX:%g\n\n", FLT_MAX);

    printf("DOUBLE\n");
    printf("Valor MIN:%g\n", DBL_MIN);
    printf("Valor MAX:%g\n\n", DBL_MAX);

    printf("LONG DOUBLE\n");
    printf("Valor MIN:%Lf\n", LDBL_MIN);
    printf("Valor MAX:%Lf\n\n", LDBL_MAX);

    printf("\n")

    return 0;
}