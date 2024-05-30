#include <stdio.h>
#include <stdlib.h>

//suma positivos.
//el programa el recibir como datos n numero entero, obtine la suma de los enteros positivos
// I, N, NUM, SUM: variable de tipo entero



int main()
//I usado como contador en el bucle for
//N alamcena la cantidad de numeros que se van a ingresar
//NUM almacena cada numero ingreesado por el usuario
//SUM acumula la suma de los numeros positivos

{
    int I, N, NUM, SUM;//declara cuatro variables de tipo entero
    SUM = 0;//inicia SUM en 0 y empieza acumular la suma de los numeros positivos desde cero
    printf("ingrese el numero de datos:\t");//imprime texto
    scanf("%d", &N);//lee el valor introducido y lo amacena en NUM
    for( I=1; I<=N; I++)//inicia un bucle for que se ejecuta en N para (I=1)hasta I=N, para que el codigo se ejecute una vez por cada uno de los N numeros
    {
      printf("ingrese el dato numero %d:\t", I);//imprime texto
      scanf("%d", &NUM);//lee el valor introducido y lo almacena en NUM
      if (NUM > 0)//comprueba si el numero es positivo
      SUM = SUM + NUM;//si el numero es positivo se suma a la variable
    }


    printf("\nLa suma de los numeros positivos es %d", SUM);//imprime la suma de los numeros positivos
    return 0;
}
