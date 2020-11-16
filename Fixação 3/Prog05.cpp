#include <stdio.h>


int main (){
	
	int num1, num2, soma, sub1, sub2, multi, div_i1, div_i2, resto1, resto2;
	float div_r1, div_r2;
	
	printf("\n\n\tDigite Dois Numeros Inteiros: ");
	scanf("%i%i", &num1, &num2);
	
	soma = num1 + num2;
	sub1 = num1 - num2;
	sub2 = num2 - num1;
	multi = num1 * num2;
	div_i1 = num1 / num2;
	div_i2 = num2 / num1;
	resto1 = num1 % num2;
	resto2 = num2 % num1;
	div_r1 = (num1 * 1.0) / num2;
	div_r2 = (num2 * 1.0) / num1;
	
	
	printf("\n\t %i + %i = %i", num1,num2, soma);
	printf("\n\t %i - %i = %i", num1,num2, sub1);
	printf("\n\t %i - %i = %i", num1,num2, sub2);
	printf("\n\t %i * %i = %i", num1,num2, multi);
	printf("\n\t %i / %i = %i", num1,num2, div_i1);
	printf("\n\t %i / %i = %i", num1,num2, div_i2);
	printf("\n\t %i % %i = %i", num1,num2, resto1);
	printf("\n\t %i % %i = %i", num1,num2, resto2);
	printf("\n\t %i / %i = %.2f", num1,num2, div_r1);
	printf("\n\t %i / %i = %.2f", num1,num2, div_r2);
	
	return 0;
	
}
