#include <stdio.h>
#include "lib.h"

int main(){
  int a,b,c,i,s,x,y;
  printf("Podaj trzy liczby calkowite: ");
  a = int_in();
  b = int_in();
  c = int_in();
  i = iloczyn(a,b,c);
  s = suma(a,b,c);
  x = min(a,b,c);
  y = max(a,b,c);
  printf("Iloczyn: %i\nSuma: %i\nNajwieksza: %i\nNajmniejsza: %i\n",i,s,y,x);
  return 0;
}
