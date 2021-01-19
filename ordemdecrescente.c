#include<stdio.h>
#include <stdlib.h> 

void main(void)
{
	float a, b;
	printf("Insira o primeiro numero: ");
	scanf("%f",&a);
	printf("Insira o segundo numero: ");
	scanf("%f",&b);
	if(a<b){
		printf("%.2f %.2f", b, a);
	}
	else
	{
		printf("%.2f %.2f", a, b);
	}
	system("pause"); 
}
