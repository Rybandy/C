#include <stdio.h>

int int_in(){
int a;
scanf("%i", &a);
return a;
}

int iloczyn(int a, int b, int c){
return a*b*c;
}

int suma(int a, int b, int c){
return a+b+c;
}

int max(int a, int b, int c){
  int max = a;
  if (b>max){
    max = b;
  }
  if (c>max){
    max = c;
  }
  return max;
}

int min(int a, int b, int c){
  int min = a;
  if (b<min){
    min = b;
  }
  if (c<min){
    min = c;
  }
  return min;
}
