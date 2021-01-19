#include<stdio.h>

float procedimento1(float *a){
	*a = *a * 3;
	return *a;
}

int procedimento2(int p, int *opc){
	int resp;
	if(*opc==1){
		resp = p + 5;
	}
	else if(*opc==2){
		resp = p - 2;
	}
	return resp;
}

main(){
	float a,  p;
	int opc, x;
	a = 2.5;
	opc = 2;
	p = procedimento1(&a);
	x = procedimento2(5 ,&opc);
	printf("Valor de a = %.2f", p);
	printf("Valor de procedimento2 = %d", x);
}
