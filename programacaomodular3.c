#include <stdio.h>

int m, n, p;

void leitura(){
	printf("Digite o valor de M: ");
	scanf("%d",&m);
	printf("Digite o valor de N: ");
	scanf("%d",&n);
	printf("Digite o valor de P: ");
	scanf("%d",&p);
}

int fatorial(){
	int fat, cont;
	fat = 1;
	for(cont = 1; cont <= m; cont++){
		fat = fat * cont;
	}
	return fat;
}

int expressao(){
	int mat;
	mat = (m-n)*p;
	return mat;
}

int parimpar(){
	if(n%2==0){
		return 1;
	}else{
		return 0;
	}
}

main(){
	int f, e, pi;
	leitura();
	f = fatorial();
	e = expressao();
	pi = parimpar();
	printf("\n%d", f);
	printf("\n%d", e);
	printf("\n%d", pi);
}
