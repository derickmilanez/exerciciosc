#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main () {
    char string [100];
    int i, tam;
    printf ("Digite a string com no maximo 100 caracteres: \n");
    gets (string);
    tam = strlen (string);
    for (i = 0; i<tam; i++){
          if (string [i] == ' ')
                string [i] = '_';
    }
    printf("\nResultado: \n");
    puts (string);
    system ("PAUSE");
}
