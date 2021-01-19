#include <stdio.h>
#include <stdlib.h>

main(){
	int *j, b;
	b =10;
	j = &b;
	b++;
	printf("%d", *j);
}
