#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

struct  Aluno{
	double ra;
	char nome[50];
	struct Aluno *anterior;
};

struct Aluno *al_atual = NULL;

void cadastrar(){
	printf("1 - Cadastro----------\n\n");
	struct Aluno *al_anterior = al_atual;
	al_atual = (struct Aluno *) malloc(sizeof(struct Aluno));
	al_atual->anterior = al_anterior;
	
	printf("Digite o RA..: ");
	scanf("%lf",&al_atual->ra);
	
	printf("Digite o Nome: ");
	fflush(stdin);
	gets(al_atual->nome);
	
	printf("Dados cadastrados com sucesso!");
}

void consultar(){
	printf("2 - Consultar----------\n\n");
	double ra;
	printf("Digite o RA pra consultar: ");
	scanf("%lf",&ra);
	
	struct Aluno *al_atual_aux = al_atual;
	struct Aluno *al_prox = al_atual_aux;
	while(al_atual_aux!=NULL){
		if (al_atual_aux->ra==ra){
			break;
		}
		al_prox      = al_atual_aux;
		al_atual_aux = al_atual_aux->anterior;
	}
	if (al_atual_aux==NULL){
		if (al_atual==NULL){
			printf("A lista esta vazia!");
		}else{
			printf("RA nao encontrado!");
		}
	}else{
		printf("\nDados encontrados:\n");
		printf("RA...: %.0lf\n", al_atual_aux->ra);
		printf("NOME.: %s\n\n", al_atual_aux->nome);
		printf("O que deseja fazer:\n");
		printf("1 - Alterar\n");
		printf("2 - Excluir\n");
		printf("3 - voltar\n");
		printf("Digite a opcao: ");
		int opcao;
		scanf("%d",&opcao);
		printf("\n");
		switch(opcao){
			case 1:
				printf("Digite os novos dados:\n");
				printf("RA...: ");
				scanf("%lf",&al_atual_aux->ra);
				printf("NOME.: ");
				fflush(stdin);
				gets(al_atual_aux->nome);
				printf("Dados alterados com sucesso!");
				break;
			case 2: 
				if (al_atual_aux==al_atual){
					al_atual = al_atual->anterior ;
				}else{
					al_prox->anterior = al_atual_aux->anterior;
				}
				free(al_atual_aux);	
				printf("Excluido com sucesso!");
			
				break;
			case 3: return;
			default: printf("Opcao invalida!");
		}
	}
}

void listar_todos(){
	printf("3 - Listar todos----------\n\n");
	
	struct Aluno *al_atual_aux = al_atual;
	while(al_atual_aux!=NULL){
		printf("RA....: %.0lf\n",al_atual_aux->ra);
		printf("NOME..: %s\n",al_atual_aux->nome);
		printf("----------\n");
		al_atual_aux = al_atual_aux->anterior;
	}

}

void buscar_por_nome(){
	printf("5 - Buscar por nome\n\n");
	char nome[50];
	char string[50];
	int reg=0;
	printf("Digite o nome para localizar: ");
	fflush(stdin);
	gets(nome);
	printf("\n");
	struct Aluno *al_atual_aux = al_atual;
	while(al_atual_aux!=NULL){
		strcpy(string,al_atual_aux->nome);
		if(strstr(string,nome)!=NULL){
			printf("%s\n",al_atual_aux->nome);
			reg++;
		}
		al_atual_aux = al_atual_aux->anterior;
	}
		printf("\n");
		printf("%d registro(s) encontrado(s)",reg);
		fflush(stdin);
		getch();
}

void excluir_todos(){
	printf("6 - Excluir todos\n\n");
	struct Aluno *al_atual_aux = al_atual;
	struct Aluno *al_anterior_aux = al_atual_aux->anterior;
	while(al_atual_aux!=NULL){
		al_anterior_aux = al_atual_aux->anterior;
		al_atual_aux = al_anterior_aux;
		free(al_atual);
		al_atual = al_atual_aux;
	}
	printf("Dados excluidos com sucesso!");
}

void exibir_maior_menor(){
	printf("7 - Exibir o maior e o menor nome cadastrado\n\n");
	char maior_nome[50];
	char menor_nome[50];
	struct Aluno *al_atual_aux = al_atual;
	strcpy(maior_nome,al_atual_aux->nome);
	strcpy(menor_nome,al_atual_aux->nome);
	while(al_atual_aux!=NULL){
		if (strlen(al_atual_aux->nome)>strlen(maior_nome)){
				strcpy(maior_nome,al_atual_aux->nome);
			}
		if (strlen(al_atual_aux->nome)<strlen(menor_nome)){
				strcpy(menor_nome,al_atual_aux->nome);
			}
		al_atual_aux = al_atual_aux->anterior;
	}
		printf("\nO maior nome e %s\n",maior_nome);
		printf("O menor nome e %s\n\n",menor_nome);
		fflush(stdin);
		getch();
}
	

main(){
	int opcao;
	
	do{
		system("cls");
		printf("#### SISTEMA DE GERENCIAMENTO DE ALUNOS ####\n\n");
		
		printf("1 - Cadastrar aluno\n");
		printf("2 - Consultar\n");
		printf("3 - Listar todos\n");
		printf("4 - Sair\n\n");
		
		printf("5 - Buscar por nome (completo ou uma parte do nome)\n");
		printf("6 - Excluir todos\n");
		printf("7 - Exibir o maior e o menor nome cadastrado\n\n");
		
		printf("Digite a opcao: ");
		scanf("%d",&opcao);
		system("cls");
		switch(opcao){
			case 1: cadastrar();          break;
			case 2: consultar();          break;
			case 3: listar_todos();       break;
			case 4: printf("Saindo...");  break;
			case 5: buscar_por_nome();    break;
			case 6: excluir_todos();      break;
			case 7: exibir_maior_menor(); break;
			default:
				printf("Opcao invalida!");
		}
		fflush(stdin);
		getch();
	}while(opcao!=4);
		
}

