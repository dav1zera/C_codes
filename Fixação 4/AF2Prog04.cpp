#include <stdio.h>

int main(void){

int num1, num2, soma;

printf("\n\n\tDigite dois numeros inteiros: ");
scanf("%i%i", &num1, &num2);

soma = num1 + num2;

if ((soma >= 10))
  printf("\n\n\tSoma maior que 10");

else
  if((soma <= 10))
  printf("\n\n\tSoma menor que 10");



}
