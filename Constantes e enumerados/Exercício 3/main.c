#include <stdio.h>

enum e {OCIOSO, ESTACIONADO, SUBINDO, DESCENDO};

int main(){

    // 3. Escreva um código que defina um tipo enumerado para representar os estados de um elevador com respeito ao seu movimento: 
    // ocioso (aguardando umachamada), estacionado (parado em certo andar para alguém entrar ou sair), subindo ou descendo. 
    // E, ainda, defina uma variável desse novo tipo.


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