#include <stdio.h>
#include <stdlib.h>

//suma pagos
//el programa al recibir como datos un conjunto de pagos realizados en el ultimo
// mes, obtiene la suma de los mismos
// PAG y SPA: varriable de tipo real

int main()
{
    float PAG, SPA;//declara las variables

    SPA = 0; //inicializa SPA suma de pagos acumulado a 0

    printf("ingrese el primer pago:\t"); //imprime el mensaje solicitado del primer pago

    scanf("%f", &PAG);//lee un valor flotante del usuario y lo almaceena en PAG

    while (PAG) //bucle que se ejecuta mientras PAG sea diferent4e de cero

        //observa que la condicion es verdadera mientras el pago es diferente de cero.


        {
        SPA = SPA + PAG; // suma el valor de PAG a SPA (acumula el pago acumulado)
        printf("ingrese el siguiente pago:\t"); //imprime el mensaje solicitando el siguiente pago
        scanf ("%f", &PAG);//lee el siguiente valor flotante del usuario y lo almacena en PAG

        //obeserva que la proposicion que modifica la condicion es una lectura
        }

    printf("\nEl totoal de pagos del mes es: %.2f", SPA);//
    return 0;//cuando el ususario ingrese 0 imprime la suma total de los pagos
}
