#include <stdio.h>
#include <string.h>

struct Data{
	int dia;
	int mes;
	int ano;
};

struct Endereco{
	char logr[50];
	int num;
	char bair[40];
	char cid[50];
	char cep[8];
};

struct Cliente{
	int codigo;
	char nome[70];
	struct Data dataNasc;
	struct Endereco end;
};

main () {
	struct Cliente umClient;
	printf("Digite o codigo do cliente: ");
	scanf("%d", &umClient.codigo);
	printf("\nDigite o nome do cliente: ");
	fflush(stdin);
	gets(umClient.nome);
	printf("\nDigite a data de nascimento do cliente: ");
	printf("\nDia: ");
	scanf("%d", &umClient.dataNasc.dia);
	printf("Mes: ");
	scanf("%d", &umClient.dataNasc.mes);
	printf("Ano: ");
	scanf("%d", &umClient.dataNasc.ano);
	fflush(stdin);
	printf("\nDigite o logradouro do cliente: ");
	gets(umClient.end.logr);
	fflush(stdin);
	printf("\nDigite o numero da casa do cliente: ");
	scanf("%d", &umClient.end.num);
	fflush(stdin);
	printf("\nDigite o bairro do cliente: ");
	gets(umClient.end.bair);
	printf("\nDigite o nome da cidade do cliente: ");
	gets(umClient.end.cid);
	printf("\nDigite o cep do cliente: ");
	gets(umClient.end.cep);
	
	printf("\nCodigo do cliente: %d", umClient.codigo);
	printf("\nNome do cliente: ");
	puts(umClient.nome);
	printf("\nData de nascimento do cliente: %d/%d/%d", umClient.dataNasc.dia, umClient.dataNasc.mes, umClient.dataNasc.ano);
	printf("\nLogradouro: ");
	puts(umClient.end.logr);
	printf("\nNumero: %d", umClient.end.num);
	printf("\nBairro: ");
	puts(umClient.end.bair);
	printf("\nCidade: ");
	puts(umClient.end.cid);
	printf("\nCep: ");
	puts(umClient.end.cep);
}
