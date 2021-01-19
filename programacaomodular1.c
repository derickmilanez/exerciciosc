#include <stdio.h>

float num;

void leitura(){
	printf("Digite um numero: ");
	scanf("%f",&num);
}

int verifica(){
	if(num<0){
		return 0;
	}
	else{
		return 1;
	}
}

float triplo(){
	float t;
	t = num * 3;
	return t;
}

main(){
	int test;
	float exibe;
	leitura();
	test = verifica();
	exibe = triplo();
	printf("\n%d",test);
	printf("\n%.2f",exibe);
}
