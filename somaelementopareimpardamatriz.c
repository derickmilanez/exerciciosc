#include<stdio.h>
#include<stdlib.h>

#define LINS 4
#define COLS 3

main(){
	int l, c,sp, si;
	sp = 0;
	si = 0;
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
	
	for(l=0;l<LINS;l++){
		for(c=0;c<COLS;c++){
			if(m[l][c]%2==0){
				sp = sp + m[l][c];
			}
		}
	}
	printf("--------------------\n");
	printf("Soma dos numeros pares da matriz: %d\n", sp);
	for(l=0;l<LINS;l++){
		for(c=0;c<COLS;c++){
			if(m[l][c]%2==1){
				si = si + m[l][c];
			}
		}
	}
	printf("Soma dos numeros impares da matriz: %d", si);
}
