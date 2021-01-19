#include <stdio.h>

void leitura(int vet[], int tam){
	int i;
	printf("Insira os valores no vetor.\n");
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

int busca_binaria (int vet[], int tam, int elem){
     int comeco, fim, meio, pos;
     pos=-1;
     comeco=0;
     fim=tam-1;
     while (comeco<=fim){
           meio = (int) ( (comeco+fim)/2 );
           if (elem==vet[meio]){
                  pos=meio;
                  comeco=fim+1;
           }
          else if (elem > vet[meio])
                   comeco=meio + 1;
                 else fim=meio - 1; 
      }
      return(pos);
 }

main(){
	int elem;
    int vet[5];
    int tam = 5;
    leitura(vet,tam);
    printf("\nVetor desordenado: \n");
    exibe(vet, tam);
    printf("\n----------------------------");
    printf("\nVetor ordenado: \n");
    Bubble_Sort (vet, tam);
    exibe(vet, tam);
    printf("\nDigite um elemento para  buscar no vetor: ");
    scanf("%d",&elem);
    printf("\nO elemento %d se encontra na posicao vet[%d].", elem, busca_binaria(vet, tam, elem));
}
