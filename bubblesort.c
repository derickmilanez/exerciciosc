#include <stdio.h>

void leitura(int vet[], int tam){
	int i;
	for(i=0;i<tam;i++){
		scanf("%d",&vet[i]);
	}
}
 
void Bubble_Sort (int vet[], int tam){
 
    int i, j;
    int aux;
 
    for (i=1; i<tam;i++){
        for (j=0;j<tam-i;j++){
              if (vet[j] > vet[j+1]){
                     aux = vet[j];
                     vet[j] = vet[j+1];
                     vet[j+1] = aux;
              }
         }
      }
}

void exibe(int vet[], int tam){
	int i;
	for(i=0;i<tam;i++){
		printf("\nvet[%d] = %d",i,vet[i]);
	}
}
 
main(){
    int vet[5];
    int tam = 5;
    leitura(vet,tam);
    exibe(vet, tam);
    printf("\n----------------------------");
    Bubble_Sort (vet, tam);
    exibe(vet, tam);
}
