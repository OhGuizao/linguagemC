#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

/* 
Cálculo do IMC - aula 4
@author Guilherme Vieira
 */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	printf("d888888b .88b  d88.  .o88b.\n");
 	printf("  `88'   88'YbdP`88 d8P  Y8\n"); 
   	printf("   88    88  88  88 8P\n");     
   	printf("   88    88  88  88 8b\n");       
  	printf("  .88.   88  88  88 Y8b  d8\n");  
	printf("Y888888P YP  YP  YP  `Y88P'\n");
	system("color 70");
	printf("_______________________________________\n");
	printf("_______________________________________\n");
	printf("\n\n");  
	//variáveis
	float imc,peso,altura;
	//entrada
	printf("digite o seu peso em Kg: ");
	scanf("%f",&peso);
	printf("Digite a sua altura em Metros: ");
	scanf("%f",&altura);
	//processamento
	imc=peso / (altura * altura);
	//saída
	printf("IMC: %.2f\n\n", imc);
	printf("_______________________________________\n");
	
	system("pause");
	
	return 0;
}
