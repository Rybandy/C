#include <stdio.h>

int wczytaj() {
int a=-1;
printf("Pierwiastek kwadratowy\n");
while(a<0){
  printf("Podaj liczbe dodatnia\n");
  scanf("%i", &a);
  if (a < 0){
    printf("Miala byc dodatnia...\n");
  }
}
return a;
}
