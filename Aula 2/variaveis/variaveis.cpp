#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	Aula 2 - Variaveis
	@author Guilherme Vieira
*/

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portugueses");
	//Tipos variaveis
	char professor[30] = {"Guilherme Vieira"};
	char personal = 's' ;
	int periodo = 1;
	float cargaHoraria = 30.5;
	double salario = 3500.65;
	printf("Academia fisical\n");
	printf("_______________________________________\n");
	// %s -> Ler o tipo de variável (Char[])
	// , (virgula) concatenar(unir) um texto com uma variável
	printf("Professor: %s\n", professor);
	// %c -> Ler o tipo de variavél (Char)
	printf("Personal Trainer(s/n): %c\n", personal);
	// %d -> Ler o tipo de variavel (int)
	printf("Periodo:%d\n", periodo);
	// %f -> Ler o tipo de variavel (float)
	// .1 antes de %f arredonda para uma casa deciaml
	printf("Carga horaria semanal: %.1f\n", cargaHoraria);
	// %lf-> Ler o tipo de variavel (double)
	printf("Salario:R$ %.2lf\n", salario);
	printf("_______________________________________\n");
	system("pause");
	system("cls");
	// Entrada de dados
	char aluno[30];//[30] -> maximo de 30 caracteres
	char sexo;
	int idade;
	float peso,altura;
	printf("Cadastro De Aluno\n\n");
	printf("Nome do aluno: ");
	//comando gets é usado especificamento para capturar String (char[])
	gets(aluno);
	printf ("Sexo(M/F):");
	// o comando scanf é usado para capturar os demias variavies
	//q o simbolo &(amper) é usado para referencia de memoria
	scanf("%c",&sexo);	
	printf("Idade: ");
	scanf("%d", &idade);
	printf("Peso(kg): ");
	scanf("%f", &peso);
	// ATENÇÃO!	Para capturar um numero não inteiro usar (,) virgula
	printf("Altura(m): ");
	scanf("%f", &altura);
	printf("\n");
	system("pause");
	system("cls");
	printf("ficha do aluno\n");
	printf("_______________________________________\n");	
	printf("\n");
	printf("Aluno: %s\n", aluno);
	printf("Sexo: %c\n", sexo);
	printf("Idade: %d\n", idade);
	printf("Peso: %.2f\n", peso);
	printf("Altura: %.2f\n", altura);
	printf("_______________________________________\n");
	system("pause");
	return 0;
}
