#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	Aula 3 - C�lculo da m�dia
	@author Guilherme Vieira
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	printf("C�lculo da m�dia\n");
	printf("________________________\n");
	//vari�veis
	float nota1,nota2,nota3,nota4,media;
	//entrada de dados
	printf("Digite a nota 1: ");
	scanf("%f", &nota1);
	printf("Digite a nota 2: ");
	scanf("%f", &nota2);
	printf("Digite a nota 3: ");
	scanf("%f", &nota3);
	printf("Digite a nota 4: ");
	scanf("%f", &nota4);
	printf("\n");
	//processamento
	media = (nota1 + nota2 + nota3 + nota4) / 2;
	//sa�da
	printf("Resultado: %.1f\n", media);
	system("pause");
	return 0;
}
