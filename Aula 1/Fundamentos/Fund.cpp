#include <iostream>
#include <locale.h>

/*
	Fundamentos da linguagem c
	@author Guilherme Viera 
*/

int main(int argc, char** argv) {
	//a linha abaixo configura idioma para o Português
	setlocale(LC_ALL, "Portuguese");
	//a linha abaixo modifica a cor do background(fundo) e do texto do prompt
	//color 1° fundo 2° texto
	system("color 84");
	printf("Olá mundo\n");
	printf("Guilherme Viera\n");
	system("pause");
	//a linha abaixo "Limpa" a tela do prompt de comando
	system("cls");
	system("color 9F");
	printf("Código de cores\n\n");
	printf("0 - preto\n");
	printf("1 - azul\n");
	printf("2 - verde\n");
	printf("3 - verde água\n");
	printf("4 - vermlho\n");
	printf("5 - roxo\n");
	printf("6 - amarelo\n");
	printf("7 - branco\n");
	printf("8 - cinza\n");
	printf("9 - azul claro\n");
	printf("A - verde claro\n");
	printf("B - verde água claro\n");
	printf("C - vermelho claro\n");
	printf("D - lilás\n");
	printf("E - amarelo claro\n");
	printf("F - branco brilhante\n");
	system("pause");
	return 0;
}
