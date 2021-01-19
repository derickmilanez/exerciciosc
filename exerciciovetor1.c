#include <stdio.h>
#include <stdlib.h>
#define  TAM 15

main(){
	int a[TAM];
	int b[TAM];
	int i;
	for(i=0;i<TAM;i++){
		printf("Digite um numero para A[%d]: ", i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<TAM;i++){
		printf("Resultado de A[%d]: %d \n",i,a[i]);
	}
	printf("---------------------------------------\n");
	for(i=0;i<TAM;i++){
		b[i] = a[i] * a[i];
		printf("Resultado de B[%d]: %d \n",i,b[i]);
	}
	system("pause");
}
