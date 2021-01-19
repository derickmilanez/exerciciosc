#include<stdio.h>
#include<stdlib.h>

#define LINS 5
#define COLS 5

main(){
	int l, c, s, q;
	s = 0;
	q = 0;
	int m[LINS][COLS];
	for(l=0;l<LINS;l++){
		for(c=0;c<COLS;c++){
			printf("Digite o numero da posicao m[%d][%d]: ", l, c);
			scanf("%d",&m[l][c]);
		}
	}
	
	printf("Resultado da Matriz: \n");
	
	for(l=0;l<LINS;l++){
		for(c=0;c<COLS;c++){
			s = s +  m[l][c];
			q++;
			printf("%d ", m[l][c]);
		}
		printf("\n");
	}
	int media = s/q;
	printf("Media da matriz[%d][%d]: %d\n",LINS,COLS,media);
	system("pause");
}
