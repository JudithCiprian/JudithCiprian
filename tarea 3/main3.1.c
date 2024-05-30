#include <stdio.h>
#include <stdlib.h>

//nomina
// el programa el recibir los salarios de 15 profesores, obtiene el total de la nomina de la universidad.
// I: variable de tipo entero
//SAL y NOM: variable de tipo real

int main()//ejecuta el programa
{

    int I;//declara la variable I
    float SAL, NOM;//declara dos variables float y SAL
    NOM = 0;//inicializa la variable NOM es necesario para acumular los salarios desde cero
    for (I=1; I<=15; I++)//inicia un buble for que ejecuta 15 veces desde I=1 hasta I=15 el codigo dentro del bucle se ejecutara en cada uno de los 15 profesores
    {
    printf("\Ingrese el salario del profesor%d:\t", I);//imprime un mensaje, el valor de I se incluye en el mesaje por %d
    scanf ("%f", &SAL);//lee float y lo almacena en SAL
    NOM = NOM + SAL;//suma el valor almacenado en SAL a la variable NOM acumula el total de la nomina conforme se ingresa a los salarios
    }

    printf("\nEl total de la nomina es: %.2f", NOM);//imprime texto
    return 0;//ejecuta el programa
}
