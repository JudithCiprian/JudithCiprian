#include <stdio.h>
#include <stdlib.h>
//suma cuadrados
//el programa al recicbir como datos un grupo de enteros positivos, obtiene el cuadrado de los mismos y la suma correspondiente a dichos cuadrados

int main()
{
    int NUM;//declara la variable NUM
    long CUA, SUC = 0;// declara la variables CUA alamcena el cuadrado de cada numero ingresado, SUC para acumular la suma de los cuadrados inicializada a o
    printf("\nIgrese un numero entero -0 para terminar-:\t");
    scanf("%d", &NUM);//lee un valor de tipo entero y lo almacena en NUM
    while(NUM)//inicia un bucle que se ejecuta mientras NUM sea diferente de cero
        //obeserva que la condicion es verdadera mientras el entero es diferente de cero

    {
        CUA = pow (NUM, 2);//Calcula el cuadrado de NUM usando la funcion pow y lo almacena en CUA
        printf ("%d al cubo es %ld", NUM, CUA);//imprime texto
        SUC = SUC + CUA;//suma el valor de CUA a la variable SUC, acumulado el total de los cuadrados
        printf ("\Ingrese un numero entero -0 para terminar-:\t");
        scanf ("%d", &NUM);//lee el siguiente valor y lo amacena en NUM

    }






    printf("\nLa suma de los cuadrados es %ld", SUC);
    return 0;
}
