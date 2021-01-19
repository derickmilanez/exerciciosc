#include <stdlib.h>
#include <stdio.h>

main(){
	int cont, soma;
	soma = 0;
	for(cont=0; cont<=30; cont++){
		soma= soma + cont;
	}
	printf("Resultado: %d\n", soma);
	system("pause");
}
