#include<stdio.h>
#include <stdlib.h> 

void main(void)
{
	float a, b, c;
	printf("Insira o primeiro numero: ");
	scanf("%f",&a);
	printf("Insira o segundo numero: ");
	scanf("%f",&b);
	printf("Insira o terceiro numero: ");
	scanf("%f",&c);
	if(a>b && b>c){
		printf("%.2f %.2f %.2f", a, b, c);
	}
	else if(c>b && b>a)
	{
		printf("%.2f %.2f %.2f", c, b, a);
	}
	else if(a>c && c>b)
	{
		printf("%.2f %.2f %.2f", a, c, b);
	}
	else if(b>a && a>c)
	{
		printf("%.2f %.2f %.2f", b, a, c);
	}
	else if(c>a && a>b)
	{
		printf("%.2f %.2f %.2f", c, a, b);
	}
	else
	{
		printf("%.2f %.2f %.2f", b, c, a);
	}
	system("pause"); 
}
