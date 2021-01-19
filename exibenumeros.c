#include <stdlib.h>
#include <stdio.h>

main(){
	int n1, n2;
	printf("Digite o inicio do intervalo: ");
	scanf("%d", &n1);
	printf("Digite o fim do intervalo: ");
	scanf("%d", &n2);
	n2 = n2 - 1;
	while (n2>n1){
		n1++;
		printf("%d\n", n1);
	}
	system("pause");
}
