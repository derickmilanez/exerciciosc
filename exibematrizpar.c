#include<stdio.h>
#include<stdlib.h>

#define LINS 4
#define COLS 4

main(){
	int l, c;
	int m[LINS][COLS];
	for(l=0;l<LINS;l++){
		for(c=0;c<COLS;c++){
			printf("Digite o numero da posicao m[%d][%d]: ", l, c);
			scanf("%d",&m[l][c]);
		}
	}
	printf("--------------------\n");
	printf("Resultado da Matriz: \n");
	
	for(l=0;l<LINS;l++){
		for(c=0;c<COLS;c++){
			printf("%d ", m[l][c]);
		}
		printf("\n");
	}
	printf("--------------------\n");
	printf("Numeros pares da matriz: \n");
	
	for(l=0;l<LINS;l++){
		for(c=0;c<COLS;c++){
			if(m[l][c]%2==0){
				printf("Numero par encontrado (%d) em m[%d][%d]\n", m[l][c],l,c);
			}
		}
	}
	printf("--------------------\n");	
	system("pause");
}
