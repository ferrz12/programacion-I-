#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char nombre[20];
    char apellido[20];
    char nombreCompleto[41]; //se puede inicializar a 0 para eliminar la basura
    char buffer[1024]; //auxiliar, guarda cosas, se usa para validar, y se le da un tamaño importante
    int i;

    printf("Ingrese nombre \n");
    fflush(stdin);
    gets(buffer);

    while(strlen(buffer) > 19){
        printf("Reingrese nombre \n");
        fflush(stdin);
        gets(buffer);
    }

    strcpy(nombre, buffer);

    printf("Ingrese apellido \n"); //funcion getString()
    fflush(stdin);
    gets(buffer);

    while(strlen(buffer) > 19){
        printf("Reingrese apellido \n");
        fflush(stdin);
        gets(buffer);
    }

    strcpy(apellido, buffer);

    strcpy(nombreCompleto, apellido); //strcopy, 2da forma para eliminar basura, primero se elimina lab basura
    strcat(nombreCompleto, ", ");
    strcat(nombreCompleto, nombre);

    nombreCompleto[0] = toupper(nombreCompleto[0]); //toupper recibe el valor ascii, de A a a hay 32 de diferencia, el valor en este caso es pasado por valor

    for(i = 0; i < strlen(nombreCompleto); i++)
    {
        if(isspace(nombreCompleto[i])) // nombreCompleto[i] == ' ' es lo mismo
        {
            nombreCompleto[i + 1] = toupper(nombreCompleto[i + 1]);
        }
    }

    puts(nombreCompleto);

    return 0;
}
