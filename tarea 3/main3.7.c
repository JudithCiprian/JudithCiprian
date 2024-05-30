#include <stdio.h>
#include <stdlib.h>

//lanzamiento de martillo
//el programa al recibir como dato N lanzamiento de martillo; calcula el promedio de los lanzamientos de la atleta dominicana
//I, N: variable de tipo entero
//LAN, SLA variable de tipo real

int main()
{
    int I, N;//I:contador en bucle N: numero de lanzamientos que el usuario va a ingresar
    float LAN, SLA = 0;//LAN:alamcena cada lanzamiento ingresado, SLA:suma acumulada de los lanzamientos
    do//bucle que valida la entradaa de N
    {
        printf ("ingrese el numero de lanzamientos:\t");
        scanf("%d", &N);

    }
    while (N < 1||N >11);//repite la solicitud hasta que N este en el rango de 1 a 11
    //se utiliza la estructura do-while para verificar que el valor de N sea correcto
    for (I= 1; I<=N; I++)//ingresa la suma de los lanzamientos
    {
        printf("\ningrese el lanzamiento %d:", I);
        scanf ("%f", &LAN); // itera desde I = 1 hata I= N
        SLA = SLA + LAN;//solicita al usuario que ingrese un lanzamiento LAN y lo suma a SLA

    }
    SLA = SLA / N; //divide la suma acumulada de los lanzamientos SLA por el numero de lanzamientos N para obtener el promedio
    printf("\nEl promedio de lanzamiento es: %.2f", SLA);
    return 0;
}
