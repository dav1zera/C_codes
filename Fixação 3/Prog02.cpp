#include <stdio.h>
#include <stdlib.h>
int main (void)
{
  //declara��o de vari�veis do tipo inteiro
  int a, b, soma;
  
  printf("Digite um numero inteiro: ");
  scanf("%d", &a); //recebe um inteiro e armazena na vari�vel a
  
  printf("Digite um numero inteiro: ");
  scanf("%d", &b); //recebe um inteiro e armazena na vari�vel b
  soma = a + b;
  //Efetua adi��o de a com b e armazena na vari�vel soma
  
  printf("O valor da soma = %d\n", soma); //Mostra mensagem com o resultado
  
  system ("pause");
  return(0);
}
