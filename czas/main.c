#include <stdio.h>
#include <time.h>

int main(){
  struct tm czas = {0};  //struktura czas, wszystko na zero
  struct tm *teraz;      //wskaznik na strukture teraz
  time_t czasteraz;      //time_t - ilosc sekund
  time_t sek;
  int rok;

  czasteraz = time(NULL); //czasteraz staje sie iloscia sekund do teraz
  teraz = localtime (&czasteraz); //teraz staje sie wskaznikiem na strukture wyrazajaca czas do teraz

  struct tm tera = *teraz; //tera staje sie struktura na ktora wskaznikiem jest teraz
  rok = tera.tm_year; //rok staje sie elementem tm_year ze struktury tera

  printf("Podaj wiek: ");
  int wiek;
  scanf("%i", &wiek);
  rok -= wiek;  //zmniejsz rok o wartosc zmiennej wiek
  czas.tm_year = rok; //tm_year w strukturze czas przyjmuje wartosc zmiennej rok

  sek = czasteraz - mktime(&czas);
  printf("Minelo %u sekund\n", sek);
return 0;
}
