#include <stdio.h>
#include <stdlib.h>
//empresa textil: el programa al recibir como dato decisivo la categoria y antiguedad de un empleo, determina si el mismo reune las condiciones establecidas por la emprese para ocupar un nuevo cargo en una sucursal.
//CLA, CAT, ANT, RES: variable de tipo entero
//SAL: variable

int main()
{
 int CLA, CAT, ANT, RES;
 printf ("\nºingrese la clave, categoria y antiguedad del trabajador;");
 scanf ("%d %d %d", &CLA, &CAT, &ANT);
 switch(CAT)

 {

    case 3:
case 4: if (ANT >= 5)
    RES = 1;
else
    RES = 0;
break;

case 2: if (ANT >= 7)
    RES = 1;
else
    RES = 0;
break;

default: RES = 0;
break;
 }
    if(RES)
        printf ("\n El trabajador con clave %d reune las condiciones para el puesto", CLA);
    else
        printf ("\n El trabajador con clave %d no reune las condiciones para el puesto", CLA);

    return 0;
}
