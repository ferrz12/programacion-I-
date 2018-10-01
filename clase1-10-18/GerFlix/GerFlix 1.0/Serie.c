#include "Serie.h"
#include <string.h>
#include <stdio.h>
#define VACIO 0
#define OCUPADO 1

/*
    int idSerie;
    char nombre[50];
    char genero[20];
    int cantidadTemporadas;
    int estado;

*/

void inicializarSeriesEstado(eSerie series[], int cant)
{
    int i;

    for(i=0; i<cant; i++)
    {
        series[i].estado = 0;
    }
}


void inicializarSeriesHardCode(eSerie series[])
{
    int id[5] = {100,101,102,103,104};
    char nombre[][50]={"TBBT","TWD","GOT","BB","LCDP"};
    char genero[][50]={"Comedia","Terror","Suspenso","Policial","Policial"};
    int cantidad[5] = {10,9,7,5,2};

    int i;

    for(i=0; i<5; i++)
    {
        series[i].idSerie=id[i];
        series[i].cantidadTemporadas=cantidad[i];
        series[i].estado = 1;
        strcpy(series[i].nombre, nombre[i]);
        strcpy(series[i].genero, genero[i]);
    }
}

void mostrarListaSeries(eSerie series[], int tam){

    int i;
    for(i = 0; i < tam; i++)
    {
        if(series[i].estado == VACIO)
        {
            mostrarSerie(series[i]);
        }
    }
}

void mostrarSerie(eSerie unaSerie)
{
    printf("%d--%s--%s--%d--%d\n", unaSerie.idSerie, unaSerie.nombre, unaSerie.genero, unaSerie.cantidadTemporadas, unaSerie.estado);
}

int retornarIndiceSerie(eSerie series[], int tam, eSerie unaSerie)
{
    int i;
    for(i = 0; i < tam; i++)
    {
        if(series[i].idSerie == unaSerie.idSerie){
            return i;
        }
    }

    return -1; //si no lo encuentra, retorna -1
}

int retornarIndiceSerieInt(eSerie series[], int tam, int idSerie)
{
    int i;
    for(i = 0; i < tam; i++)
    {
        if(series[i].idSerie == idSerie){
            return i;
        }
    }

    return -1; //si no lo encuentra, retorna -1
}


