#include <stdio.h>
#include <stdlib.h>

//void sumar1(void); no retorna, no recibe
int sumar(int, int);

int main()
{

    int suma;
    int numeroUno;
    int numeroDos;

    printf("Ingrese el primer numero: ");
    scanf("%d", &numeroUno);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &numeroDos);

    suma = sumar(numeroUno, numeroDos);

    printf("La suma es: %d", suma);

    return 0;
}

int sumar(int n1, int n2)
{
    int suma;

    suma = n1 + n2;

    return suma;
}



