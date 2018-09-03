#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int calcularFactorial(int);

int main()
{
    /*
    int edad;

    edad = pedirEntero("Ingrese edad: ");
    printf("Edad %d", edad);

    */


  /*
    int x = 10;
    incrementarValor(&x);
    printf("El valor es: %d", x);
 */

 //factorial

 /*



 for(i = n; i >= 1; i--){
    resultado = resultado * i;
 }

 printf("El factorial es: %d", resultado);

 */

int n = 5;
int resultado;

    resultado = calcularFactorial(n);

    printf("El factorial es: %d", resultado);

   return 0;
}

int calcularFactorial(int numero){

int resultado;

if(numero == 0){
    resultado = 1;
}else{
    resultado = numero * calcularFactorial(numero - 1);
}

return resultado;

}
