#include <stdio.h>

int main(void){
	
	float nota1, nota2, nota3, nota4, media;
	
	printf("DIGITE SUAS QUATRO NOTAS: ");
	scanf("%f%f%f%f", &nota1, &nota2, &nota3, &nota4);
	
	media = (nota1 + nota2 + nota3 + nota4) / 4;
	
	printf("Sua nota media = %.1f\n", media);
	
	return 0;
	
}


