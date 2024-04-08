#include <stdio.h>

int main(){

    // 7. Converta o programa em Python abaixo para um programa em C, usando while e break.
    
    // # Python
    // i=10
    // while i > 0 :
    //     i = i – 0.25
    //     print (i)
    //     if (i**2) + 1 ≥ 1.45 :
    //         i = i + 0,20;
    //   else
    //         break

    float i = 10;
    while (i > 0){
        i = i - 0.25;
        printf("%f\n", i);
        if ((i * i) + 1 >= 1.45){
        i = i + 0.20;
        } else {
            break;
        }
    }
    return 0;
}