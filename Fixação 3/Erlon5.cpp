#include <stdio.h>

int main(void){
	
	float celsius, f;
	
	printf("Digite a temperatura em F: ");
	scanf("%f", &f);
	
	celsius = (f - 32) * (5 / 9.0);
	
	printf("A temperatura em celsius == %f", celsius);
	
		
	return 0; 
	
}
