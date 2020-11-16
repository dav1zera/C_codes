#include <stdio.h>

int main (void){
	
	float sal_fun, sal_min, quant;
	
	printf("\n\n\tDigite o salario do funcionario: ");
	scanf("%f", &sal_fun)
	
	;printf("\n\n\tDigite o salario minimo: ");
	scanf("%f", &sal_min);
	
	quant = sal_fun / sal_min;
	
	printf("\n\n\tO funcionario recebe R$%.2f salarios minimos", quant);
	
	return 0;
	
	
	
}
