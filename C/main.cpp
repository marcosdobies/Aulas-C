#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
  int numero1 = 0;
  int numero2 = 0;
  int resultado = 0;
  
  printf ("Bem vindo a minha primeira calculadora");
  
  printf("\nPor favor, digite um numero: ");
  scanf("%i", &numero1);
  
  printf("\nPor favor, digite outro numero: ");
  scanf("%i", &numero2);
  
  resultado = numero1 + numero2;
  
  printf("\nA soma dos numeros e: %i", resultado);
  printf("\nO endereco da memoria e: %i", &resultado);
  
  system("PAUSE");
	
	return 0;
}

/* tipos de fun��o na linguagem C:
         int - n�meros inteiros - 7 8 9 10 -1 -2 -3 -4 %i
         float - n�meros fracionados (Ponto Flutuante) - 7.5 -8.09 10.005 0.00001 %f
         double - n�meros fracionados (Ponto Flutuante) - 0.000000000001 %lf ou %d
         char - caractere - '7' 'a' %c
         bool - 0 e 1     
*/
