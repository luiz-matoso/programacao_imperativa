#include <math.h>
#include <stdio.h>

int main() {

    // 4. Escreva um programa em C que seja equivalente ao programa em Python abaixo.
    
    // # Python
    // # Cálculo do volume de uma esfera de raio R
    // PI = 3.1416
    // R = 0
    // while R <= 6:
        // VOLUME = 4/3 * PI * (R**3)
        // print(R, VOLUME)
        // R = R + 2

    float pi = 3.1416;
    float r = 0;

    while (r <= 6) {
        float VOLUME = (4.0 / 3) * pi * (r * r * r);
        printf("%f %f\n", r, VOLUME);
        r = r + 2;
  }
  return 0;
}