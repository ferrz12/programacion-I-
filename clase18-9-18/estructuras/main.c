#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "alumno.h"
#define T 3


int main()
{

    eAlumno listadoMain[T];
    char opcion;

    for(i = 0; i<T; i++) //funcion inicializar alumnos
    {
        listadoMain[i].estado = -1; //alumno que no estado ni dado de alta ni dado de baja
    }

    do{
        printf("a. Alta de alumno\no. Ordenar lista de alumnos\nm. Mostrar listado\nM. Modificar legajo.s Salir\n");
        printf("Ingrese opcion :");
        opcion = getchar();

        switch(opcion)
        {
            case 'a':
                cargarListadoDeAlumnos(listadoMain, T);
                break;
            case 'o':
                ordenarPorNombre(listadoMain, T);
                break;
            case 'm':
                mostrarListadoDeAlumnos(listadoMain, T);
                break;
            case 'M':

            case 's':
                opcion = 's';
                break;
            default:
                printf("Ingrese una opcion valida");
        }

    system("cls");
    system("pause");


    }while(opcion = 's');






    //eAlumno miAlumnoMain;

    //miAlumnoMain = cargarAlumno();

    // eAlumno otroAlumno;

    // printf("%d--%s--%f--%d\n", miAlumno.legajo, miAlumno.nombre, miAlumno.altura, miAlumno.nota);

    // otroAlumno = miAlumno; //dupllica los valores al ser por valor




    return 0;
}

