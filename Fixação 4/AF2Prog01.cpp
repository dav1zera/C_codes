#include <stdio.h>

int main(){
	
	int n1, n2, n3;
	
	printf("\n\n\tDigite tres numeros inteiros distintos: ");
	scanf("%i%i%i", &n1, &n2, &n3);
	
	if((n1 < n2) && (n1 < n3))
	   printf("\n\n\tMenor numero == %i", n1);
	   
	else
	    if(n2 < n3)
		printf("\n\n\tMenor numero == %i", n2);
		
		else
		printf("n\n\tMenor numero == %i", n3)   
    
    ;return 0;
}
