#include <stdio.h>
#define TAM 3

void leituraVetor(float vetor[]){
	int i;
	for(i=0;i<TAM;i++){
		scanf("%f", &vetor[i]);
	}
}

void exibeVetor(float vetor[]){
	int i;
	for(i=0;i<TAM;i++){
		printf("vetor[%d] = %.2f\n",i,vetor[i]);
	}
}

float maiorNum(float vetor[]){
	int i;
	float m = 0;
	for(i=0;i<TAM;i++){
		if(m<vetor[i]){
			m = vetor[i];
		}
	}
	return m;
}

main(){
	float vetor[TAM];
	float r;
	leituraVetor(vetor);
	exibeVetor(vetor);
	r = maiorNum(vetor);
	printf("%.2f", r);
}
