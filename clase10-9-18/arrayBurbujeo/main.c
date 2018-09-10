#include <stdio.h>
#include <stdlib.h>

void inicializaArray(int parametroVector[], int cantidadDeElementos, int valorInicial);
void mostrarArray(int parametroVector[], int cantidadDeElementos);

int main()
{

    int miArrayDelMain[5];

    inicializaArray(miArrayDelMain,5,-1);
    mostrarArray(miArrayDelMain,5);


    return 0;
}

void inicializaArray(int parametroVector[], int cantidadDeElementos, int valorInicial){


for(cantidadDeElementos = cantidadDeElementos - 1; cantidadDeElementos >= 0; cantidadDeElementos--){
    parametroVector[cantidadDeElementos] = valorInicial;
}

}

void mostrarArray(int parametroVector[], int cantidadDeElementos){

for(cantidadDeElementos = cantidadDeElementos - 1; cantidadDeElementos >= 0; cantidadDeElementos--){
    printf("%d\n", parametroVector[cantidadDeElementos]);
}

}
