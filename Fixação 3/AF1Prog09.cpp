#include <stdio.h>

int main(void){
	
	float n1, n2, media_p;
    int p1, p2;
	
	
	printf("\n\n\tDigite duas notas: ");
	scanf("%f%f", &n1, &n2);
    printf("\n\n\tEscreva os pesos: ");
    scanf("%i%i", &p1, &p2);
    
    media_p = ((n1*p1)+(n2*p2)) / (p1 + p2);
    
    printf("\n\n\tA media ponderada == %.1f", media_p);
    
   
    return 0;
	
}
