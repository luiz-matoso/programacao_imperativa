#include <stdio.h>

typedef enum { DOMINGO, SEGUNDA, TERCA, QUARTA, QUINTA, SEXTA, SABADO } Dias;

int main() {
    Dias hoje = QUINTA;

    switch (hoje) {
        case DOMINGO:
            printf("Hoje é domingo.\n");
            break;
        case SEGUNDA:
            printf("Hoje é segunda.\n");
            break;
        case TERCA:
            printf("Hoje é terça.\n");
            break;
        case QUARTA:
            printf("Hoje é quarta.\n");
            break;
        case QUINTA:
            printf("Hoje é quinta.\n");
            break;
        case SEXTA:
            printf("Hoje é sexta.\n");
            break;
        case SABADO:
            printf("Hoje é sábado.\n");
            break;
        default:
            printf("Dia inválido.\n");
            break;
    }
}