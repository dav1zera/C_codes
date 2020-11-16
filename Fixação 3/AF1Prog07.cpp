#include <stdio.h>

int main(void){
	
	printf("-------------BEM VINDO------------");
	
	const float tx = 2.0;
	int temp;
	float prest,vl;
	
	printf("\n\n\tDigite o valor: ");
	scanf("%f", &vl);
	printf("\n\n\tDigite o tempo de atraso: ");
	scanf("%i", &temp);
	
	prest = (vl*(tx/100)*temp)+vl;
	
	printf("\n\n\tO valor final da prest == %.1f", prest);
	
	

	
	return 0;
	
	
}
