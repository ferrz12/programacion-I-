#include <stdio.h>
#include <stdlib.h>

int main()
{
    int unNumero;
    int otroNumero;
    float division;

    printf("Ingrese un numero: ");
    scanf("%d", &unNumero);

    printf("Ingrese otro numero: ");
    fflush(stdin);
    scanf("%d", &otroNumero);

    division = (float)unNumero/otroNumero;

    printf("El resultado es: %.2f", division);


    return 0;
}
