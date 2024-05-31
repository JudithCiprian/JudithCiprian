#include <stdio.h>
#include <stdlib.h>
//calificaciones
//el programa al recibir un grupo de calificaciones de un alumno, obtiene el promedio de calificaciones de cada uno de ellos y, ademas los alumnos con el mejor y peor promedio
// I, MAT MAMAT y NEMAT: variable de tipo entero
//CAL, SUM, MAPRO, MEPRO y PRO variable de tipo real


int main()
{
    int I, MAT, MAMAT, MEMAT;
    float SUM, PRO, CAL, MAPRO = 0.0, MEPRO =11.0;
    printf("ingrese la matricula del primer alumno:\t");
    scanf("%d", &MAT);
    while(MAT)
    {
        SUM = 0;
        for (I = 1; I <= 5; I++)
        {
            printf("\tingrese la calificacion de alumno: ", I);
            scanf("%f" , &CAL);
            SUM += CAL;
        }
    PRO = SUM / 5;
    printf("\nmatricula:%d\promedio: %5.2f" ,MAT, PRO);
    if (PRO > MAPRO)
    {
        MAPRO = PRO;
        MAMAT = MAT;

    }
    if (PRO < MEPRO)
{
    MEPRO = PRO;
    MEMAT = MAT;
}
printf("\n\ningrese la matricula del siguiemte alumno:");
scanf("%d", &MAT);
    }

    printf("\n\n alumno con mejor promedio:\t%d\t\%5.2f", MAMAT, MAPRO);
      printf("\n\n alumno con mejor promedio:\t%d\t\%5.2f", MEMAT, MEPRO);
    return 0;
}
