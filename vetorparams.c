#include <stdio.h>
#define TAM 15

void leituraVetor(int vetor[]){
	int i;
	for(i=0;i<TAM;i++){
		scanf("%d", &vetor[i]);
	}
}

int calculaImpares(int vetor[]){
	int i, soma;
	soma = 0;
	for(i=0;i<TAM;i++){
		if(vetor[i]%2==1){
			soma+=vetor[i];
		}
	}
	return soma;
}

int procuraVetor(int vetor[], int e){
	int i, id;
	id=0;
	for(i=0;i<TAM;i++){
		if(e==vetor[i]){
			id = i;
			i = TAM;
		}else{
			id = -1;
		}
	}
	return id;
}

main(){
	int vetor[TAM];
	int r1, r2;
	leituraVetor(vetor);
	r1=calculaImpares(vetor);
	r2=procuraVetor(vetor, 2);
	printf("%d\n",r1);
	printf("%d\n",r2);
}
