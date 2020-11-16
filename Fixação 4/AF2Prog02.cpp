#include <stdio.h>

int main(void) {

char sexo; 
int idade;



printf("Digite seu sexo (M ou F): ");
scanf("%c", &sexo);

printf("Digite sua idade: ");
scanf("%i", &idade);



if (((sexo == 'F') || (sexo == 'f')) && (idade >= 21))
   printf("Atingiu a maioridade!");

  else

 if (((sexo == 'M') || (sexo == 'm')) && (idade >= 18))
    printf("Atingiu a maioridade!");

  else 

  if (((sexo == 'F') || (sexo == 'f')) || ((sexo == 'M') || (sexo == 'm')))
   printf("Não atingiu a maioridade!");

  else 

  printf("Sexo inválido ");

  return 0; 
}