#include <stdlib.h>
#include <stdio.h>

main(){
	int x, cont, mult;
	printf("Digite um numero inteiro: ");
	scanf("%d", &x);
	for(cont=0;cont<=10;cont++){
		mult = x * cont;
		printf("%d X %d = %d\n", x, cont, mult);
	}
	system("pause");
}
