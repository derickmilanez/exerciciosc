#include <stdio.h>
#include <stdlib.h>
#define  TAM 11

main(){
	int x, cont;
	int a[TAM];
	printf("Digite um numero inteiro: ");
	scanf("%d", &x);
	for(cont=0;cont<TAM;cont++){
		a[cont] = x * cont;
	}
	for(cont=0;cont<TAM;cont++){
		printf("Resultado de A[%d]:  %d X %d = %d \n",cont,x,cont,a[cont]);
	}
	system("pause");
}
