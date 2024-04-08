#include <stdio.h>

enum e {OCIOSO, ESTACIONADO, SUBINDO, DESCENDO};

int main(){
    enum e elevador;
    
    elevador = ESTACIONADO;

    switch (elevador)
    {
    case OCIOSO:
        puts("aguardando uma chamada");
        break;
    case ESTACIONADO:
        puts("parado");
        break;
    case SUBINDO:
        puts("subindo");
        break;
    case DESCENDO:
        puts("descendo");
        break;
    default:
        puts("Erro!");
        break;
    }

}