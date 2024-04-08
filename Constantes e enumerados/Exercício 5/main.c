#include <stdio.h>

typedef enum { OCIOSO, ESTACIONADO, SUBINDO, DESCENDO } e;

int main() {

    // 5. Escreva um código que defina um um tipo (usando #typedef) para representar os estados de um elevador com respeito ao seu movimento: 
    // ocioso (aguardando uma chamada), estacionado (parado emcerto andar para alguém entrar ou sair), subindo oudescendo. 
    // E, ainda, defina uma variável desse novotipo.

    e elevador;

    elevador = ESTACIONADO;

    switch (elevador) {
    case OCIOSO:
        printf("Ocioso\n");
        break;
    case ESTACIONADO:
        printf("Estacionado\n");
        break;
    case SUBINDO:
        printf("Subindo\n");
        break;
    case DESCENDO:
        printf("Descendo\n");
        break;
    default:
        printf("Estado inválido\n");
        break;
    }

    return 0;
}