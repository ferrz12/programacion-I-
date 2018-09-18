#include <stdio.h>
#include <stdlib.h>
#define T 5

void ingresarDatoAleatorio(char[], int);

int main()
{
    //crear vector de enteros



    int vector[T];
    char seguir;
    int indice;

    //inicializarlo a -1
    int i;
    for(i = 0; i < T; i++){
        vector[i] = - 1;
    }



/** \brief busca espacio disponible
 *
 * \param int[] listado de enteros
 * \param int tamaño del listado
 * \param int el valor ilogico
 * \return int [-1] si no hay espacio, si devuelve [>=0] un indice donde guardar
 *
 */
int buscarLibre(int[], int, int);

//do-while pidiendo datos
    do{

        indice = buscarLibre(vector, T, -1);

        if(indice != -1){
            printf("Ingrese un numero");
            scanf("%d", &vector[indice]); //el indice esta en el vector porque dice donde puedo guardarlo
        }else{
            printf("no hay mas espacio");
            break;
        }

    printf("Desea ingresar otro?\n");
    fflush(stdin);
    seguir = getchar();

    }while(seguir != 'n');

    return 0;
}

int buscarLibre(int numeros[], int tam, int ilogico)
{
    int index = -1;
    int i;
    for(i = 0; i < tam; i++){
        if(numeros[i] == ilogico){
            index = i;
            break;
        }
    }

    return index;
}



//buscar donde guardo
//si encuentra donde, guardar
//pedir dato
//preguntar si quiere guardar otro
//si no encuentra informarlo
