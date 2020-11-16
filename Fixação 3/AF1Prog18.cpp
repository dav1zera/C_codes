#include <stdio.h>


int main(){
	
	printf("\n\n\tBEM VINDO AO MEU PROGRAMA");
	
	float peso, engordar;
	
	printf("\n\n\tDigite o peso da pessoa: ");
	scanf("%f", &peso);
	
	engordar = peso * 5;
	
	printf("\n\n\tEssa pessoa pessa %.1f KG", peso);
    printf("\n\n\tSe ela engordar vai passar a ter %.2f KG", engordar);
    
    return 0;
	
}
