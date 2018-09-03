#include <stdio.h>
#include "biblioteca.h"

int pedirEntero(char texto[]){

    int numero;

    printf("%s", texto);
    scanf("%d", &numero);

    return numero;

}


void incrementarValor(int* valor){

    (*valor)++;

};
