#include <stdio.h>

int main(){
	
	float sal_fun, ir;
	
	printf("\n\n\tDigite o salario do funcionario: ");
	scanf("%f", &sal_fun);
	
	ir = 0.05 * sal_fun;
	
	printf("\n\n\tO valor da renda a ser pago == R$%.2f reais", ir);
	
	return 0;
	
}
