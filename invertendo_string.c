#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 100

int main (void)
{
    // Simples vetor de 100 caracteres
    char *entrada = (char *)  malloc(TAM * sizeof(char));
    if (!entrada) exit(1);
    
    printf("String de ate 100 caracteres: ");
    fgets(entrada, TAM-1, stdin);
    
    // Invertendo string
    char *aux = (char *)  malloc(TAM * sizeof(char));
    if (!aux) exit(1);
    
    for (int i=0, j=strlen(entrada)-1; i<TAM && j>=0; i++, j--)
        aux[i] = entrada[j];
        
    // Exibindo string invertida
    printf("\n%s", aux);
    
    free(entrada);
    free(aux);
    
    return 0;
}