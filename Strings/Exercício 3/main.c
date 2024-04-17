#include <stdio.h>
#include <string.h>

int main(){

    // 3. Elabore um programa em C que leia duas cadeias de caracteres (A e B) e imprima
    // uma nova cadeia (C) com os elementos da cadeia A que não estão presentes em B

    char cadeiaA[] = "abcde";
    char cadeiaB[] = "abc";
    char cadeiaC[100];

    int qtdLetras = 0;

    for (int i = 0; i < strlen(cadeiaA); i++){

        int letrasEmB = 0;

        for (int n = 0; n < strlen(cadeiaB); n++){
            if (cadeiaA[i] == cadeiaB[n]){
                letrasEmB = 1;
                break;
            }
        }
        if (!letrasEmB) {
                cadeiaC[qtdLetras] = cadeiaA[i];                
                qtdLetras++;
            }
    }

    cadeiaC[qtdLetras] = '\0';

    printf("%s ", cadeiaC);

    return 0;
}