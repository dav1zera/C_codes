#include <stdio.h>
#include <cstdlib>
#include <iostream>


int main(int){

  int b = 0, a = 0;
  float area = 0;

  printf("\n\n\tDigite o valor da base: ");
  scanf("%i", &b);
  printf("\n\n\tDigite o valor da altura: ");
  scanf("%i", &a);

  area = (b * a) / 2

  ;printf("\n\n\tO valor da area do triangulo == %.2f\n\n", area);

  return 0;

}
