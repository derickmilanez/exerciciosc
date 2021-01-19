#include <stdio.h>
#define TAM 30

main(){
	char string[TAM] = "fulano vs ciclano";
	int i;
	for(i=0;i<TAM;i++){
		if(string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u'){
			string[i]='\0';
		}
	}
	for(i=0;i<TAM;i++){
		printf("%c",string[i]);
	}
}
