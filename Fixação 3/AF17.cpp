#include <stdio.h>

int main(void){

     const float reaj = 25;
     float sal, nv_sal;


     printf("\n\n\tDigite o valor do salario: ");
     scanf("%f", &sal);


     nv_sal = sal * (reaj/100) + sal;

     printf("\n\n\tO valor do salario reajustado = %.2f", nv_sal);

     return 0;





}
