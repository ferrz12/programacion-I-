#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador=0;
	//declarar contadores y variables
	int par=0;
	int impar=0;
    int cp=0;//contador de positivos
	int cn=0;//contador de negativos
	int cc=0;//contador de ceros
	char respuesta = 's';
	int sn=0;//acumulador de negativos
	int sp=0;//acumulador de positivos
	int num;
	int pn;//promedio de negativos
	int pp;//promedio de positivos
	int dif = 0;//diferencia entre las cantidades de numeros positivos y negativos
	int max = 0;
	int min = 0;
	int flag = 0;
    //-----------------------------------------------------------------------------------------
	while(respuesta == 's'){

        printf("Ingrese un numero: ");
        scanf("%d", &num);

        if(flag == 0){

            max = num;
            min = num;

            flag = 1;
        }

        if(num > max){
            max = num;
            }

        if(num < min){
            min = num;
        }

		if(num > 0){
			cp++;
			sp+=num;
                }else if(num<0){
                            cn++;
                            sn+=num;
                        }else if(num==0){
                                    cc++;
                                }

		if(num%2==0){
                    par++;
                }else
                    {
                        impar++;
                    }

		contador++;

		printf("Desea ingresar otro numero?");
		scanf(" %c", &respuesta);

	}
//-------------------------------------------------------------
	pp = sp/cp;
	pn = sn/cn;
	dif = cp-cn;

    printf("Suma de negativos: %d\n", sn);
    printf("Suma de positivos: %d\n", sp);
    printf("Cantidad de positivos: %d\n", cp);
    printf("Cantidad de negativos: %d\n", cn);
    printf("Cantidad de ceros: %d\n", cc);
    printf("Cantidad de pares: %d\n", par);
    printf("Cantidad de impares: %d\n", impar);
    printf("Promedio de negativos: %d\n", pn);
    printf("Promedio de positivos: %d\n", pp);
    printf("Diferencia de promedios: %d\n", dif);
    printf("El maximo es: %d\n", max);
    printf("El minimo es: %d", min);

    return 0;
}
