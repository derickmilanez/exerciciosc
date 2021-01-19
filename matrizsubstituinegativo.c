#include<stdio.h>
#include<stdlib.h>

#define LINS 3
#define COLS 6

main(){
	int l, c;
	int m[LINS][COLS];
	for(l=0;l<LINS;l++){
		for(c=0;c<COLS;c++){
			printf("Digite o numero da posicao m[%d][%d]: ", l, c);
			scanf("%d",&m[l][c]);
			if(m[l][c]<0){
				m[l][c] = 1;
			}
		}
	}
	
	printf("Resultado da Matriz: \n");
	
	for(l=0;l<LINS;l++){
		for(c=0;c<COLS;c++){
			printf("%d ", m[l][c]);
		}
		printf("\n");
	}
	system("pause");
}
