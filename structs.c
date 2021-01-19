#include <stdio.h>
#include <string.h>

struct DataAdmissao{
	int dia;
	int mes;
	int ano;
};

struct Funcionario {
	int matricula;
	char nome[70];
	char cargo[40];
	struct DataAdmissao umaDataAdmissao;
	float salario;	
};

main (){
	struct Funcionario umFuncionario;
	printf("Digite sua matricula: ");
	scanf("%d", &umFuncionario.matricula);
	fflush(stdin);
	printf("\nDigite seu nome: ");
	gets(umFuncionario.nome);
	printf("\nDigite seu cargo: ");
	gets(umFuncionario.cargo);
	fflush(stdin);
	printf("\nDigite sua data de admissao: ");
	printf("\nDia: ");
	scanf("%d", &umFuncionario.umaDataAdmissao.dia);
	printf("Mes: ");
	scanf("%d", &umFuncionario.umaDataAdmissao.mes);
	printf("Ano: ");
	scanf("%d", &umFuncionario.umaDataAdmissao.ano);
	printf("\nDigite seu salario: ");
	scanf("%f", &umFuncionario.salario);
	
	printf("\nMatricula: %d", umFuncionario.matricula);
	printf("\nNome: ");
	puts(umFuncionario.nome);
	printf("\nCargo: ");
	puts(umFuncionario.cargo);
	printf("\nData de Admissao: %d/%d/%d", umFuncionario.umaDataAdmissao.dia, umFuncionario.umaDataAdmissao.mes, umFuncionario.umaDataAdmissao.ano);
	printf("\nSalario: %.2f", umFuncionario.salario);
	
}
