#include <stdio.h>

int main(){
	
	float a,b,c, equ;
	
	printf("\n\n\tDigite tres numeros: ");
	scanf("%f%f%f",&a, &b, &c);
	
	
	equ = ((a + (2 * b + c) * c) / a * a);
	
	printf("\n\n\tO resultado == %.2f", equ);
	
	return 0;
}
