#include <stdio.h>
#include <stdlib.h>
#define T 2

void cargarAlumnos(int[], char[][21], int[], float[], int); //alta
void mostrarAlumnos(int[], char[][21], int[], float[], int);

/*
-ordenar nombre
-muestre alumnos aprobados (nota>6)
-muestre alumnos que se llaman juan
-muestre alumnos cuyo nombres comienzan con P
-el alumno con mas nota (sabiendo que puede ser mas que uno)
-el mas mediocre, legajo = 100, nota = 5, se llama pepe, medir 1.75, si esta o no
-ingresar un legajo y permitir la modificacion de la nota
-transformar la carga de datos en una carga aleatoria
*/


int main()
{
     int legajos[T];
     char nombres [T][20]; //matriz de 10 filas por 21 caracteres, 10x21
     int notas[T];
     float alturas[T];

    cargarAlumnos(legajos, nombres, notas, alturas, T);
    mostrarAlumnos(legajos, nombres, notas, alturas, T);



    return 0;
}


void cargarAlumnos(int legajos[], char nombres[][21], int notas[], float alturas[], int cantidadDeElementos)
{
    int i;
    for(i = 0; i<T; i++)
     {
            printf("Ingrese legajo : ");
            scanf("%d", &legajos[i]);
            printf("Ingrese nombre : ");
            fflush(stdin);
            gets(nombres[i]); //solo lee la fila, si quiero con columnas seria [i][j]
            printf("Ingrese nota : ");
            scanf("%d", &notas[i]);
            printf("Ingrese altura : ");
            scanf("%f", &alturas[i]);
     }
}

mostrarAlumnos(int legajos[], char nombres[][21], int notas[], float alturas[], int cantidadDeElementos)
{
     int i;
     printf("%4s %20s %4s %5s\n", "Legajo", "Nombre", "Nota", "Altura ");
     for(i = 0; i < T; i++){
        printf("%4d %20s %4d %5f \n", legajos[i], nombres[i], notas[i], alturas[i]);
     }
}
