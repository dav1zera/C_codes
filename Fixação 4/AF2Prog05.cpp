#include <stdio.h>

int main(void){
 
 int num;
 
 printf("\n\n\tDigite um numero inteiro: ");
 scanf("%i", &num);

 if ((num % 2 == 0))
 printf("\n\n\tO numero %i e Par", num);
 
 else
 printf("\n\n\tO numero %i e impar", num);

 return 0;
}
