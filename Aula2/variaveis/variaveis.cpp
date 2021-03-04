#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	Aula 2 - Variaveis
	@author Guilherme Vieira
*/

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portugueses");
	
	//variaveis 1
	char professor[30] = {"Kleber Bambam"};
	char personal = 's' ;
	int periodo = 1;
	float cargaHoraria = 30.5;
	double salario = 3500.65;
	
	
	
	//tela inicial
	printf("                            __      ___ __ __   \n");
	printf(".-----.--------.---.-.----.|  |_  .'  _|__|  |_ \n");
	printf("|__ --|        |  _  |   _||   _| |   _|  |   _|\n");
	printf("|_____|__|__|__|___._|__|  |____| |__| |__|____|\n");                                            
	printf("________________________________________________\n\n");
	system("color 06");
	system("pause");
	system("cls");
	
	//funcionarios
	system("color 0F");
	printf("DADOS DE FUNCIONARIOS\n");
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
	
	
	
	
	//variaveis
	char aluno[30];//[30] -> maximo de 30 caracteres
	char sexo;
	int idade;
	float peso,altura,imc;
	
	
	//ENTRADA DE DADOS
	printf("Cadastro De Aluno\n");
	printf("_______________________________________\n");
	printf("Nome do aluno: ");
	//comando gets é usado especificamento para capturar String (char[])
	gets(aluno);
	printf ("Sexo(M/F):");
	// o comando scanf é usado para capturar os demias variavies
	// o simbolo &(amper) é usado para referencia de memoria
	scanf("%c",&sexo);	
	printf("Idade: ");
	scanf("%d", &idade);
	printf("Peso(kg): ");
	scanf("%f", &peso);
	// ATENÇÃO!	Para capturar um numero não inteiro usar (,) virgula
	printf("Altura(m): ");
	scanf("%f", &altura);
	//PROCESSAMENTO
	imc=peso / (altura*altura);
	//SAIDA
	printf("IMC: %.2f\n");
	//STATUS DE ACORDO COM A TABELA DO IMC
	if (imc < 17){
		printf("Muito abaixo do peso\n");
	} else if (imc <18.5){
		printf("Abaixo do peso\n");
	}
	

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
	printf("IMC: %.2f\n", imc);
	printf("_______________________________________\n");
	system("pause");
	return 0;
}
