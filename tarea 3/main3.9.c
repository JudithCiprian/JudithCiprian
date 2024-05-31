#include <stdio.h>
#include <stdlib.h>


//serie, el programa imprime los terminos y obtiene la suma de una deteerminada serie
//I, SSE y CAM: variable de tipo entero
int main()
{
    int I= 2, CAM = 1;//I inicializa en 2 es el contador que recorre los terminos de la serie , CAM inicializa en 1 se utiliza para alternar el incremento de I
    long SSE = 0;//inicializa en 0,almecena la suma de los terminos de la serie
    while(I <= 2500)// ejecuta el bucle mientras I sea menor o igual a 2500
    {
     SSE = SSE + I;//suma el valor de I a SSE
     printf("\t %d", I);
     if (CAM)// comprueb el valor de CAM
     {
         I += 5;//si CAM es 1, incrementa I en 5
         CAM--;// CAM se decremento a 0

     }
else
{
    I += 3;//si CAM es 0, incrementa I en 3
    CAM++;// CAM se incremnta a 1
}


    }
    printf("\nLa suma de la serie es: %ld", SSE);
    return 0;
}
