#include <math.h>
#include <stdio.h>

int main() {

    // 5. Converta o programa em Python abaixo para um programa em C, usando o comando for.

    // # Python
    // PI = 3.1416
    // R = 0
    // while R <= 6:
        // VOLUME = 4/3 * PI * (R**3)
        // print(R, VOLUME)
        // R = R + 2

    float pi = 3.1416;
    float r = 0;

    // não é necessario usar float duas vezes ao inserir em estruturas de repetição.
    
    for (float r = 0; r <= 6;) {
        float VOLUME = (4.0 / 3) * pi * (r * r * r);
        printf("%f %f\n", r, VOLUME);
        r = r + 2;
    }
}