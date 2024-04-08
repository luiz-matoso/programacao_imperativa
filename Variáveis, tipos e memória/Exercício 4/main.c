// 4. Faça a representação simbólica da memória do
// sistema para as variáveis definidas no programa
// abaixo.

#include <stdbool.h>
#include <stdio.h>

int main() {
  short a = 10;
  double b = 45.9;
  char c = '$';
  bool d = true;

  printf("%d\n", a);
  printf("%lf\n", b);
  printf("%c\n", c);
  printf("%d\n", d);

  return 0;
}