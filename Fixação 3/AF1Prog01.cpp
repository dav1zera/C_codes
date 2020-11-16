#include <stdio.h>

int main(void){
	

	
	int num1, num2, soma, sub, mult, div;
	
	
  	printf("\n\n\tDigite dois valores: ");
	scanf("%i%i", &num1, &num2);
	
	
	soma = num1 + num2;
	sub = num1 - num2;
	mult = num1 * num2;
	div = num1 / num2;
	
	printf("\n\n\t%i + %i = %i", num1, num2, soma);
	printf("\n\n\t%i - %i = %i", num1, num2, sub);
	printf("\n\n\t%i * %i = %i", num1, num2, mult);
	printf("\n\n\t%i / %i = %i", num1, num2, div);
	
	return 0;
	
}
