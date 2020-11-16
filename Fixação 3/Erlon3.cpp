#include <stdio.h>
#include <math.h>

int main(){
	
	const float pi = 3.14;
	float raio, area;
	
	
	
	
	//Entrada de dados
	printf("\n\n\tDigite o valor do Raio: ");
	scanf("%f",&raio);
	
	
	
	//Processamento
	
	area = pi * pow(raio,2);
	
	
	// Saída
	
	printf("\n\n\tA Circunferencia de raio %.2f tem area de %.2f u.a",raio,area);
	
	return 0;
}
