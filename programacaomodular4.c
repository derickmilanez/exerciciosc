#include <stdio.h>

float a, b;

void leitura(){
	printf("Digite o valor de A: ");
	scanf("%f",&a);
	printf("Digite o valor de B: ");
	scanf("%f",&b);
}

void divisivel(){
	int a2, b2;
	a2 = a;
	b2 = b;
	if(a2%b2==0){
		printf("A eh divisivel por B");
	}else{
		printf("A nao eh divisivel por B");
	}
}

float quadrado(){
	float q;
	q = b * b;
	return q;
}

main(){
	float q;
	leitura();
	divisivel();
	q = quadrado();
	printf("\n%.2f", q);
}
