#include <stdio.h>


int main(){
	
	int num1, num2, troca;
	
	printf("\n\n\tDigite dois numeros inteiros distintos: ");
	scanf("%i%i", &num1, &num2);
	printf("\n\n\tValores antes da troca num1 = %i e num2 = %i\n", num1, num2);
	 
	 
	troca = num1;
	num1 = num2;
	num2 = troca;
	
	printf("\n\n\tValores depois da troca num1 = %i e num2 = %i", num1, num2);
	
	return 0;
	 
}
