#include <stdio.h>
#define MAX 5

int topo;

void push (int pilha [MAX], int x)
{
    if (topo == MAX)
          printf ("\n Pilha Cheia");
    else{
    	if(x%2==0){
          pilha [topo] = x;
          topo++;
      }else{
      	printf("\n Numero impar");
	  }
    }
}

int pop (int pilha [MAX])
{
     int x;
 
     if (topo >= 1)
     {
          x = pilha [topo - 1];
          topo--;
     }
     else printf ("\n Pilha vazia");
 
    return (x);
}

void exibe (int pilha [MAX])
{
     int i;
 
     if (topo >= 1){
         for (i=0; i<topo; i++) 
             printf ("\n Pilha [%d] = %d",i,pilha [i]);  
     } 
  else printf ("\n Pilha vazia");
}

main(){
	int pilha[MAX];
	push(pilha, 1);
	push(pilha, 2);
	push(pilha, 3);
	push(pilha, 4);
	push(pilha, 5);
	exibe(pilha);
}
