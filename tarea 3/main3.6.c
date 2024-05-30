#include <stdio.h>
#include <stdlib.h>

//nomina de profesores
//el programa al recibir como datos los salarios de los profesores de una universidad, obtine la nomina y el promedio de los salarios

int main()
//i:variable de tipo entero
//SAL, NOM y PRO variable de tipo real
{
    int I = 0;//contador de profesores
    float SAL, PRO, NOM = 0;//declara las variables SAL, PRO, NOM

    //SAL almacena el salario de ingreso
    //NOM suma acumulada de los salarios
    //PERO almacena el promedio de los salarios


    //imprime texto
    printf ("ingrese el salario del profesor:\t");
    //observa que al menos se necesita ingresar el salario de un profesor para que no ocurra un error de ejecucion del programa
    scanf("%f", &SAL); //solicita el primer salario
    do //do-while para ingresar salarios
    {
        NOM = NOM + SAL; //suma el salario ingresado a la nomina total
        I = I+I; //incrementa el contador de profesores
        printf("Ingrese el salario del profesor -0 para terminar- :\t");//solicita y lee salarios adicionales hasta que el ususario ingrese "0"
        scanf("%f", &SAL);
    }

while (SAL);//crea un bucle vacio que se ejecuta mientras SAL sea distinto a cero
PRO = NOM / I;//calcula el promedio de los salarios

//NOM es la suma de los salarios
//i es el contador que lleva la cuenta de cuantos salarioss se han ingresado
printf("\nNomina: %.2f \t Promedio de salarios: %.2f", NOM, PRO);

    return 0;
}
