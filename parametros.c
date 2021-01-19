#include<stdio.h>

void procedimento(float p, float q, float r){
	float resp;
	resp = p + (q * r);
	printf("Resultado de p + (q * r) = %.2f\n", resp);
}

int fatorial(int x){
	int fat, cont;
	fat = 1;
	for(cont = 1; cont <= x; cont++){
		fat = fat * cont;
	}
	return fat;
}

main(){
	float p, q, r;
	int x, f;
	p = 3.5;
	q = 2.5;
	r = 4.5;
	x = 5;
	f = fatorial(x);
	procedimento(p,q,r);
	printf("Fatorial = %d", f);
}
