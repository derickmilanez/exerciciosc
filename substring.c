#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>

struct Chaves{
	char nome[40];
	int idade;
};
main(){
	struct Chaves turma[8];
	char nome[40];
	
	strcpy(turma[0].nome,"chaves");
	strcpy(turma[1].nome,"kiko");
	strcpy(turma[2].nome,"madruguinha");
	strcpy(turma[3].nome,"chiquinha");
	strcpy(turma[4].nome,"florinda");
	strcpy(turma[5].nome,"girafales");
	strcpy(turma[6].nome,"nhonho");
	strcpy(turma[7].nome,"jaiminho");
	
	do{
		system("cls");
		printf("TURMA DO CHAVES\n\n");
		printf("Digite o nome para localizar: ");
		fflush(stdin);
		gets(nome);
		int i=0,reg_enc=0;
		printf("\n");
		
		while(i<=7){
			if (strstr(turma[i].nome, nome)!=NULL){
				printf("%s\n",turma[i].nome);
				reg_enc++;
			}
			i++;
		}
		printf("\n");
		printf("%d registro(s) encontrado(s)",reg_enc);
		fflush(stdin);
		getch();
		
	}while(strcmp(nome,"sair")!=0);
	
}
