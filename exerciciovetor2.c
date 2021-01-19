#include <stdio.h>
#include <stdlib.h>
#define  TAM 10

main(){
	float a[TAM];
	float b[TAM];
	int i;
	for(i=0;i<TAM;i++){
		printf("Digite um numero para A[%d]: ", i);
		scanf("%f",&a[i]);
	}
	for(i=0;i<TAM;i++){
		b[i] = a[i] + a[i];
		printf("Resultado de B[%d]: %.2f \n",i,b[i]);
	}
	system("pause");
}
