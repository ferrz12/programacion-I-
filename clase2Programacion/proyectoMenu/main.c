#include <stdio.h>
#include <stdlib.h>

int ingresarOpcion(void);

int main()
{

    int opcion;
    int n1;
    int n2;

    do{
        printf("1.Sumar\n");
        printf("2.Restar\n");
        printf("3.Multiplicar\n");
        printf("4.Division\n");
        printf("5.Salir\n");

        opcion = ingresarOpcion();

             switch(opcion){
        case 1:
            printf("Estoy sumando");
            n1 = ingresarOpcion();
            n2 = ingresarOpcion();
            break;
        case 2:
            printf("Estoy restando");
            break;
        case 3:
            printf("Estoy multiplicando");
            break;
        case 4:
            printf("Estoy dividiendo");
            break;
        default:
                opcion = 5;

    }

    system("pause");
    system("cls");

    }while(opcion != 5);

    return 0;
}

int ingresarOpcion(void){

    int opcion;

    printf("Ingrese un numero: ");
    scanf("%d", &opcion);

    return opcion;

}

