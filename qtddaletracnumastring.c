#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main () {
    char string [40];
    int i, tam, qtd;
    qtd = 0;
    printf ("Digite a string com no maximo 40 caracteres: \n");
    gets (string);
    tam = strlen (string);
    for (i = 0; i<tam; i++){
          if (string [i] == 'c')
                qtd++;
    }
    printf("\nVezes que o caractere 'c' apareceu: %d\n", qtd);
    system ("PAUSE");
}
