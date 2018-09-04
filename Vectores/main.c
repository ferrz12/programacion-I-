#include <stdio.h>
#include <stdlib.h>
#define T 10

int main()
{
    int i;
    int j;
    int aux;
    int vector[T] = {80,90,50,30,2,4,5,34,56,20};

    //metodo de ordenamiento con burbujeo

    for(i = 0; i < T-1; i++)
    {
        for(j = i+1; j < T; j++)
        {
            if(vector[i] < vector[j]){
                aux = vector[i];
                vector[i] = vector[j];
                vector[j] = aux;
            }
        }
    }

    for(i = 0; i < T; i++){
        printf("%d\n", vector[i]);
    }


    /*

        for(i = 0; i < T; i++){

            printf("Ingrese un numero: \n");
            scanf("%d", &vector[i]);

    */

    /*

    printf("\n Todos los numeros: \n");

        for(i = 0; i < T; i++){
            printf("%d\n", vector[i]); // con & devuelve la direccion de variable
        }

        printf("\n Todos los numeros pares: \n");

        for(i = 0; i < T; i++){


            if(vector[i]%2==0){
                printf("%d\n", vector[i]);
            }

        }

    */


    return 0;
}

