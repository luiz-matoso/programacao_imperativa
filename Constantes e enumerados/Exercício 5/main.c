#include <stdio.h>

typedef enum { OCIOSO, ESTACIONADO, SUBINDO, DESCENDO } e;

int main() {
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