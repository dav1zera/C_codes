#include <stdio.h>

int main(void){
	
	int altura, base, area, peri;	


 	printf("\n\n\tDigite a altura: ");
 	scanf("%i", &altura);
 	printf("\n\n\tDigite a base: ");
 	scanf("%i", &base);
 	
 	
 	peri = 2 * (altura + base);
    area = base * altura;
 	
 	printf("\n\n\tA area do perimetro == %icm", peri);
    printf("\n\n\tA area do retangulo == %icm", area);
 	
 	return 0;
}
