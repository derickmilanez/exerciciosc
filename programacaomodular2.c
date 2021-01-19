#include <stdio.h>

int x, y;

void leitura(){
	printf("Digite o valor de X: ");
	scanf("%d",&x);
	printf("Digite o valor de Y: ");
	scanf("%d",&y);
}

int expressao(){
	int mat;
	mat = 2*(y+x);
	return mat;
}

int maiornum(){
	if(x>y){
		return x;
	}else{
		return y;
	}
}

main(){
	int r, t;
	leitura();
	r = expressao();
	t = maiornum();
	printf("\n%d", r);
	printf("\n%d", t);
}
