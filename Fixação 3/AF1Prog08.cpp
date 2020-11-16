#include <stdio.h>

int main(){
	
	int nr_coelhos;
	float custo;
	
	printf("\n\n\tDigite o numero de coelhos: ");
	scanf("%i", &nr_coelhos);
	
	custo = (nr_coelhos * 0.70) / 18 + 10;
	
	printf("\n\n\tO custo de criacao de coelhos == R$%.2f reais", custo);
	
	return 0;
}
